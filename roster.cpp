#include "roster.h"
#include "student.h"
#include "degree.h"

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

    Student* student = new Student(studentID,
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
            v_classRosterArray[i] = &student;
        }
    }

    void Roster::remove(string studentID) {
        for (int i = 0; i < 5; ++i) {
            if (v_classRosterArray[i] != NULL) {
                student = *v_classRosterArray[i];
                if (student.StudentId() == studentID) {
                    v_classRosterArray[i] = NULL;
                }
            }
        }
    }

    void Roster::printAll() {

    }

    void Roster::printAverageDaysInCourse(string studentID) {

    }

    void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

    }

    void Roster::printInvalidEmails() {

    }
}
