#pragma once

template<class T>
class Stack
{
private:
	T* stack;
	int size;
	T* copy();

public:
	Stack();
	void push(T data);
	void pop();
	T top();
	bool empty();
	int length();
};

template<class T>
Stack<T>::Stack()
{
	size = 0;
	stack = new T[size];
}

template<class T>
T* Stack<T>::copy()
{
	T* _stack;
	_stack = new T[size];
	for (int i = 0; i < size; i++)_stack[i] = stack[i];
	return _stack;
}

template<class T>
void Stack<T>::push(T data)
{
	T* _stack;
	_stack = copy();
	size++;
	stack = new T[size];
	for (int i = 0; i < size - 1; i++)stack[i] = _stack[i];
	stack[size - 1] = data;
}

template<class T>
void Stack<T>::pop()
{
	T* _stack;
	_stack = copy();
	size--;
	stack = new T[size];
	for (int i = 0; i < size; i++)stack[i] = _stack[i];
}

template<class T>
T Stack<T>::top()
{
	return stack[size - 1];
}

template<class T>
bool Stack<T>::empty()
{
	return !size;
}

template<class T>
int Stack<T>::length()
{
	return size;
}