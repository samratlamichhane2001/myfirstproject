#include<iostream>
using namespace std;
int main(){
    unsigned long count{};
    unsigned long long a,b,c,n;
    unsigned long long max;
    cin>>count;
    while(count--){
        cin>>a>>b>>c>>n;
        max = (a>b)?((a>c?a:c)):(b>c?b:c);
        
    }
    return 0;
}