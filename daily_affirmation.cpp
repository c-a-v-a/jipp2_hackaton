#include "dialy_affirmation.h"

#include <string>

using namespace std;

DialyAffirmation::DialyAffirmation(string filename, unsigned int current_day):
    Affirmation(filename), current_day_(current_day) {}
