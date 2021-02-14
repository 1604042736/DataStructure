#pragma once

template<class T>
class Tree
{
private:
	struct tree
	{
		T data;
		int childsize;
		tree* child;
	}*parent;

public:
	Tree();
};

template<class T>
Tree<T>::Tree()
{
	parent = new Tree;
	parent->childsize = 0;
	parent->child = new tree[parent->childsize];
}