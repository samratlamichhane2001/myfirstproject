#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char Word[1000];
    gets(Word);
    if(Word[0] >= 'a' && Word[0] <= 'z'){
        Word[0] -= 32;
    }
    puts(Word);
    return 0;
}