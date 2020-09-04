#include <iostream>
#include "roster.h"

using namespace std;

void Roster::add(string studentID,
                 string firstName,
                 string lastName,
                 string emailAddress,
                 int age,
                 int daysInCourse1,
                 int daysInCourse2,
                 int daysInCourse3,
                 DegreeProgram degreeProgram) {


    auto student = new Student(studentID,
            firstName,
            lastName,
            emailAddress,
            age,
            daysInCourse1,
            daysInCourse2,
            daysInCourse3,
            degreeProgram);

    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] == NULL) {
            v_classRosterArray[i] = student;
        }
    }
}

void Roster::remove(string studentID) {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            if (student.getStudentID() == studentID) {
                v_classRosterArray[i] = NULL;
            }
        }
    }
}

void Roster::printAll() {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            student.print();
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            if (student.getStudentID() == studentID) {
                int days[] = student.getDaysToComplete();
                cout << (days[0] + days[1] + days[2]) / 3;
            }
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; ++i) {
        if (v_classRosterArray[i] != NULL) {
            Student student = *v_classRosterArray[i];
            if (student.getDegree() == degreeProgram) {
                student.print();
            }
        }
    }
}

void Roster::printInvalidEmails() {

}
