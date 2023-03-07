#include "SingleLinkedList.h"
#include <iostream>

using namespace std;

int main() {

	int userSelct = -1;
	int userInput = 0;
	size_t inx = 0;

	SingleLinkedList list;

	cout << "Welcome to the linked list practice" << endl << endl;
	do {
		cout << "Enter 1 to push to the front of the list" << endl
			<< "Enter 2 to push to the back of the list" << endl
			<< "Enter 3 to pop to the front of the list" << endl
			<< "Enter 4 to pop to the back of the list" << endl
			<< "Enter 5 to see the front of the list" << endl
			<< "Enter 6 to see the back of the list" << endl
			<< "Enter 7 to see if the list is empty" << endl
			<< "Enter 8 to insert into the list a given index" << endl
			<< "Enter 9 to remove an item from the list" << endl
			<< "Enter 10 t0 find a item in the list" << endl
			<< "Enter 0 to quit" << endl;
		cin >> userSelct;


		switch (userSelct) {	
		case 1:																									// Performs the pushFront fucntion
			cout << endl << "What number would you like to push" << endl;
			cin >> userInput;

			list.pushFront(userInput);
			list.printList();
			break;
		case 2:																									// Performs the pushBack fucntion
			cout << endl << "What number would you like to push" << endl;
			cin >> userInput;
			
			list.pushBack(userInput);
			list.printList();
			break;
		case 3:																									// Performs the popFront fucntion
			list.popFront();
			list.printList();
			break;
		case 4:																									// Performs the popBack fucntion
			list.popBack();
			list.printList();
			break;		
		case 5:																									// Performs the Front fucntion
			cout << endl << list.front()<< endl << endl;
			break;
		case 6:																									// Performs the Back fucntion
			cout << endl << list.back() << endl << endl;
			break;
		case 7:																									// Performs the Empty fucntion
			if (list.empty() == 0)
				cout << endl << "List is not empty" << endl << endl;
			else
				cout << endl << "List is empty" << endl << endl;
			break;
		case 8:																									// Performs the Insert fucntion
			cout << endl << "What is the index you would like to insert ";
			cin >> inx;
			cout << endl << endl << "What would you like to insert in ";
			cin >> userInput;
			list.insert(inx, userInput);
			list.printList();
			break;
		case 9:																									// Performs the Remove fucntion
			cout << endl << "What is the index you would like to remove ";
			cin >> inx;
			if (list.remove(inx) == true) {
				cout << endl << endl << "Item at index " << inx << " was removed" << endl << endl;
				list.printList();
			}
			else {
				cout << endl << endl << "List is empty" << endl << endl;
			}
			break;

		case 10:																								// Performs the Find fucntion
			cout << endl << "What are you trying to find ";	
			cin >> userInput;
			inx = list.find(userInput);
			if (inx == 0) {
				break;
			}
			else {
				cout << endl << endl << userInput << " is at " << inx << endl << endl;
				break;
			}
		}
	} while (userSelct != 0);
}