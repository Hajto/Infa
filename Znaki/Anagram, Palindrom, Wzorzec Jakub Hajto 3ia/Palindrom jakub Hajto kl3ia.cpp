#include<iostream>
#include<cstdio>

using namespace std;


int main(){
    string slowo = "";
    getline(cin,slowo);
	int length= slowo.length()-1;
	bool czy=true;
	for(int i=0; i < length/2; i++){
	    if(slowo[i]!= slowo[length-i])
            czy=false;
	    }
    if(czy)
        printf("true");
    else
        printf("false");
	return 0;
}
