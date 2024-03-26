#include "random_affirmation.h"

#include <string>
#include <cstdlib> 
#include <ctime>
#include <fstream>

using namespace std;

RandomAffirmation::RandomAffirmation(string filename) : Affirmation(filename){}

string RandomAffirmation::GetAffirmation(){
    srand(time(NULL));

    int losowaLiczba = rand() % 365 + 1;

    ifstream file(filename_);
    if (!file.is_open()) {
        return "Error: Unable to open file.";
    }


    string line;
    for (unsigned int i = 1; i <= losowaLiczba; ++i) {
        if (!getline(file, line)) {
            return "Error: Day out of range.";
        }
    }

    file.close();

    return line;

}
