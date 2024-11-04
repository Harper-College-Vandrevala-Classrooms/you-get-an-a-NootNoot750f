#include <iostream>
#include "Gradebook.h"

int main() {

    Gradebook gradebook(10, 5); // 10 max students and 5 max assignments

    gradebook.addStudent("Bob Bobberson", "ABC123");
    gradebook.addStudent("Sam Sammerson", "DEF456");
    gradebook.addStudent("Jess Jesserson", "HIJ789");

    gradebook.addAssignment("Quiz 1", 100);
    gradebook.addAssignment("Lab 1", 50);

    gradebook.enterGrade("DEF456", "Quiz 1", 95); // Sam Sammerson
    gradebook.enterGrade("ABC123", "Quiz 1", 85); // Bob Bobberson
    gradebook.enterGrade("HIJ789", "Lab 1", 49); // Jess Jesserson
    gradebook.enterGrade("HIJ789", "Quiz 1", 93); // Jess Jesserson
    gradebook.enterGrade("ABC123", "Lab 1", 0); // Bob Bobberson

    std::cout << gradebook.report();

    return 0;
}
