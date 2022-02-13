#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;
template <typename T>
class List
{
public:
	List();
	~List();
	void clear();//очищение списка
	void pop_front(); //удаление начиная с первого элемента
	void push_back(T data);//добавление элементов в конец списка
	void push_front(T data);//добавление в начало
	void insert(T value, int index);//вставка по индексу
	void removeAt(int index);//удаление по индексу
	void pop_back();//удаление последнего элемента
	int GetSize() { return Size; }//возвращает количество элементов в списке
	T& operator[] (const int index);//по указанному индексу возвращают данные из списка

private:
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T>* head;
};

template<typename T>
List<T>::List()
{//создаем первый и основной элемент списка
	Size = 0;//размер односвязного списка
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::clear()
{
	while (Size)//пока размер не ноль (любое значения равно тру) - цикл выполняется
	{
		pop_front();
	}
}


template<typename T>
void List<T>::pop_front()//удаление с первого элемента производится быстрее (не приходится проходить весь список что бы удалить элемент с конца)
{
	Node<T> *temp = head;//создадим временный элемент необходимый что бы запомнить в каком месте в памяти лежит первый элементы (что бы его удалить)

	head = head->pNext;// присвоим значение головного элемента следующему
	delete temp;
	Size--;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);//если в первой ячейке списка пусто - записать в нее
	}
	else
	{
		Node <T>* current = this->head;//устанавливаем указатель на первый элемент

		while (current->pNext!=nullptr)//когда текущий указатель не указывает на 0, то текущий указатель
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);//когда дойдет до 0, записываем элемент в конец
	}
	Size++;
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data,head);//создадим новый элемент и запишем его в хед (в конструктор передадим саму Дату и адрес на текущий хэд)
	Size++;
}

template<typename T>
void List<T>::insert(T value, int index)
{
	if (index==0)//если в списке нет элементов, то просто вставляется первый элемент
	{
		push_front(value)
	}
	else
	{
	Node<T>* previous = this->head;//создаем временный указатель, и присваиваем значение хэда
	for (int i = 0; i < index-1; i++)//находим элемент с предидущим индексом(относительного нужного нам)
	{
		previous = previous->pNext;//присваеваем указатель на следующую ячейку
	}
	Node<T>*newNode = new Node<T>(value,previous->pNext);//создаем новый элемент, передаем ему данные и указываем на следующий элемент
	previous->pNext = newNode;//а у предидущего элемента меняем указатель на созданный элемент
	Size++;
	}
}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index==0)//если индекс равен нулю, то просто удаляем первый элемент
	{
		pop_front();
	}
	else {
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)//находим предидущий элемент
		{
			previous = previous->pNext;
		}
		Node<T>* toDalate = previous->pNext;
		previous->pNext = toDalate->pNext;
		delete toDalate;
		Size--;
	}
}

template<typename T>
void List<T>::pop_back()
{
	removeAt(Size-1)//удаляем по индексу, но всегда последний элемент (индекс = размер-1)
}

template<typename T>
T& List <T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;//устанавливаем текущий указатель на начальный головной элемент

	while (current != nullptr)//циклом проходим до тех пор пока не встретится 0 (конец списка)
	{
		if(counter == index)//когда счетчик совпадет с индексом - возвращаем данные
		{
			return current->data;
		}
		current = current->pNext;//пока не совпадает присваиваем укапзателю следующий элемент
		counter++;//и увеличиваем счетчик(индекса)
	}



}
int main()
{

	List<int> lst;

	lst.push_back(55);
	lst.push_back(11);
	lst.push_back(22);

	for (int i= 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << endl << "Elements: " << lst.GetSize() << endl;

	lst.clear();

	cout << endl << "Elements: " << lst.GetSize() << endl;
	/*
	int numbersCount;
	cin >> numbersCount;

	for (int i = 0; i < numbersCount; i++)
	{
		lst.push_back(rand() % 10);
	}

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}*/
	return 0;
}