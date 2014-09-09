#include<iostream>
#include <cstdio>
#define MAX 1000

using namespace std;

int main(){
    int x;
    cin>>x;
    float tab[MAX]={0};
    float tab2[MAX];
    for(int i=1;i<=x;i++){
            tab2[i]=100;
        for(int J=x;J>0;J--){
                float sr=(tab[J]+tab2[i])/2;
       tab2[i]=sr;
       tab[J]=sr;
     //  cout<<"TAB2["<<i<<"]="<<tab2[i]<<endl;
    //   cout<<"TAB["<<J<<"]="<<tab[J]<<endl;
        // cout<<endl;
        }
    }

    float srednia=0;
    for(int i=1;i<=x;i++){
    srednia+=tab[i];
    }

    srednia=srednia/x;
   printf("%.3f\n",srednia);
	return 0;
}
