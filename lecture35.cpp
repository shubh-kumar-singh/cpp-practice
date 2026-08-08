// SEARCH IN  A 2-D MATRIX 
// VARIATION 1
#include <iostream> 
#include <vector>
using namespace std ;

bool rowWiseBinarySrch(vector<vector<int>>& matx  , int target , int midR){
    int n = matx[0].size();
    int st =0 , end = n-1 ;
    while (st <= end){
        int mid = st + (end - st)/2;
        if (matx[midR][mid] == target){ 
            return true;
        } else if (matx[midR][mid] < target){
            st = mid+1 ;
        } else if (matx[midR][mid] > target){
            end = mid-1 ;
        }
    }
    return false;
}

bool searchInTwoD(vector<vector<int>>& matx  , int target){
    int n = matx.size() , m = matx[0].size();
    int st = 0 , end = n-1 ;
    while ( st <= end ){
        int mid = (st + (end - st)/2);
        if (matx[mid][0] <= target && matx[mid][m-1] >= target ){
            return (rowWiseBinarySrch( matx , target , mid ));
        } else if(matx[mid][0] > target){
            end= mid-1;
        } else {
            st = mid +1;
        }
    }
    return false ;
}
bool srchTwoD( vector<vector<int>>& matx  , int target ){
    for (int i = 0 ; i < matx.size() ; i++){
        for (int j = 0 ; j < matx[0].size() ; j++ ){
            if ( matx[i][j] == target ) {
                return true;
            }
        }
    }
    return false;    
}

//VARIATION 2 L.C-> 240
bool search2D(vector<vector<int>>& matx , int target){
    int m = matx.size();
    int n = matx[0].size();
    int row = 0 ;
    int col = n-1 ;
    while (row <= m-1 && col >= 0 ){
        if (matx[row][col] == target){
            return true ;
        } else if (matx[row][col] < target){
            row++ ;
        } else if (matx[row][col] > target){
            col-- ;
        }
    }
    return false ;
}


int main(){
    vector<vector<int>> matx = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 9 ;
    cout<< searchInTwoD(matx , target ) << endl;
    cout << search2D(matrix , target) << endl ;
    return 0 ;
}