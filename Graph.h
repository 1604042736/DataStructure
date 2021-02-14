#pragma once

template<class T>
class Graph
{
private:
	struct graph
	{
		T data;
		graph* next;
	};

public:
	Graph();
};

template<class T>
Graph<T>::Graph()
{
	
}