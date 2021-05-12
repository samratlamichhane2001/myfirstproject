#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[200];
    gets(name);
    char character{};
    for(size_t i=0; i < strlen(name)-1; i++){
        character = name[i];
        for(size_t j = i+1; j<strlen(name); j++){
            while(name[j] == character){
                for(size_t k=j; k < strlen(name)-1; k++){
                    name[k]=name[k+1];
                }
                name[strlen(name)-1]='\0';
            }
        }
    }
    if(strlen(name) & 1){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}