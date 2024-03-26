#ifndef RANDOM_AFFIRMATION_H
#define RANDOM_AFFIRMATION_H

#include <string>

#include "affirmation.h"

using namespace std;

class RandomAffirmation : public Affirmation {
    public:
        RandomAffirmation(string filename);

        string GetAffirmation() override;
};

#endif
