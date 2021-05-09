#include<iostream>
using namespace std;
int main(){
    unsigned n;
    cin>>n;
    int Can_do[n][3];
    for(size_t i=0; i < n; i++){
        for(size_t j=0; j < 3; j++){
            cin>>Can_do[i][j];
        }
    }
    unsigned count{0};
    unsigned to_implement{0};
    for(size_t i=0; i < n ; i++){
        count=0;
        for(size_t j=0; j < 3 ; j++){
            if(Can_do[i][j] == true){
                count++;
            }
        }
        if(count >= 2){
            to_implement++;
        }
    }
    cout<<to_implement;
}
