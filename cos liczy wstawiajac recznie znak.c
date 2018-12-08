#include <stdio.h>
#include <stdlib.h>

int main(int liczba_slow, char* tablica_slow[]){

    int dokladnosc = 5;
    double e = 1.0;
    int index;
    double skladnik = 1.0;

    double x = atof(tablica_slow[1]);

    for (index = 1; index <= dokladnosc ; ++index) {
        skladnik *= x / index;
        e += skladnik;
    }
    printf("e = %lf", e);
    return 0;
}