/*4. University Hierarchy
Create a program that models a university hierarchy. Define a base class Person with attributes
like name and age. Derive classes Student and Professor from Person. 
Students have attributes like student ID and GPA, while Professors 
have attributes like employee ID and subject.
 Implement the program to input and display information about students and professors.*/
 #include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;
};

// Derived class
class Student : public Person {  
public:
    int studentid;
    int GPA;
};

// Derived class
class Professor : public Person { 
public:
    int Employeeid;
    string subject;
};

int main() {
    Student s1;
    Professor p1;

    // For input, you need to use the cin operator
    cout << "Enter name: ";
    cin >> s1.name;

    cout << "Enter age: ";
    cin >> s1.age;

    cout << "Enter marks: ";
    cin >> s1.GPA;

    cout << "Enter your id number: ";
    cin >> s1.studentid;

    cout << "Enter name of professor: ";
    cin >> p1.name;

    cout << "Enter employee id: ";
    cin >> p1.Employeeid;

    cout << "Enter the subject you teach: ";
    cin >> p1.subject;

    // Displaying the data
    cout << "______________THE DATA OF STUDENT_____________" << endl;
    cout << "Name of student: " << s1.name << endl << "Age: " << s1.age << endl << "Marks: " << s1.GPA << endl << "Student id: " << s1.studentid << endl;

    cout << "______________THE DATA OF PROFESSOR_____________" << endl;
    cout << "Name of professor: " << p1.name << endl << "Employee id: " << p1.Employeeid << endl << "Subject: " << p1.subject << endl;

    return 0;
}
