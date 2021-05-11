#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char string[110]{};
    gets(string);
    //converting all charaacters to lowercase.
    for(size_t i=0; i < strlen(string); i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] +=32;
        }
    }
    //removing vowels.
    for(size_t i=0; i < strlen(string); i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'y'){
            for(size_t j=i; j < strlen(string); j++){
                string[j]=string[j+1];
            }
            i--;
        }
    }
    //placing dots before constants.
    char temp[220];
    strcpy(temp,string);
    strcat(temp,string);
    for(size_t i=0; i < strlen(string); i++){
        temp[2*i+1] = string[i];
        temp[2*i] = '.';
    }
    strcpy(string, temp);
    puts(string);
    return 0;
}