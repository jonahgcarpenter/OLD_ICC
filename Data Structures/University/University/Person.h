//Program 2 - University
//Jonah Carpenter
//CSC 2844 - Data Structures
//August 18, 2021
//Shows off basd class (person) as well as derived classes (student and instructor)
//Mr.Howard/ textbook
//Header file



#include <string>
using namespace std;

class Person {
	private:
		string name;
		string idNum;

	public:
		virtual void print();
		Person(string, string);

		string getName();
		string getidNum();
		void setName(string);
		void setidNum(string);
};


class Student : public Person {
private:
	string major;
	int gradYear;
public:
	virtual void print();
	Student(string, string, string, int);
	
	string getMajor();
	int getgradYear();
	void setMajor(string);
	void setgradYear(int);
};

class Instructor : public Person {
private:
	string subject;

public:
	virtual void print();
	string getSubject();
	void setSubject(string);
	Instructor(string, string, string);
};
