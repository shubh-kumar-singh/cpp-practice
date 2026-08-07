#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void sortBruteForce( vector <int>& vec ){
    sort(vec.begin() , vec.end());
}
void sortOptimised(vector <int>& vec){
    int n = vec.size();
    int n_0 = 0 ;
    int n_1 = 0 ;
    int n_2 = 0 ;
    for (int i = 0 ; i<n ; i++){
        if (vec[i]==0){
            n_0++;
        }else if (vec[i]==1){
            n_1++;
        }else{
            n_2++;
        }
    }
    int idx = 0;
    for (int i=0 ; i<n_0 ; i++){
        vec[idx++] = 0;
    }
    for (int i=0 ; i<n_1 ; i++){
        vec[idx++] = 1;
    }
    for (int i=0 ; i<n_2 ; i++){
        vec[idx++] = 2;
    }
}
void printVec(vector <int> vec ){
    int n = vec.size();
    for (int i = 0 ; i<n ; i++){
        cout << vec[i] << "  ";
    }
}

int main(){
    vector<int> vec ={2,0,2,1,1,0,1,2,0,0};
    sortBruteForce(vec);
    printVec(vec);
}