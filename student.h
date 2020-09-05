#include <string>
#include <array>

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
    int v_Degree;

public:
    Student(string studentID,
            string firstName,
            string lastName,
            string emailAddress,
            int age,
            int daysInCourse1,
            int daysInCourse2,
            int daysInCourse3,
            int degreeProgram);

    // Getters
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    array<int, 3> getDaysToComplete();
    int getDegree();

    // Setters
    void setStudentID(string id);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysToComplete(array<int, 3> daysToComplete);
    void setDegree(int degree);

    // Print
    void print();
};