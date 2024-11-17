//Program 5
//CSC 2844 X01
//Jonah Carpenter
//September 10, 2021
//we make a playlist
//Header

#include <iostream>
using namespace std;

typedef string Elem;

class CNode
{
private:
	Elem elem;
	CNode* next;

	friend class CircleList;
};

class CircleList
{
public:
	CircleList();
	~CircleList();
	bool empty() const;
	const Elem& front() const;
	const Elem& back() const;
	void advance();
	void add(const Elem& e);
	void remove();
	void printList();
private:
	CNode* cursor;
};