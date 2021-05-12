#include<iostream>
using namespace std;
int main(){
    unsigned k{},w{};
    unsigned long long n{};
    unsigned long long money_needed{};
    cin>>k>>n>>w;
    for(int i=1; i <= w; i++){
        money_needed+=i*k;
    }
    if(n > money_needed){
        cout<<0;
    }
    else{
        cout<<money_needed-n;
    }
    return 0;
}