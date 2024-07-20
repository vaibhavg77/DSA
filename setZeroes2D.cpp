#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {            // only valid if elements dont have negative elements

        for(int i = 0 ; i<matrix.size(); i++){
            for(int j=0 ; j<matrix[0].size() ; j++){
                if(matrix[i][j]==0){
                   // mark i row with -1 
                   for(int k =0  ; k<matrix[0].size() ; k++ ){       //i,k
                        if(matrix[i][k]!=0){
                            matrix[i][k] = -1 ;
                        }
                   }
                   //mark j column with -1
                   for(int l = 0 ; l<matrix.size() ; l++){              //l , j
                        if(matrix[l][j]!=0){
                            matrix[l][j] = -1 ;
                        }
                   }
                }
            }
        }
        for(int i = 0 ; i<matrix.size(); i++){
            for(int j=0 ; j<matrix[0].size() ; j++){
                if(matrix[i][j]==0){
                   matrix[i][j] = -1 ;
                }
            }
        }
        for(int i = 0 ; i<matrix.size(); i++){
            for(int j=0 ; j<matrix[0].size() ; j++){
                if(matrix[i][j]==-1){
                   matrix[i][j] = 0 ;
                }
            }
        }

    return  ;

    }

int main()
{
    vector<vector<int>> matrix ={{1,1,1},{1,0,1},{1,1,1}} ;
    setZeroes(matrix) ;
    for(int i = 0 ; i<matrix.size() ; i++){
        for(int j =  0 ; j< matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl ;
    }
    return 0;
}