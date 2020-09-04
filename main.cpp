#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "degree.h"

using namespace std;

vector<string> split(string str) {
    size_t pos = 0;
    string token;
    vector<string> params;
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
                                  // Should this be A5 or my actual student id?
                                  "A5,Pierce,Staab,pstaab1@wgu.edu,28,1,2,3,SOFTWARE"};

    DegreeProgram degree;
    switch (params.at(9)) {
        case "SECURITY":
            degree = SECURITY;
        case "NETWORK":
            degree = NETWORK;
        case "SOFTWARE":
            degree = SOFTWARE;
    }
    for (int i = 0; i < len; ++i) {
        cout << params.at(i);
        cout << "\n";
    }

    auto params = split("A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY");

    const int len = params.size();

    // Student *MyStudent = new Student();
    // MyStudent->Print();
    return 0;
}
