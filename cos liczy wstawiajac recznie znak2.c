#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define dokladnosc 50

int main(int liczba_slow, char* tablica_slow[]){

    double x;
    double wynik = 1.0;
    double silnia = 1.0;
    double potega_x = 1.0;

    if(liczba_slow ==2) {//pierwszy parametr to nazwa programu//
        x = atof(tablica_slow[1]);
        for (int licznik = 1; licznik < dokladnosc; ++licznik) {
            potega_x *= x;
            silnia *= licznik;
            wynik += potega_x / silnia;
        }
        printf("wynik: %lf\n", wynik);
    }else{
        printf("nie poprawna liczba parametrow!\n");

    }
    return 0;
}