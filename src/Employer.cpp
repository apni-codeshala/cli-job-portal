#include "Employer.h"
#include "Database.h"
#include <iostream>

Employer::Employer(std::string companyName) : companyName(companyName) {}

void Employer::postJob(Job job) {
    Database db;
    sql::Connection* con = db.connect();

    sql::Statement* stmt = con->createStatement();
    std::string query = "INSERT INTO Jobs (company, title, description, location, salary) VALUES ('" + companyName + "', '" + job.getTitle() + "', '" + job.getDescription() + "', '" + job.getLocation() + "', " + std::to_string(job.getSalary()) + ")";
    stmt->execute(query);

    std::cout << "Job posted successfully!\n";
}
