#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char Compare[2][100];
    gets(Compare[0]);
    gets(Compare[1]);
    for(size_t i=0; i < 2; i++){
        for (size_t j = 0; j < strlen(Compare[i]); j++ ){
            Compare[i][j] = tolower(Compare[i][j]);
        }
    }
    if(strcmp(Compare[0],Compare[1]) < 0){
        cout<<"-1";
    }
    else if(strcmp(Compare[0],Compare[1]) > 0){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}