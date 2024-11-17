//Program 9
//CSC 2844 X01
//Jonah Carpenter
//This shows an example of queue
//Header

typedef int E;

class CircleList
{
	enum{DEF_CAPACITY=5};

public:
	CircleList(int cap = DEF_CAPACITY);
	int size() const;
	bool empty() const;
	const E& front() const;
	void enqueue(const E& e);
	void dequeue();
	void printQueue();

private:
	E* Q;
	int capacity;
	int f;
	int r;
	int n;

};
