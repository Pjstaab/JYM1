#include <iostream>
#include "student.h"

// Constructor
Student::Student(string studentID,
                 string firstName,
                 string lastName,
                 string emailAddress,
                 int age,
                 int daysInCourse1,
                 int daysInCourse2,
                 int daysInCourse3,
                 DegreeProgram degreeProgram) {
    v_Age            = age;
    v_DaysToComplete = {daysInCourse1, daysInCourse2, daysInCourse3};
    v_Email          = emailAddress;
    v_FirstName      = firstName;
    v_LastName       = lastName;
    v_StudentId      = studentID;
    v_Degree         = degreeProgram;
}

// Getters
string Student::getStudentID() {
    return v_StudentId;
}

string Student::getFirstName() {
    return v_FirstName;
}

string Student::getLastName() {
    return v_LastName;
}

string Student::getEmail() {
    return v_Email;
}

int Student::getAge() {
    return v_Age;
}

array<int, 3> Student::getDaysToComplete() {
    return v_DaysToComplete;
}

string Student::getDegree() {
    return v_Degree;
}

// Setters
void Student::setStudentID(string id) {
    v_StudentId = id;
}

void Student::setFirstName(string firstName) {
    v_FirstName = firstName;
}

void Student::setLastName(string lastName) {
    v_LastName = lastName;
}

void Student::setEmail(string email) {
    v_Email = email;
}

void Student::setAge(int age) {
    v_Age = age;
}

void Student::setDaysToComplete(array<int, 3> daysToComplete) {
    v_DaysToComplete = daysToComplete;
}

void Student::setDegree(string degree) {
    v_Degree = degree;
}

// Print
void Student::print() {
    cout << "A1 [tab] First Name: ";
    cout << v_FirstName;
    cout << " [tab] Last Name: ";
    cout << v_LastName;
    cout << " [tab] Age: ";
    cout << to_string(v_Age);
    cout << " [tab] daysInCourse: ";
    cout << "{";
    for (int i = 0; i < v_DaysToComplete.size(); i++) {
        cout << to_string(v_DaysToComplete[i]);
        if (i < v_DaysToComplete.size() - 1)
            cout << ",";
    }
    cout << "} ";
    // days
    cout << " Degree Program: ";
    cout << v_Degree << endl;
}
