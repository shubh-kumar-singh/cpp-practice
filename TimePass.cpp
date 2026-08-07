#include <iostream>
using namespace std;
int diagonalSum( int matrix[3][3] , int n){
    int dSum = 0;
    for(int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<n ; j++){
            if (i == j ){
                dSum += matrix[i][j];
            }else if(j == n-1-i){
                dSum += matrix[i][j];
            }
        }
    }
    return dSum ;
}
int diagonalSumOptimised( int matrix[3][3] , int n){
    int Sum = 0;
    for(int i = 0 ; i<n ; i++){
        Sum += matrix[i][i];

        if (i != n-1-i){
            Sum += matrix[i][n-i-1];
        }
    }
    return Sum ;
}
int main(){
    int mtx[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row =3 , col = 3 ;
    cout << diagonalSum(mtx , row ) << endl;
    cout << diagonalSumOptimised(mtx , row ) << endl ;
    return 0 ;
}