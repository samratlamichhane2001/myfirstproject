#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char Sumstring[100]{};
    char newstring[101]{};
    gets(Sumstring);
    for(int j=0; j < strlen(Sumstring); j++){
        if(Sumstring[j] == '1')
        strcat(newstring,"1+");
    }
    for(int j=0; j < strlen(Sumstring); j++){
        if(Sumstring[j] == '2')
        strcat(newstring,"2+");
    }
    for(int j=0; j < strlen(Sumstring); j++){
        if(Sumstring[j] == '3')
        strcat(newstring,"3+");
    }
    newstring[strlen(Sumstring)] = '\0';
    puts(newstring);
    return 0;
}