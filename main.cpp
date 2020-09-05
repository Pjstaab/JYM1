#include <iostream>
#include <vector>
#include <string>
#include "degree.h"
#include "roster.h"
#include "student.h"

using namespace std;

vector <string> split(string str) {
    size_t          pos = 0;
    string          token;
    vector <string> params;
    while ((pos = str.find(',')) != string::npos) {
        token = str.substr(0, pos);
        params.push_back(token);
        str.erase(0, ++pos);
    }
    params.push_back(str);
    return params;
}

int main() {
    // this is a comment
    string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
                            "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
                            "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
                            "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
                            "001302329,Pierce,Staab,pstaab1@wgu.edu,28,1,2,3,SOFTWARE"};

    const int len = 5;

    auto classRoster = new Roster;

    for (int i = 0; i < len; ++i) {
        auto params = split(studentData[i]);

        DegreeProgram degree;
        switch (params.at(9)) {
            case "SECURITY":
                degree = SECURITY;
            case "NETWORK":
                degree = NETWORK;
            case "SOFTWARE":
                degree = SOFTWARE;
        }

        classRoster->add(params[0], params[1], params[2], params[3], params[4], stoi(params[5]), stoi(params[6]), stoi(params[7]), degree);
    }



    // Student *MyStudent = new Student();
    // MyStudent->Print();
    return 0;
}
