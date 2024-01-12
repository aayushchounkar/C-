#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;
};

// Derived class Student
class Student : public Person {
public:
    int studentID;
    float GPA;
};

// Derived class Professor
class Professor : public Person {
public:
    int employeeID;
    string subject;
};

int main() {
    // Input for Student
    Student student;
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter student age: ";
    cin >> student.age;

    cout << "Enter student ID: ";
    cin >> student.studentID;

    cout << "Enter GPA: ";
    cin >> student.GPA;

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Input for Professor
    Professor professor;
    cout << "Enter professor name: ";
    getline(cin, professor.name);

    cout << "Enter professor age: ";
    cin >> professor.age;

    cout << "Enter employee ID: ";
    cin >> professor.employeeID;

    cout << "Enter subject: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, professor.subject);

    // Displaying information
    cout << "Student Information:" << endl;
    cout << "Name: " << student.name << "\nAge: " << student.age << "\nStudent ID: " << student.studentID << "\nGPA: " << student.GPA << endl;

    cout << "\nProfessor Information:" << endl;
    cout << "Name: " << professor.name << "\nAge: " << professor.age << "\nEmployee ID: " << professor.employeeID << "\nSubject: " << professor.subject << endl;

    return 0;
}
