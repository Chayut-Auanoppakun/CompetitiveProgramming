#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[5][5];
    int row,col,move=0;
    for(int r=0;r<5;++r){
        for(int c=0;c<5;++c){
            cin>>matrix[r][c];
            if(matrix[r][c]==1){
                row=r; col=c;
                //cout<<row<<" "<<col<<endl;
                if(row>2){move+=(row-2);}
                if(row<2){move+=(2-row);}
                if(col>2){move+=(col-2);}
                if(col<2){move+=(2-col);}
            }
        }
    }//target r=2,c=2
    
    cout<<move;
    return 0;
}