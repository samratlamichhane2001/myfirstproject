#include<iostream>
#include<string>
using namespace std;
int main(){
    int variable{0};
    unsigned n;
    cin >>n;
    string Input[n];
    for(unsigned i=0; i < n; i++){
        cin>> Input[i];
    }
    for(unsigned i=0; i < n; i++){
        if(Input[i] == "++X" || Input[i] == "X++"){
            variable++;
        }
        else if(Input[i] == "--X" || Input[i] == "X--"){
            variable--;
        }
        else
        break;
    }
    cout<<variable;
    return 0;
}