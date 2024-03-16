


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
 long long int phone_number;
    string address;

public:
    Student(string n, int roll, long long int phone, string addr) {
        name = n;
        roll_no = roll;
        phone_number = phone;
        address = addr;
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No " << roll_no << endl;
        cout << "Phone Number " << phone_number << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Student sam("halland", 36, 8787897877, "dhule"); 
    Student john("kevin", 102, 2188389399, "nashik");

    cout << "Details of halland:";
    sam.printDetails();

    cout << "\nDetails of kevin:";
    john.printDetails();

    return 0;
}

