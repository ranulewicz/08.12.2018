#include <stdio.h>
#include <stdlib.h>


int main(int liczba_slow, char *tablica_slow[]){
    int i;
    double x =atof(tablica_slow[1]);
    int dokladnosc = 100;
    double wynik = x;
    double silnia = 1.0;
    double potega_x = x;

        for (i = 1; i < dokladnosc; i +=2) {
            potega_x *= (-x * x);
            silnia *= i * (i + 1);
            wynik += potega_x / silnia;
        }
        printf("sin: %lf\n", wynik);
    
    return 0;
}