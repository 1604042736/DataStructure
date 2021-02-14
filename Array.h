#pragma once

template<class T>
class Array
{
private:
	T* array;
	int size;
	T* copy();

public:
	Array();
	void append(T data);
	T pop();
	void insert(int index, T data);
	void del(int index);
	int length();
	T operator[] (int index);
};

template<class T>
Array<T>::Array()
{
	size = 0;
	array = new T[size];
}

template<class T>
T* Array<T>::copy()
{
	T* _array;
	_array = new T[size];
	for (int i = 0; i < size; i++)_array[i] = array[i];
	return _array;
}

template<class T>
void Array<T>::append(T data)
{
	T* _array = copy();
	size++;
	array = new T[size];
	for (int i = 0; i < size - 1; i++)array[i] = _array[i];
	array[size - 1] = data;
}

template<class T>
int Array<T>::length()
{
	return size;
}

template<class T>
T Array<T>::operator[] (int index)
{
	return array[index];
}

template<class T>
T Array<T>::pop ()
{
	T* _array;
	_array = copy();
	T data = array[size - 1];
	size--;
	array = new T[size];
	for (int i = 0; i < size; i++)array[i] = _array[i];
	return data;
}

template<class T>
void Array<T>::insert(int index,T data)
{
	T* _array;
	_array = copy();
	size++;
	array = new T[size];
	for (int i = 0; i < index; i++)array[i] = _array[i];
	array[index] = data;
	for (int i = index + 1; i < size; i++)array[i] = _array[i-1];
}

template<class T>
void Array<T>::del(int index)
{
	T* _array;
	_array = copy();
	size--;
	array = new T[size];
	for (int i = 0; i < index; i++)array[i] = _array[i];
	for (int i = index; i < size; i++)array[i] = _array[i + 1];
}