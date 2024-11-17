//Lab Program 3
//CSC 2844 X01
//Jonah Carpenter
//August 31, 2021
//linked list using a friend class
//Copyright Data Structures & Algorithms in C++
//Header file

#include <string>
using namespace std;

class StringNode {


private:
	string elem;
	StringNode* next;

	friend class StringLinkedList;


};

class StringLinkedList {

public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const string& front() const;
	void addFront(const string& e);
	void removeFront();
	void print();
private:
	StringNode* head;
};