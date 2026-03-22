#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cin.ignore(); // clear buffer

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* s = new Student[n];  // dynamic array

    cout << "\n--- Enter Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].input();
    }

    cout << "\n--- Student Information ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].display();
    }

    delete[] s; // free memory
    return 0;
}