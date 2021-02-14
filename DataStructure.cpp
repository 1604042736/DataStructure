#include <iostream>
#include "Array.h"
#include "Stack.h"
#include "Queue.h"
#include "List.h"
#include "Tree.h"
#include "Graph.h"
#include "Hash.h"
#include "Heap.h"
using namespace std;

void array_test()
{
	Array<int> array;
	array.append(1);
	array.append(2);
	array.pop();
	array.insert(0, 0);
	array.del(0);
	for (int i = 0; i < array.length(); i++)
	{
		cout << array[i] << " ";
	}
}

void stack_test()
{
	Stack<int> stack;
	stack.push(0);
	stack.push(1);
	stack.push(2);
	while (!stack.empty())
	{
		cout << stack.top() << " ";
		stack.pop();
	}
}

void queue_test()
{
	Queue<int> queue;
	queue.push(0);
	queue.push(1);
	queue.push(2);
	while (!queue.empty())
	{
		cout << queue.front() << " " << queue.back() << endl;
		queue.pop();
	}
}

void list_test()
{
	List<int> list;
	list.insert(0, 0);
	list.insert(0, 1);
	list.insert(0, 2);
	for (int i = 0; i < list.length(); i++)
	{
		cout << list.search(i) << endl;
	}
}

void tree_test()
{

}

void graph_test()
{

}

void hash_test()
{

}

void heap_test()
{

}

int main()
{
	//array_test();
	//stack_test();
	//queue_test();
	//list_test();
	tree_test();
	graph_test();
	hash_test();
	heap_test();
}