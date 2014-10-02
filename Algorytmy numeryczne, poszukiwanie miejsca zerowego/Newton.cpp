#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
/*
        Implementacja by Jakub Hajto,
        na podstawie schematu z http://edu.i-lo.tarnow.pl/inf/alg/005_root/images/013_06.gif
 
*/
const double EPS = 0.000000001;
 
//Tu wpisz sobie jak¹œ funkcje do policzenia miejsca zerowego, byle by mia³a dok³adnie 1 miejsce zerowe
double f(double x){
        return 2 * x + 4;
}
double fprim(double x){
        return 2;
}
 
using namespace std;
int main(){
        //Zmienne potrzebne do wykonania zadani
        double x_zero=0,x_poprzedni=0,function=0,function_prim=0;
 
        //Wczytywanie danych
        printf("Podaj punkt startowy od ktorego zaczynamy poszukiwania pierwiastka. \n");
        cin >> x_zero;
 
        function = f(x_zero);
        x_poprzedni = x_zero - 1;
 
 
        for (int iterator = 64; iterator > 0; iterator-- ){
                if (abs(x_poprzedni - x_zero) < EPS){
                        cout << "\nWynik to: " << x_zero<<"\n";
                        break;
                }
                if (abs(function) < EPS){
                        cout << "\nWynik to: " << x_zero<<"\n";
                        break;
                }
                function_prim = fprim(x_zero);
                if (abs(function_prim) < EPS){
                        cout << "\nZle punkty startowe"<<"\n";
                        break;
                }
                x_poprzedni = x_zero;
                x_zero = x_zero - (function / function_prim);
                function = f(x_zero);
        }
 
 
 
 
 
        return 0;
        system("pause");
}