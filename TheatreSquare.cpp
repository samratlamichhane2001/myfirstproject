#include<iostream>
using namespace std;
int main(){
    unsigned long long m,n,a;
    cin>>n>>m>>a;
    unsigned long long flagstones;
    if(m%a !=0 && n%a != 0){
        flagstones = ((m+ (a-m%a))/a)*((n+(a-n%a))/a);
    }
    else if(m%a !=0){
        flagstones = ((m+ (a-m%a))/a)*(n/a);
    }
    else if(n%a != 0){
        flagstones = (m/a)*((n+(a-n%a))/a);
    }
    else{
        flagstones = (m*n)/(a*a);
    }
    //For less than 1 values.
    if(flagstones < 1)
        flagstones = 1;
    cout<<flagstones;
    return 0;
}