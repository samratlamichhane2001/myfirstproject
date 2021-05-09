#include<iostream>
using namespace std;
int main(){
    int Matrix[5][5];
    int row,column;
    int moves{};
    for(size_t i=0; i < 5; i++){
        for(size_t j=0; j < 5; j++){
            cin>>Matrix[i][j];
        }
    }
    for(size_t i=0; i < 5; i++){
        for(size_t j=0; j < 5; j++){
            if(Matrix[i][j] == 1){
                row    = i+1;
                column = j+1;
            }
        }
    }
    {
        int rowmoves{3-row};
        if(rowmoves<0)
        rowmoves*=(-1);
        int columnmoves{3-column};
        if(columnmoves<0)
        columnmoves*=(-1);
        moves = rowmoves + columnmoves;
    }
    cout<<moves;
    return 0;
}