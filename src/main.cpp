#include "JobSeeker.h"
#include "Employer.h"
#include "Job.h"
#include <iostream>

int main() {
    // Job Seeker Registration
    JobSeeker seeker("Alice", "alice@example.com");
    seeker.registerJobSeeker();
    seeker.displayInfo();

    // Employer Posting Job
    Employer employer("TechCorp");
    Job job("Software Developer", "Develop cool apps", "Remote", 80000);
    employer.postJob(job);

    return 0;
}
