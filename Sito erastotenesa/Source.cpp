#include<iostream>
#include <cmath>

using namespace std;


main(){
	int i,n,j,wiel;
	cout<<"Podaj wielkosc zbioru liczb: "<<endl;
	cin>>n;
	bool liczby[n];
	for(i=2; i<=n; i++){
	 	liczby[i] = true;
	 }

    wiel=sqrt(n);
    for(i = 2; i <= wiel; i++)
		 for(j=i*i; j<n; j+=i){
		 	 liczby[j] = false;
		 }
	for(i = 2; i < n; i++){
        if(liczby[i]) {
        	cout << i << " ";
        }
	}
}
