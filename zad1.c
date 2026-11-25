#include <stdio.h>
#define MAX 50

int main(void) {
    FILE *fp;
    char nazwisko[50];
    int indeks;

    // -----------------------------
    // Krok 1: Wczytanie danych
    // -----------------------------
    fp = fopen(/* ??? */);
    if (!fp) {
        printf("Nie mozna otworzyc pliku studenci.txt\n");
        return 1;
    }

    fclose(fp);

    // -----------------------------
    // Kolejne zadania do wykonania:
    // -----------------------------
    // 1. Wczytaj wszystkie indeksy studentów do tablicy 'indeksy[MAX]',
    //    oblicz ich średnią i wypisz indeksy większe od średniej.
    // 2. Wczytaj dane z pliku 'egzamin.txt' do tablicy 'int wyniki[MAX][2]'
    //    (kolumna 0 - numer indeksu, kolumna 1 - punkty). Napisz funkcję
    //    'int najlepszy(int tab[][2], int n)', która zwraca numer wiersza
    //    studenta z największą liczbą punktów, i wypisz jego numer indeksu.
    // 3. Zapisz do pliku 'zdali.txt' indeksy i punkty studentów, którzy mają
    //    więcej niż 50 pkt, a na końcu pliku ich liczbę.

    return 0;
}
