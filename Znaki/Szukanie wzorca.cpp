#include<iostream>
#include<string>

using namespace std;

int main(){
    string searched= "";
    string formula = "";
    //string result ="";

    getline(cin,searched);
    getline(cin,formula);

    for(int i=0; i < searched.length() ; i++){
        if(searched[i] == formula[0]){
            bool tempBool = true;
            for(int j=1; j < formula.length(); j++){
                if(searched[i+j]!=formula[j])
                    tempBool = false;
            }
            if(tempBool)
                cout<<"\n"<<i;
        }
    }
    return 0;
}
