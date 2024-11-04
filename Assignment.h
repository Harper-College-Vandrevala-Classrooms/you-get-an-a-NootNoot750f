#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <string>

class Assignment {
public:
    std::string name;
    int totalPoints;

    Assignment();
    Assignment(const std::string &name, int totalPoints);
};

#endif //ASSIGNMENT_H
