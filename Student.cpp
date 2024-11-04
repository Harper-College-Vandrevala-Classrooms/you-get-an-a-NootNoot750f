//
// Created by nickh on 11/3/2024.
//

#include "Student.h"
Student::Student(const string &firstName, const string &lastName, const string &studentID, int maxAssignments) : firstName(firstName), lastName(lastName), studentID(studentID), numAssignments(numAssignments) {
grades = new int[maxAssignments];
    for(int i = 0; i < maxAssignments; i++) {
        grades[i] = 0;
    }
}

Student::Student() {
    delete []grades;

}
