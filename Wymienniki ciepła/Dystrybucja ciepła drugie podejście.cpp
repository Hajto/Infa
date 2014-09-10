#include<iostream>
#include<cstdio>
#define MAX 1000

using namespace std;

//Liczy srędnią arytmetyczną z dwóch liczb
double srednia(double a, double b){
    return (a+b)/2;
}

//Srednia z tablicy, podajemy tablice  i otrzymujemy srednia jej elementow
double sredniaarray( double tablice[], int liczba_liczb){
    //Średnia z jednej tablicy
    double suma=0;
        for(int i = 0; i < liczba_liczb; i++){
            suma += tablice[i];
        }
    return suma/liczba_liczb;
}
// Wstrzymuje program do momentu wcisniecia klawisza enter, wcisniecie innego klawisza nie zaskutkuje jego zakonczeniem.
void pauza(){
    while ('\n' != getchar ());
        printf ("Wcisnij enter aby zakonczyc prace programu.");
        getchar ();
}

/*
Program główny
*/

int main(){
    // Dwa pojemniki, jeden z ciepłą wody drugi z zimną, daje im wielkosc tysiąc, ponieważ zadanie zakłada, że taka jest maksymalna ich liczba.
    double pojemnik_1[MAX], pojemnik_2[MAX]={0};
    int n=0;
    double temp;
    printf("Podaj liczbe pojemnikow (od 2 do 1000):");
        while(n < 2 || n> 1000){
            scanf("%d",&n);
            if(n < 2 || n> 1000) printf("Podana liczba musi byc wieksza lub rowna 2 i mniejsza lub rowna 1000, podaj ja jeszcze raz ");
        }
        /*for(int i=0; i < n ; i++ ){
            pojemnik_1[i]=100;
            pojemnik_2[i]=0;
        }*/
    //Mieszanie według fotki tablicy prog. Pawła K.
        for(int i = n; i > 0; i--){
                pojemnik_1[i]=100;
            for(int j = 0; j < n; j++){
                temp = srednia(pojemnik_1[i], pojemnik_2[j]);
                pojemnik_1[i]=temp;
                pojemnik_2[j]=temp;
            }
        }

    //Średnia z jednej tablicy
        printf("\nSrednia temperatur wody w pojemnikach, ktore na poczatku mialy zimna wode wynosi: %.3f \n", sredniaarray(pojemnik_2, n));
        pauza();

    return 0;
}
