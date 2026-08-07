#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;
pair<int,int> lSrch(int mat[][3] , int row , int column , int target ){
    for (int i = 0 ; i < row ; i++ ){
        for (int j = 0 ; j < column ; j++){
            if (mat[i][j] == target){
                return {i,j} ;
            }
        }
    }
    return {-1,-1};
}
int mxRowSum(int matrix[][3] , int row , int col){
    int mx = INT_MIN;
    for (int i = 0  ; i<row ; i++){
        int sum = 0;
        for (int j = 0 ; j<col ; j++){
            sum += matrix[i][j];
        }
        mx = max( mx , sum );
    }
    return mx ;
}
int mxColSum( int matrix[][3] , int row , int col){
    int mx= INT_MIN;
    for (int i = 0 ; i<col ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < row ; j++){
            sum += matrix[j][i];
        }
        mx = max(mx , sum);
    }
    return mx ;
}
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
    int matx [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3 ;
    int col = 3 ;
    int Target = 12 ;
    cout << mxRowSum(matx , row , col ) << endl ;
    cout << mxColSum(matx , row , col  ) << endl;
    cout << diagonalSum(matx , row ) << endl;
    cout << diagonalSumOptimised(matx , row ) << endl ;
    pair <int , int> result = (lSrch(matx , row , col ,Target));
    cout << "ROW ->" << result.first << "COLUMN ->" << result.second ;
    cout << matx[2][1] << endl; // O/P -->  8
    matx[2][1] = 0 ;
    cout << matx[2][1] << endl; // O/P -->  0
    for (int i = 0 ; i<row ; i++ ){
        for (int j = 0 ; j<col ; j++ ){
            cout << matx[i][j] << "  " ;
        }
        cout << endl ;
    }
    for (int i =0 ; i<row ;i++){
        for (int j=0 ; j<col ; j++ ){
            if (matx[i][j] == Target){
                cout << "ROW -> " << i << "COLUMN -> " << j <<endl;
                break;
            }
        }
    }
    int matrix [4][3];
    int rows = 4 ;
    int cols = 3 ;
    for (int i = 0 ; i<rows ; i++ ){
        for (int j = 0 ; j<cols ; j++ ){
            cout << " ENTER THE VALUE FOR ROW "<< i << " AND COLUMN " << j << ":-" ;
            cin >> matrix[i][j] ;
        }
    }
    for (int i = 0 ; i<rows ; i++ ){
        for (int j = 0 ; j<cols ; j++ ){
            cout << matrix[i][j] << "  " ;
        }
        cout << endl ;
    }
    return 0 ; 
}