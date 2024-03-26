#include <iostream>
#include <locale.h>

#include "tools.h"
#include "data.h"
#include "daily_affirmation.h"
#include "random_affirmation.h"

int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "Polish");

    if (argc < 2) {
        int day = DzienRoku();
        DailyAffirmation d("afirmacje.TXT", day);

        pokazAktualnyDzien();
        cout << d.GetAffirmation() << endl;
        return 0;
    }
    if (argc > 2) {
        cout << "Niepoprawne flagi" << endl;
        print_help();
        return 0;
    }

    ProgramMode mode = parse_args(argv);

    switch(mode) {
        case Daily:
            {
                int day = DzienRoku();
                DailyAffirmation d("afirmacje.TXT", day);

                pokazAktualnyDzien();
                cout << d.GetAffirmation() << endl;
                break;
            }
        case Random:
            {
                RandomAffirmation r("afirmacje.TXT");
                cout << r.GetAffirmation() << endl;
            }
            break;
        case Help:
            print_help();
        case Error:
            {
                cout << "Niepoprawna flaga" << endl;
                print_help();
                break;
            }
    }
}

