#include <iostream>

double AVR(double a, double b);

using namespace std;
main(){
        int n; //Liczba pojemników w grupie
        cout<<"Wpisz liczbe pojemnikow."<<endl;
            cin>>n;
        double temps[2][2*n];
        double avgr;
        cout.precision(3);
        cout<<"\n\n"<<AVR(0,100)<<"\n\n";


    //wczytywanie danych
    for(int i=0; n > i ; i++){
            temps[1][i] = 100;
            temps[2][i] = 255;
        }
    for(int i=n; 2*n > i ; i++){
            temps[2][i] = 0;
            temps[1][i] = 255;
        }
        int helper=0;
    //Manipulacja danymi
    for(int i = 0; n > i ; i++){
        bool first=true;
        cout<<"\n\n";
        for(int i = 1; i < 3 ; i++){
                    for(int j = 0; j < 2*n ; j++){
                            cout<<temps[i][j]<<"\t";
                        }
                    cout<<"\n";
                }


            //Przesunięcie
                 for(int j = n+helper; j != 0 ; j--){
                          temps[1][j]=temps[1][j-1];
                        }
                          temps[1][helper]=255;
                          helper++;
                 for(int j = n; j > 0 ; j--){
                         if(temps[1][j] != 255 && temps[2][j] != 255){
                                avgr = AVR(temps[1][j],temps[2][j]);
                                cout<<"\n\n"<<avgr<"\n\n";
                                temps[1][j]=avgr;
                                temps[2][j]=avgr;
                         }
                 }
        }
            for(int i = 1; i < 3 ; i++){
                    for(int j = 0; j < 2*n ; j++){
                            cout<<temps[i][j]<<"\t";
                        }
                    cout<<"\n";
                }
            return 0;
        }

double AVR(double a, double b){
        return (a+b)/2;
    }
