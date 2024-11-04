#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
#include "Student.h"
#include "Assignment.h"

class Gradebook {
public:
    Gradebook(int maxStudents, int maxAssignments);
    Gradebook();
    void addStudent(const std::string &fullName, const std::string &studentID);
    void addAssignment(const std::string &name, int totalPoints);
    void enterGrade(const std::string &studentID, const std::string &assignmentName, int grade);
    std::string report();

private:
    Student* students;
    Assignment* assignments;
    int numStudents;
    int numAssignments;
    int maxStudents;
    int maxAssignments;
};

#endif // GRADEBOOK_H
