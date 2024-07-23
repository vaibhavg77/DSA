#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> byRotate(vector<vector<int>>& matrix){
        int n = matrix.size() ;
        vector<vector<int>> dummy(n,vector<int>(n,0)) ;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                dummy[j][n-i-1] = matrix[i][j] ;
            }
        }
        return dummy ;
}
vector<vector<int>> byTranspose(vector<vector<int>>& matrix){
        int n = matrix.size() ;
        for(int i =0 ; i<n ; i++){
            for(int j= 0 ; j<i ; j++){
               swap( matrix[i][j] , matrix [j][i]  )  ;
            }
        }
        for(int i =0 ; i<n ; i++){
            reverse(matrix[i].begin(), matrix[i].end()) ;
        }
        return matrix ;
}


int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0 ; i<matrix.size(); i++){
        for(int j = 0  ; j< matrix.size() ; j++){
            cout<<matrix[i][j] ;
        }
        cout<<endl ;
    }
    vector<vector<int>>ans  = byTranspose(matrix) ;
    for(int i = 0 ; i<ans.size(); i++){
        for(int j = 0  ; j< ans.size() ; j++){
            cout<<ans[i][j] ;
        }
        cout<<endl ;
    }

    return 0 ;
}