//Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign
//the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.


#include<iostream>
 #include<string.h>

using namespace std;

class Student {
private:
    char name[60];
    int roll_no;

public:

    Student(char n[], int roll) 
	{
        strcpy( name, n); 
        roll_no = roll;
    }
     string getName() 
	 {
        return name;
     }

    int getRollNo() 
	{
	
        return roll_no;
    }
};

int main() {
    Student s1("Jack", 2);
    cout << "Name: " << s1.getName();
    cout << "Roll No: " << s1.getRollNo();

    return 0;
}
