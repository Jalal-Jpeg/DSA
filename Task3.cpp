#include<iostream> // including the input/output stream library
using namespace std;

// declaring a class named "Student"
class Student {
public:
	int rollNumber; // declaring an integer member variable named "rollNumber"
	int marks; // declaring an integer member variable named "marks"

	// member function to display student details
	void display() {
		cout << "Roll Number: " << rollNumber << endl; // printing out the roll number of the student
		cout << "Marks: " << marks << endl; // printing out the marks of the student
	}
};

// main function
int main() {
	Student s1; // creating the first object "s1" of class "Student"
	Student s2; // creating the second object "s2" of class "Student"

	s1.rollNumber = 1; // setting the roll number of object "s1" to 1
	s1.marks = 75; // setting the marks of object "s1" to 75

	s2.rollNumber = 2; // setting the roll number of object "s2" to 2
	s2.marks = 90; // setting the marks of object "s2" to 90

	cout << "Initial State" << endl; // printing the heading "Initial State"
	s1.display(); // calling display function to show details of object "s1"
	s2.display(); // calling display function to show details of object "s2"

	s1.marks = 80; // modifying the marks of object "s1" to 80

	cout << endl << "After modifying s1.marks to 80" << endl; // printing heading after modification
	s1.display(); // calling display function to show updated details of object "s1"
	s2.display(); // calling display function to show details of object "s2"

	return 0; // returning 0 to indicate successful execution
}