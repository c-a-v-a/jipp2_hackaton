#ifndef DAILY_AFFIRMATION_H
#define DAILY_AFFIRMATION_H

#include <string>

#include "affirmation.h"

using namespace std;

class DailyAffirmation : public Affirmation {
    private:
        int current_day_;
    public:
        DailyAffirmation(string filename, int current_day);

        string GetAffirmation() override;
};

#endif
