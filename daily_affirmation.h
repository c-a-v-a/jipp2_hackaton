#ifndef DAILY_AFFIRMATION_H
#define DAILY_AFFIRMATION_H

#include <string>

#include "affirmation.h"

using namespace std;

class DailyAffirmation : public Affirmation {
    private:
        unsigned int current_day_;
    public:
        DialyAffirmation(string filename, unsigned int current_day);

        string GetAffirmation() override;
};

#endif
