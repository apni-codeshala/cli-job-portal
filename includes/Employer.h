#ifndef EMPLOYER_H
#define EMPLOYER_H

#include "Job.h"
#include <string>

class Employer {
    private:
        std::string companyName;
    public:
        Employer(std::string companyName);
        void postJob(Job job);
};

#endif
