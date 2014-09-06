#include<iostream>
#include<cstdio>

using namespace std;

double srednia(double a, double b){
    return (a+b)/2;
}

int main(){
    double pojemnik_1[1000], pojemnik_2[1000];
    int n=0;
    printf("Podaj liczbe pojemnikow:");
        cin>>n;
        for(int i=0; i < n ; i++ ){
            pojemnik_1[i]=100;
            pojemnik_2[i]=0;
        }
    double temp;
    //Mieszanie według fotki tablicy prog. Pawła K.
    for(int i = n; i >= 0; i--){
        for(int j = 0; j < n; j++){
            temp = srednia(pojemnik_1[i], pojemnik_2[j]);
           // cout<<"\n\t"<<pojemnik_1[i]<<"\t"<<pojemnik_2[j]<<"\t"<<temp<<"\n";
            pojemnik_1[i]=temp;
            pojemnik_2[j]=temp;
           // cout<<"\t"<<temp<<"\t";
        }
    }
    cout<<"\n";

    //W powyższym scope-ie jest błąd

    //Średnia z jednej tablicy
    double suma=0,sredniaztablicy;
    for(int i = 0; i < n; i++){
        suma += pojemnik_1[i];
        cout<<pojemnik_1[i]<<"\t";
    }
    sredniaztablicy = suma/n;
    printf("\n\nSrednia temperatur wody w pojemnikach, ktore na poczatku mialy goraca wode wynosi: %.3f \n\n", sredniaztablicy);

    //Średnia z drugiej tablicy
suma=0;
    for(int i = 0; i < n; i++){
        suma += pojemnik_2[i];
        cout<<pojemnik_2[i]<<"\t";
    }
    sredniaztablicy = suma/n;
    printf("\n\nSrednia temperatur wody w pojemnikach, ktore na poczatku mialy zimna wode wynosi: %.3f \n", sredniaztablicy);

    while ('\n' != getchar ());
    printf ("Wcisnij enter aby zakonczyc prace programu.");
    getchar ();
    return 0;
}

