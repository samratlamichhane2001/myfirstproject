#include<iostream>
using namespace std;
int main(){
    unsigned m,n;
    cin>>n>>m;
    char photo[n][m];
    bool color{false};
    for (size_t i=0; i < n; i++){
        for(size_t j = 0; j<m; j++){
            cin>>photo[i][j];
        }
    }
    for (size_t i=0; i < n; i++){
        for(size_t j = 0; j<m; j++){
            if(photo[i][j] == 'C' || photo[i][j] == 'M' || photo[i][j] == 'Y')
            color = true;
        }
    }
    if(color){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White";
    }
    return 0;
}