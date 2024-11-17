//Program 6 - Stack Program
//CSC 2844 - Data Structures
//Jonah Carpenter
//Sepember 16, 2021
//This program implements a stack using a template
//
//Copyright Data Structures textbook
//header

#include <iostream>
#include <string>
using namespace std;

template<typename E>
class ArrayStack
{
	enum{ DEF_CAPACITY = 3};
public:
	ArrayStack(int cap = DEF_CAPACITY);
	int size() const;
	bool empty() const;
	const E& top() const;
	void push(const E& e);
	void pop();
private:
	E* S;
	int capacity;
	int t;
};