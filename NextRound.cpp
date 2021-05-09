#include<iostream>
using namespace std;
int main(){
    unsigned n,k;
    cin>>n>>k;
    unsigned Scores[n]{0};
    unsigned players_to_next{0};
    for(size_t i = 0; i < n; i++){
        cin>>Scores[i];
    }
    for(size_t i = 0; i< n; i++){
        if(Scores[i] !=0){
            if(Scores[i] >= Scores[k-1]){
                players_to_next++;
            }
        }
    }
    cout<< players_to_next;
    return 0;
}