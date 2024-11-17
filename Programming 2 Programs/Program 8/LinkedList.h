//Program #8 - Linked Lists
//CSC 2144 - X01
//Jonah Carpenter
//April 1, 2021
//Description: This program provides an example of using a linked list.
//LinkedList.h header file
#include <iostream>
using namespace std;
class LinkedList
{
protected:
	struct ListNode
	{
		double value; //this is the value of the node
		ListNode* next; //this points to the next node
		ListNode(double value1, ListNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};
	ListNode* head;
public:
	LinkedList() { head = nullptr; } //overloaded constructor
	~LinkedList(); //default constructor
	void add(double number); //adds a node
	void remove(double number); //removes a node
	void displayList() const; //displays the linked list
};