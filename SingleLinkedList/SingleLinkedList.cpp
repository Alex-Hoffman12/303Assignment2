#include "SingleLinkedList.h"
#include <iostream>

using namespace std;

void SingleLinkedList::pushFront(int data) {
	Node* newNode = new Node(data);

	newNode->next = head;
	head = newNode;
	if (listCount == 0) {
		tail = head;
	}
	listCount++;
}

void SingleLinkedList::pushBack(int data) {
	if (empty() == true) {
		pushFront(data);
	}
	else {
		Node* newNode = new Node(data);
		tail->next = newNode;
		tail = newNode;
		tail->next = NULL;
	}
	listCount++;
}

void SingleLinkedList::popFront() {
	if (empty() == false) {
		if (head->next == NULL) {
			delete head;
			listCount--;
		}
		else {
			Node* oldTop = head;
			head = head->next;
			delete oldTop;
			listCount--;
		}
	}
	else
		cout << endl << "Can not pop because list is empty" << endl << endl;
}

void SingleLinkedList::popBack() {
	if (empty() == false) {
		if (head->next == NULL) {
			popFront();
		} 
		else {
			Node* tempNode = head;
			for (int i = 1; i < listCount - 1; i++) {
				tempNode = tempNode->next;
			}
			delete tail;
			tempNode->next = NULL;
			tempNode = tail;
			listCount--;
		}
	}
	else
		cout << endl << "Can not pop because list is empty" << endl << endl;

}


const int SingleLinkedList::front() const {
	return(head->data);
}

const int SingleLinkedList::back() const {
	return(tail->data);
}

bool SingleLinkedList::empty() {
	if (listCount == 0)
		return (true);
	else
		return (false);
}

void SingleLinkedList::insert(size_t index, int data) {
	
	Node* tempNode = head;
	for (int i = 1; i < index - 1; i++) {
		tempNode = tempNode->next;
	}
	Node* nextNode;
	nextNode = tempNode->next;
	Node* newNode = new Node(data);
	tempNode->next = newNode;
	newNode->next = nextNode;
	listCount++;
		
}

bool SingleLinkedList::remove(size_t index) {
	if (empty() == false) {
		if (head->next == NULL) {
			delete head;
			listCount--;
			return (true);
		}
		else {
			Node* tempNode = head;
			for (int i = 1; i < index - 2; i++) {
				tempNode = tempNode->next;
			}
			Node* delNode;
			delNode = tempNode->next;
			if (tempNode->next->next == NULL) {
				delete delNode;
				tail = tempNode;
				tempNode->next = NULL;
				listCount--;
				return (true);
			}
			else {
				Node* newNextNode;
				newNextNode = delNode->next;
				delete delNode;
				tempNode->next = newNextNode;
				listCount--;
				return (true);
			}
		}
	}
	else {
		return(false);
	}
	
	return(index);
}

size_t SingleLinkedList::find(int data) {
	if (empty() == false) {
		Node* tempNode = head;
		if (tempNode->data == data)
			return(1);
		for (int i = 1; i < listCount; i++) {
			tempNode = tempNode->next;
			if (tempNode->data == data)
				return(i + 1);
		}
	}
	else {
		cout << endl << "Can not find item because list is empty" << endl << endl;
		return(0);
	}
	
}

void SingleLinkedList::printList() {
	cout << endl;
	if (empty() == false) {
		Node* tempNode = head;
		cout << head->data;
		for (int i = 1; i < listCount; i++) {
			tempNode = tempNode->next;
			cout << " -> " << tempNode->data;
		}
		cout << endl << endl;
	}
	else
		cout << endl << "The list is currently empty" << endl << endl;
}