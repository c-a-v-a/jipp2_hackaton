#include <iostream>
#include <ctime>
#include <iomanip>
#pragma warning (disable: 4996)

using namespace std;

void pokazAktualnyDzien() {

    time_t czas = time(nullptr);

    
    tm* czas_info = localtime(&czas);

    
    cout << "Dzisiaj jest: " << czas_info->tm_mday << "." << czas_info->tm_mon + 1 << "." << czas_info->tm_year + 1900 << endl;
}

int DzienRoku() {
    
    time_t teraz = time(0);
    tm* czas = localtime(&teraz);

    int dzien = czas->tm_yday + 1; 

    return dzien;
}
