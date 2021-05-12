#include<iostream>
using namespace std;
int main(){
    unsigned short n{};
    cin>>n;
    short Matrix[n][3];
    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < 3; j++){
            cin>>Matrix[i][j];
        }
    }
    int sumx{},sumy{},sumz{};
    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < 3; j++){
            if(j == 0){
                sumx+=Matrix[i][j];
            }
            else if(j == 1){
                sumy+=Matrix[i][j];
            }
            else{
                sumz+=Matrix[i][j];
            }
        }
    }
    if(sumx == 0 && sumy == 0 && sumz == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}