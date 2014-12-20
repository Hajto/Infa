#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string slowo_a="",slowo_b="";
    getline(cin,slowo_a);
    getline(cin,slowo_b);
    bool czy=true;

    if(slowo_a.length() == slowo_b.length()){

          sort(slowo_a.begin(),slowo_a.end());
          sort(slowo_b.begin(),slowo_b.end());
          bool temp= true;
          for(int i=0; i < slowo_a.length();i++){
              if(slowo_a[i] != slowo_b[i])
                temp=false;
              }
        cout<<(temp?"true":"false");
    }
	return 0;
}
