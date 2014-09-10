#include <iostream>
#include <cstdio>
#include <cmath>

const double EPS = 0.001;

double f(double x){
        return x;
    }
// Miejsca zerowe to -2 i 4

using namespace std;
int main(){
    //Zmienne potrzebne do wykonania zadani
    double a,b; //Okreslają przedział poszukiwań
    double function_a,function_b,function_zero; //Zmienne, które będą przetrzymywać dane do obliczeń
    double wynik; //wynik, uzylem go pare razy w innych miejscach


    //Wczytywanie danych
        printf("Podaj prosze argument, od którego mam zaczac poszukiwania. \n");
            cin>>a;
        printf("\nPodaj prosze argument, na którym mam zakonczyc poszukiwania. \n");
            cin>>b;

          function_a = f(a);
          function_b = f(b);

          if(function_a * function_b > 0){
                printf("\nFunkcja nie spelnia zalozen zadania \n f(a)*f(b) > 0 \n\n");
            }
          else{
                while(abs(a-b) > EPS)
                {
                  wynik = (a + b) / 2;
                  function_zero = f(wynik);
                  if(f(0) == 0){
                       printf("\n\n\n Miejsce zerowe wynosi to mniej wiecej: 0");
                       break;
                       break;
                      }else{
                cout<<"idzie dalej";
                  if(abs(function_zero) < EPS) break;
                  if(function_a * function_zero < 0){
                      b = wynik;
                  } else {
                    a = wynik;
                    function_a = function_zero;
                  }
                printf("\n\n\n Miejsce zerowe wynosi to mniej wiecej: %f)",wynik);
                }
            }
          }


        return 0;
    }