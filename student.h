#include <string>
#include <array>
#include "degree.h"

using namespace std;

class Student
{
private:
    /* data */
    string v_StudentId;
    string v_FirstName;
    string v_LastName;
    string v_Email;
    int v_Age;
    array<int, 3> v_DaysToComplete;
    string v_Degree;

public:
    Student(string studentID,
            string firstName,
            string lastName,
            string emailAddress,
            int age,
            int daysInCourse1,
            int daysInCourse2,
            int daysInCourse3,
            DegreeProgram degreeProgram);
    ~Student();

    // Getters
    string StudentId();
    string FirstName();
    string LastName();
    string Email();
    int Age();
    array<int, 3> DaysToComplete();
    string Degree();

    // Setters
    void SetStudentId(string id);
    void SetFirstName(string firstName);
    void SetLastName(string lastName);
    void SetEmail(string email);
    void SetAge(int age);
    void SetDaysToComplete(array<int, 3> daysToComplete);
    void SetDegree(string degree);

    // Print
    void Print();
};