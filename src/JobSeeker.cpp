#include "JobSeeker.h"
#include "Database.h"
#include <iostream>

JobSeeker::JobSeeker(std::string name, std::string email) : name(name), email(email) {}

void JobSeeker::registerJobSeeker() {
    Database db;
    sql::Connection* con = db.connect();

    sql::Statement* stmt = con->createStatement();
    std::string query = "INSERT INTO Users (name, email, userType) VALUES ('" + name + "', '" + email + "', 'jobseeker')";
    stmt->execute(query);

    std::cout << "Job seeker registered successfully!\n";
}

void JobSeeker::displayInfo() {
    std::cout << "Job Seeker: " << name << "\nEmail: " << email << std::endl;
}
