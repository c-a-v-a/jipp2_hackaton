#include "dialy_affirmation.h"

#include <string>

using namespace std;

DialyAffirmation::DialyAffirmation(string filename, unsigned int current_day):
    Affirmation(filename), current_day_(current_day) {}

string DialyAffirmation::getAffirmationForDay() {
    
    ifstream file(filename_);
    if (!file.is_open()) {
        return "Error: Unable to open file.";
    }

    
    string line;
    for (unsigned int i = 1; i <= current_day_; ++i) {
        if (!getline(file, line)) {
            return "Error: Day out of range.";
        }
    }

    file.close(); 

    return line;
}

