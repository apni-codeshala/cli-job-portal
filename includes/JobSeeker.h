#ifndef JOBSEEKER_H
#define JOBSEEKER_H

#include <string>

class JobSeeker {
    private:
        std::string name;
        std::string email;
    public:
        JobSeeker(std::string name, std::string email);
        void registerJobSeeker();
        void displayInfo();
};

#endif
