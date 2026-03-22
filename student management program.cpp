#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    float marks;

public:
    void getInputs() {
        cout << "Enter Student ID: "; 
        cin >> studentID; 
        cin.ignore();
        
        cout << "Enter Name: "; 
        getline(cin, name);
        
        cout << "Enter Marks: "; 
        cin >> marks;
    }

    void displayResults() {
        cout << "Student ID: " << studentID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: " << marks << "\n\n";
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    s1.getInputs();

    cout << "Enter details for Student 2:\n";
    s2.getInputs();

    cout << "\nStudent Results:\n";
    s1.displayResults();
    s2.displayResults();

    return 0;
}