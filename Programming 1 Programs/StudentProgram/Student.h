//Header File (Student)
//
//Program 9 -Student Program
//Jonah Carpenter
//CSC 2134 X01
//October 21, 2020
//Demonstates the implementation for an ICC students' class

#include <string>
using namespace std;

class Student
{
public:								//access specifiers
	void setName(string);			//setters (mutators)
	void setStudentID(int);
	void setMajor(string);
	string getName();				//getters (accessors)
	int getStudentID();
	string getMajor();
	Student();						//default constructor
	Student(string, int, string);	//overloaded constuctor
	~Student();						//destructor


private:							//access specifiers
	string name;					//student name
	int studentID;					//ID number
	string major;					//student major
};