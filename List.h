#pragma once

template<class T>
class List
{
private:
	struct list
	{
		T data;
		list* next;
	}*head;

public:
	List();
	void insert(int index, T data);
	void del(int index);
	T search(int index);
	void change(int index, T data);
	int length();
};

template<class T>
List<T>::List()
{
	head = new list;
	head->next = NULL;
}

template<class T>
void List<T>::insert(int index, T data)
{
	list* p;
	p = head;
	for (int i = 0; i < index; i++)p = p->next;
	list* t;
	t = new list;
	t->data = data;
	t->next = p->next;
	p->next = t;
}

template<class T>
void List<T>::del(int index)
{
	list* p;
	p = head;
	for (int i = 0; i < index - 1; i++)p = p->next;
	p->next = p->next->next;
}

template<class T>
T List<T>::search(int index)
{
	list* p;
	p = head->next;
	for (int i = 0; i < index; i++)p = p->next;
	return p->data;
}

template<class T>
void List<T>::change(int index, T data)
{
	list* p;
	p = head->next;
	for (int i = 0; i < index; i++)p = p->next;
	p->data = data;
}

template<class T>
int List<T>::length()
{
	list* p;
	p = head;
	int size = 0;
	while (p->next != NULL)
	{
		size++;
		p = p->next;
	}
	return size;
}