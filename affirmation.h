#ifndef AFFIRMATION_H
#define AFFIRMATION_H

#include <string>

using namespace std;

class Affirmation {
    protected:
        string filename_;
    public:
        Affirmation(string filename_);

        virtual string GetAffirmation() = 0;
};

#endif
