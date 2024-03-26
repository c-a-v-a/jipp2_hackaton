#include "daily_affirmation.h"

#include <string>
#include <fstream>

using namespace std;

DailyAffirmation::DailyAffirmation(string filename, int current_day):
    Affirmation(filename), current_day_(current_day) {}

string DailyAffirmation::GetAffirmation() {
    
    ifstream file(filename_);
    if (!file.is_open()) {
        return "Error: Unable to open file.";
    }

    
    string line;
    for (int i = 1; i <= current_day_; ++i) {
        if (!getline(file, line)) {
            return "Error: Day out of range.";
        }
    }

    file.close(); 

    return line;
}

