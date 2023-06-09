#include <iostream>
#include <string>
using namespace std;
class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};
class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** fathonah, Node** iqbal);
	bool listEmpty();
	bool delNode();
	void traverse();
};
void CircularLinkedList::addNode() {
	Node* newNode = new Node(); // a.1
	cout << "Enter roll number: ";
	cin >> newNode->rollNumber; // a.1

	cout << "Enter name; ";
	cin.ignore();
	getline(cin, newNode->name);
	if (LAST == NULL) {
		LAST = mewNode;//
		newNode->next = newNode; // a.3
	}
	else {
		Node* iqbal = LAST->next; //B.1
		Node* fathonah = NULL;//b.2

		// b.4
		fathonah->next = newNode;

		// b.5
		newNode->next = iqbal;

		if (iqbal == LAST) {
			//
			LAST = newNode; //c.5
		}
	}

	cout << "Node added succesfully!" << endl;
}


bool CircularLinkedList::search(int rollno, Node** fathonah, Node** iqbal) {

	*fathonah = LAST->next;
	*iqbal = LAST->next;
	while (*curre != LAST) {
		if (rollno == (*iqbal)->rollNumber) {
			return true;
		}
		*fathonah = *iqbal;
		*fathonah = (*fathonah)->next;
	}
	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}
bool CircularLinkedList::delNode() { 
	if(listempty()) {
		cout << "List is empty" << endl;
		return false;

		int rollno;
		cout << "Enter the roll number to delete: ";
		cin > .rollno;

		Node* fathonah, * iqbal;
		if (!search(rollno, fathonah, &iqbal)) {
			cout << "Record not found" << endl;
			return false;
}
		if (iqbal == LAST && iqbal -> next == LAST) {
			// a.1
void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* iqbalNode = LAST->next;
		while (iqbalNode != LAST) {
			cout << iqbalNode->rollNumber << " " << iqbalNode->name << endl;
			iqbalNode = iqbalNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->name << endl;
	}
}
int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
				obj.addNode();
			}
			case '2': {
				obj.delNode();

			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;