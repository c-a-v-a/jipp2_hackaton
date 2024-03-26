#include <iostream>
#include <ctime>
#include <iomanip>
#pragma warning (disable: 4996)

using namespace std;

void pokazAktualnyDzien() {
    
    /*time_t t = time(nullptr);
    tm tm = *localtime(&t);
    cout.imbue(locale());
    cout << "Time: " <<put_time(&tm, "%c %Z") << '\n';*/

    time_t czas = time(nullptr);

    // Konwertuj czas na lokalną reprezentację
    tm* czas_info = localtime(&czas);

    // Wyświetl datę w formacie DD.MM.RRRR
    cout << "Dzisiaj jest: " << czas_info->tm_mday << "." << czas_info->tm_mon + 1 << "." << czas_info->tm_year + 1900 << endl;
}