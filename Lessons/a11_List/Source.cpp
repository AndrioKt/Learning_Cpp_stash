#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>

class List
{
public:
	List();
	~List();
	int GetSize() { return Size; }
	void push_back(T data);//метод добавление данных в конец списка (создать элемент в конце списка)

	T& operator[](const int index);
private:
	
	template <typename T>//сделаем класс note шаблонным
	class Node 
	{//создадим вложенный класс "”зел", что бы он был доступен только в классе List
	public:
		Node* pNext; //создадим указатель на следующий элемент
		T data;
		Node(T data=T(), Node *pNext=nullptr)//по умолчанию в конструкторе сделаем nullptr дл€ последнего элемента
		{//в data по умолчанию передадим T(), таким образом если туда будет передеватьс€ класс, то сразу вызоветс€ конструктор по умолчанию
			this->data = data;
			this->pNext = pNext;
		}

	};
	int Size;
	Node<T> *head;//создадим обьект первого элемента. ƒл€ использовани€ типа данных “, требуетс€ и класс List сделать шаблонным (а так же каждый его конструктор, с указанием в нем типа данных “)
};


int main()
{
	List<int> lst;
	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(22);

	cout << lst[2] << endl;
	return 0;
}


//********************************************************
//********************************************************

template <typename T>
List<T>::List()
{
	Size = 0;//счетчик количества €чеек
	head = nullptr;//по умолчанию первый элемент будет сразу же последним
}

template <typename T>
List<T>::~List()
{
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) //ѕровер€ем пустой ли список
	{
		head = new Node<T>(data);//≈сли первый элемент пустой, то создаем его
	}
	else
	{
		
		// иначе создаем текущий элемент и присваиваем заголовок

		while (current ->pNext !=nullptr)
		{//в цикле перебираем весь список пока не дойдем до конца (до nullptr)
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);//выйд€ из цикла создадим следующий элемент
	}
	Size++; //прибавим счетчик количества элементов
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;// отвечает за то в каком ноде мы находимс€ (дл€ проверки адреса след элемента)
	while (current != nullptr)
	{
		if (counter == index)//когда счетчик будет равен введенному индексу, возвращаем данные этого элемента
		{
			return current->data;
		}
		//иначе мы присваиваем в счетчик адрес следующего элемента
		current = current->pNext;
		counter++;
	}
}
