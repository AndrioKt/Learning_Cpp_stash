#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <optional>
#include <stack>
#include <map>

const int INF = std::numeric_limits<int>::max();//зададим понятие бесконечности
//создадим ребра
struct Edge
{
	int weight;//вес ребра
	std::size_t indexTo;//направление ребра
};

//создадим вершины
struct Node
{
	int id;//номер вершины
	std::vector<Edge> edges;//у каждой вершины список ребер

	std::size_t prevIndex;
	int weight;
	bool visited;
};
//создадим структуру графа
struct Graph
{

	std::vector<Node> nodes;//список вершин

		void clear()//функция полной очистки графа
	{
		nodes.clear();
	}
		//очистка списка ребер для вершины
		void clear_edges()
		{
			for (auto& node:nodes)
			{
				node.edges.clear();
			}
	}
		//Инициализируем стартовые параметры
		void init_start_values()
		{
			for (auto& node : nodes)
			{
				node.weight = INF;//вес вершины (путь до нее) по умолчанию равен бесконечности
				node.visited = false;//инициализация того, что они не были посещены
				node.prevIndex = INF;// восстановление пути (помечание из какой вершины сюда пришли)
			}
		}
	
};

//Работа с файлами:
//считывание вершин
bool read_nodes(std::istream& istream, std::size_t nodes_count, Graph& graph_out)
{
	graph_out.nodes.clear();//сперва очищаем записи о вершинах

	for (std::size_t i = 0; i < nodes_count; i++)//считываем id всех вершин из файла
	{
		decltype(Node::id) id;
		istream >> id;//считываем id
		graph_out.nodes.push_back({ id });// записываем id
	}

	return true;
}

//считывание ребер
bool read_edges(std::istream& istream, std::size_t edges_count, Graph& graph_out)
{
	graph_out.clear_edges();//очищаем

	for (std::size_t i = 0; i < edges_count; i++)//считываем ребра, состоящие из параметров:
	{
		int start_id, end_id;// id начала и конца ребра
		int weight;	// и его веса

		istream >> start_id >> end_id;
		istream >> weight;

		auto& nodes_ref = graph_out.nodes;//инициализируем ссылку на обьект (??)

		auto start_iter = std::find_if(nodes_ref.begin(), nodes_ref.end(), [start_id](const auto & node) { return node.id == start_id; });//поиск начала ребра
		auto end_iter = std::find_if(nodes_ref.begin(), nodes_ref.end(), [end_id](const auto & node) { return node.id == end_id; });//поиск конца ребра

		if (start_iter == nodes_ref.end() || end_iter == nodes_ref.end())
		{
			graph_out.clear_edges();//если не нашли, то ошищаем и выходим из функции

			return false;
		}
		std::size_t index = (end_iter - nodes_ref.begin());
		(*start_iter).edges.push_back(Edge{ weight, index });//вкладываем в вершину начала новое ребро(вес и индекс на которое оно будет указывать)
	}

	return true;
}
//считывание графа
Graph read_graph(const std::string& file_path)//передаем путь к ТХТ файлу откуда будем считывать граф
{
	Graph graph;
	std::ifstream fin(file_path);
	if (fin)
	{
		std::size_t node_count;//считываем количество вершин
		int edge_count;//считываем количество ребер
		fin >> node_count >> edge_count;

		if (read_nodes(fin,node_count, graph))//если вершины были считаны удачно
		{
			read_edges(fin, edge_count, graph);//то считываем ребра между ними
		}
	}
	return graph;
}
//напишем функцию конвертации графа в путь(в последовательный список индексов)
std::vector<std::size_t> convert_graph_to_path(Graph& graph, std::size_t start_index, std::size_t end_index)
{
	std::vector<std::size_t> result;
	std::stack<std::size_t> tmp_path;
	std::size_t current_node = end_index;
	while (current_node != INF)//проходим от конечной веришны до начальной для заполнения стека
	{
		tmp_path.push(current_node);//помещаем все значения в стек (так будет виден путь в обратном порядке)
		current_node = graph.nodes[current_node].prevIndex;
	}
	while (!tmp_path.empty())//пока стек не пустой будем разкладывать все в обратной последовательности
	{
		result.push_back(tmp_path.top());
		tmp_path.pop();
	}
	return result;
}

std::vector<std::size_t> find_path_Dijkstra(Graph& graph, std::size_t start_index, std::size_t end_index)
{
	//пометим стартовые значения
	graph.init_start_values();//вызываем функцию, которая задаст стартовые условия( все вершины не посещены и расстояние для них - бесконечность)
	std::multimap<int, std::size_t> min_weight_map;//возьмем структуру данных (бинарное дерево поиска), где сортировка будет происходить по весу, а ключем будет индекс данной вершины
	graph.nodes[start_index].weight = 0;//зададим стартовую точку(укажем стартовый индекс, и вес стартовой точки = 0)
	min_weight_map.insert({ 0, start_index });//указываем эту стартовую точку в дереве
	while (!min_weight_map.empty())//работает пока не пусто мы будем извлекать последнюю вершину
	{
	//вытаскиваем минимальное значение (т.к в дереве под итератором begin лежит всегда минимальное значение)
		auto [current_weight, current_index] = *(min_weight_map.begin());//используем синтаксис с++17
		//[current_weight, current_index] - распаковывающая инициализация, добалвенная в с++17
		min_weight_map.erase(min_weight_map.begin());//после извлечения мы удаляем значение из дерева
		if(graph.nodes[current_index].visited)//сделаем пропускание уже посещенных вершин
		{
			continue; //пропустится и перейдет к следующей итерации
		}
		graph.nodes[current_index].visited = true;//помечаем обработанную вершину как посещенную
		for (std::size_t i = 0; i < graph.nodes[current_index].edges.size(); i++)//идем по всем соседнем к текущей вершинам
		{
			std::size_t index_to = graph.nodes[current_index].edges[i].indexTo;//то, куда будет указывать ребро
			int edged_weight = graph.nodes[current_index].edges[i].weight;//вес нашего ребра
			if (!graph.nodes[index_to].visited)//если данная вершина не посещена
			{
				if (current_weight + edged_weight < graph.nodes[index_to].weight)//если текущий вес + вес ребра меньше чем запомненный вес этой вершины
				{
					graph.nodes[index_to].weight = current_weight + edged_weight;//то указываем новый вес 
					graph.nodes[index_to].prevIndex = current_index;//делаем эту вершину текущей
					min_weight_map.insert({ graph.nodes[index_to].weight, index_to });//сохраняем вершину в дереве
				}
			}
		}
	}
	return convert_graph_to_path(graph, start_index, end_index);//
}
int main()
{
	auto graph = read_graph("input.txt");//прописываем путь до файла с графом
	auto path = find_path_Dijkstra(graph, 0, 4);

	for (auto path_node_index : path)
	{
		std::cout << graph.nodes[path_node_index].id << " ";
	}

	std::cout << std::endl;
	return 0;
}
//**********Заметки*********
/*
1)Вместо int в некоторых местах используется size_t (больше подходит для цикловых и арифметических операций, и в связи с особенностями размеров более подходит для 64х разрадных систем)
2)Для поиска будем использовать map (бинарное дерево поиска) или multimap / (так же можно через unordered_map - хеш таблицу)
3)map - ассоциативный массив где каждому ключу соответствует 1 значение, multimap - каждому ключу соответствовать могут 2 значения
*/