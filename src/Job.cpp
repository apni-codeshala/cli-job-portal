#include "Job.h"
#include <iostream>

Job::Job(std::string title, std::string description, std::string location, double salary)
    : title(title), description(description), location(location), salary(salary) {}

void Job::displayJob() {
    std::cout << "Title: " << title << "\nDescription: " << description << "\nLocation: " << location << "\nSalary: $" << salary << std::endl;
}
