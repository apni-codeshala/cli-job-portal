#ifndef JOB_H
#define JOB_H

#include <string>

class Job {
    private:
        std::string title;
        std::string description;
        std::string location;
        double salary;
    public:
        Job(std::string title, std::string description, std::string location, double salary);
        void displayJob();
};

#endif
