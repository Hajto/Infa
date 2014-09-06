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

    //Mieszanie według fotki tablicy prog. Pawła K.
    for(int i = n; i >= 0; i--){
        for(int j = 0; j < n; j++){
            double temp = srednia(pojemnik_1[j], pojemnik_2[i]);
            pojemnik_1[i]=temp;
            pojemnik_2[j]=temp;
            cout<<"\t"<<temp<<"\t";
        }
    }
    cout<<"\n";

    //W powyższym scope-ie jest błąd

    //Średnia z jednej tablicy
    double suma=0,sredniaztablicy;
    for(int i = 0; i < n; i++){
        suma += pojemnik_1[i];
        cout<<"\t"<<pojemnik_1[i];
    }
    sredniaztablicy = suma/n;
    cout<<"\n\n\n"<<sredniaztablicy<<"\n\n\n";

    //Średnia z drugiej tablicy
suma=0;
    for(int i = 0; i < n; i++){
        suma += pojemnik_2[i];
        cout<<"\t"<<pojemnik_2[i];
    }
    sredniaztablicy = suma/n;
    cout<<"\n\n\n"<<sredniaztablicy<<"\n\n\n";


    return 0;
}

