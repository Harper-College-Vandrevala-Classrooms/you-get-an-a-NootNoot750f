//
// Created by nickh on 11/3/2024.
//

#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
#include <string>
#include <iostream>


class Student {
public:
    string firstName;
    string lastName;
    int *grades;
    int numAssignments;
    string studentID;

    Student(const string &firstName, const string &lastName,const string &studentID, int maxAssignments);
    Student();
};



#endif //STUDENT_H
