#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char index[200];
    gets(index);
    unsigned ones_count{};
    for(size_t i=0; i< strlen(index); i++){
        if(index[i] == '1'){
            ones_count++;
            if(ones_count == 7){
                break;
            }
        }
        else{
            ones_count = 0;
        }
    }
    unsigned zeros_count{};
    for(size_t i=0; i< strlen(index); i++){
        if(index[i] == '0'){
            zeros_count++;
            if(zeros_count == 7){
                break;
            }
        }else{
            zeros_count = 0;
        }
    }
    if(ones_count == 7 || zeros_count == 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}