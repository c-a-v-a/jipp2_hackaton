#include <iostream>
#include <locale.h>

#include "tools.h"

int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "Polish");

    if (argc < 2) {
        // dialy by default
        return 0;
    }
    if (argc > 2) {
        cout << "Niepoprawne flagi" << endl;
        print_help();
        return 0;
    }

    int mode = parse_args(argv);

    switch(mode) {
        case Daily:
            // print dialy
            return 0;
        case Random:
            // print random
            return 0;
        case Help:
            print_help();
            return 0;
        case Error:
            cout << "Niepoprawna flaga" << endl;
            print_help();
            return 0;
    }

    std::cout << "Hello World!\n";
}

