#pragma once

template<class T>
class Queue
{
private:
	T* queue;
	int size;
	T* copy();

public:
	Queue();
	void push(T data);
	void pop();
	bool empty();
	int length();
	T front();
	T back();
};

template<class T>
Queue<T>::Queue()
{
	size = 0;
	queue = new T[size];
}

template<class T>
T* Queue<T>::copy()
{
	T* _queue;
	_queue = new T[size];
	for (int i = 0; i < size; i++)_queue[i] = queue[i];
	return _queue;
}

template<class T>
void Queue<T>::push(T data)
{
	T* _queue;
	_queue = copy();
	size++;
	queue = new T[size];
	for (int i = 0; i < size - 1; i++)queue[i] = _queue[i];
	queue[size - 1] = data;
}

template<class T>
void Queue<T>::pop()
{
	T* _queue;
	_queue = copy();
	size--;
	queue = new T[size];
	for (int i = 0; i < size; i++)queue[i] = _queue[i + 1];
}

template<class T>
bool Queue<T>::empty()
{
	return !size;
}

template<class T>
int Queue<T>::length()
{
	return size;
}

template<class T>
T Queue<T>::front()
{
	return queue[0];
}

template<class T>
T Queue<T>::back()
{
	return queue[size-1];
}