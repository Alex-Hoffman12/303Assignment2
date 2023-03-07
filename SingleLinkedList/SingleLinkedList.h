#ifndef SINGLELINKEDLIST_H_
#define SINGLELINKEDLIST_H_

#include <stddef.h>

struct Node {
	Node* next;
	int data;

	Node(int dataItem, Node* next_prt = NULL) : data(dataItem), next(next_prt) {}
};


class SingleLinkedList
{
private:
	Node* head = NULL;
	Node* tail = NULL;
	size_t listCount = 0;

public:

	void pushFront(int item);

	void pushBack(int item);

	void popFront();

	void popBack();

	const int front() const;

	const int back() const;

	bool empty();

	void insert(size_t index, int data);

	bool remove(size_t index);

	size_t find(int item);

	void printList();
};


#endif // !SINGLELINKEDLIST_H_