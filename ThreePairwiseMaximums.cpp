#include<iostream>
using namespace std;
unsigned long long max(unsigned long long p, unsigned long long q){
    return p>q?p:q;
}
int main(){
    unsigned long t{};
    unsigned long long x{},y{},z{};
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        unsigned long long A[]{x,y,1};
        unsigned long long B[]{x,z,1};
        unsigned long long C[]{y,z,1};
        size_t i,j,k;
        for(i =0; i<3; i++){
            for(j=0; j<3; j++){
                for(k=0; k<3; k++){
                    if(x == max(A[i],B[j]) && y == max(A[i],C[k]) && z == max(B[j],C[k])){
                        cout<<"YES"<<endl;
                        cout<<A[i]<< " "<<B[j]<<" "<<C[k]<<endl;
                        break;
                    }
                }
                if(x == max(A[i],B[j]) && y == max(A[i],C[k]) && z == max(B[j],C[k])){
                        break;
                }
                
            }
            if(x == max(A[i],B[j]) && y == max(A[i],C[k]) && z == max(B[j],C[k])){
                        break;
            }
        }
        if(i==2 && j == 2 && k==2){
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}