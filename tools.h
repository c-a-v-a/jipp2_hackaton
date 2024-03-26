#ifndef TOOLS_H
#define TOOLS_H

#include <string>
#include <iostream>

using namespace std;

enum ProgramMode {
    Daily,
    Random,
    Help,
    Error
};

ProgramMode parse_args(char *argv[]) {
    string arg = argv[1];

    if (arg == "-d" || arg == "--daily")
        return Daily;
    if (arg == "-r" || arg == "--random")
        return Random;
    if (arg == "-h" || arg == "--help")
        return Help;

    return Error;
}

void print_help() {
    cout << "Iam" << endl;
    cout << "program do codziennych affirmacji" << endl;
    cout << "flagi:" << endl;
    cout << "\t-r/--random - wypisz losową afirmację" << endl;
    cout << "\t-d/--dialy - wypisz afirmację na disiaj" << endl;
}

#endif
