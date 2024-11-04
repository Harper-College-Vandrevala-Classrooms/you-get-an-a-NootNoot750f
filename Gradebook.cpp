#include "Gradebook.h"

Gradebook::Gradebook(int max_students, int max_assignments): maxStudents(max_students), maxAssignments(max_assignments), numStudents(0), numAssignments(0) {
    students = new Student[max_students];
    assignments = new Assignment[max_assignments];
}

Gradebook::Gradebook() {
    delete[] students;
    delete[] assignments;
}

void Gradebook::addStudent(const std::string &full_name, const std::string &student_id) {
    if (numStudents < maxStudents) {
        size_t space_index = full_name.find(' ');
        std::string first_name = full_name.substr(0, space_index);
        std::string last_name = full_name.substr(space_index + 1);
        students[numStudents++] = Student(first_name, last_name, student_id, maxAssignments);
    }
}

void Gradebook::addAssignment(const std::string &name, int totalPoints) {
    if (numAssignments < maxAssignments) {
        assignments[numAssignments++] = Assignment(name, totalPoints);
    }
}

void Gradebook::enterGrade(const std::string &student_id, const std::string &assignment_name, int grade) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].studentID == student_id) {
            for (int j = 0; j < numAssignments; j++) {
                if (assignments[j].name == assignment_name) {
                    students[i].grades[j] = grade;
                    return;
                }
            }
        }
    }
}

std::string Gradebook::report() {
    std::string report;
    report += "Last_Name,First_Name,Student_Id";


    for (int i = 0; i < numAssignments; i++) {
        report += "," + assignments[i].name;
    }
    report += "\n";


    for (int i = 0; i < numStudents; i++) {
        Student &student = students[i];
        report += student.lastName + "," + student.firstName + "," + student.studentID;

        for (int j = 0; j < numAssignments; j++) {
            if (student.grades[j] != -1) {
                report += "," + std::to_string(student.grades[j]);
            } else {
                report += ",none";
            }
        }
        report += "\n";
    }
    return report;
}
