#include<iostream>
#include<cstdio>

using namespace std;

void mieszanie(double *pojemniki_cieple, double *pojemniki_zimne, double pojemnik);

main(){
	double pojemnik;
	cout<<"Wypisz liczbê pojemników"<<endl;
	cin>>pojemnik;
	double pojemniki_cieple[1000];
	double pojemniki_zimne[1000];
	for (int i=0; i<pojemnik; i++){
		pojemniki_cieple[i] = 100;
		pojemniki_zimne[i] = 0;
}
//	mieszanie(pojemniki_cieple, &pojemniki_zimne, pojemnik);
for (int i=pojemnik; i >= 0; i--){
		for (int j = 0; j < pojemnik; j++){
			pojemniki_zimne[j] = (pojemniki_cieple[i] + pojemniki_zimne[j]) / 2;
			pojemniki_cieple[i] = pojemniki_zimne[j];
		}
	}
	double suma=0, sredniaztablicy;
	for(int i = 0; i < pojemnik; i++) {
		suma += pojemniki_cieple[i];
		//cout<<pojemniki_cieple[i]<<"\t";                                                
	}
	sredniaztablicy = suma/pojemnik;
		printf("\n\nSrednia temperatur cieplych pojemnikow: %.3f ", sredniaztablicy);
	suma=0;
	for(int i = 0; i < pojemnik; i++){
		suma += pojemniki_zimne[i];
		//cout<<pojemniki_zimne[i]<<"\t";
	}
	sredniaztablicy = suma/pojemnik;
	printf("\n\nSrednia temperatur zimnych pojemnikow: %.3f ", sredniaztablicy);
	return 0;
}

//float dla liczb po przecinku

void mieszanie(double *pojemniki_cieple, double *pojemniki_zimne,  double pojemnik){
	
}
