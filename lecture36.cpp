#include <iostream>
#include <vector>
using namespace std;
// LEETCODE 54 (SPIRAL MATRIX)
vector<int> spiralMatrix(vector<vector<int>> matx){
    int n = matx.size() , m = matx[0].size() ;
    int srow = 0 , erow = n-1 ;
    int scol = 0 , ecol = m-1 ;
    vector <int> vec ;
    while (srow <= erow && scol <= ecol ){
        for (int j = scol ; j <= ecol ; j++){
            vec.push_back(matx[srow][j]) ;
        }
        for (int i = srow + 1 ; i <= erow ; i++){
            vec.push_back(matx[i][ecol]) ;
        }
        for (int j = ecol -1 ; j >= scol ; j--){
            if (srow == erow){
                break;
            }
            vec.push_back(matx[erow][j]) ;
        }
        for (int i=erow-1 ; i >= srow+1 ; i--){
            if (scol == ecol ){
                break;
            }
            vec.push_back(matx[i][scol]) ;
        }
        srow++;
        erow--;
        scol++;
        ecol--;        
    }
    return vec ;
}

int main(){
    vector<vector<int>> matx = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12,} , {13,14,15,16}};
    vector <int> ans = spiralMatrix(matx);
    for (int val : ans){
        cout << val << "  ";
    }
}