//Lab Program 4 - Generic/Templated Singly Linked List
//CSC 2844 X01
//Jonah Carpenter
//August 31, 2021
//shows a generic singly linked list
//Copyright Data Structures and Algorithms by Goodrich
//Header file: SLinkedList.h


template <typename E>


class SNode {
private:
	E elem;

	SNode<E>* next;


	template <typename E> friend class SLinkedList;


};

template<typename E>

class SLinkedList
{
public:
	SLinkedList();
	~SLinkedList();
	bool empty() const;
	const E& front() const;

	void addFront(const E& e);


	void removeFront();
	void print();
private:
	SNode<E>* head;

};