#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int partition(vector<int>& arr , int st , int end){
    int idx = st-1 , pivet = arr[end];
    for (int j = st ; j<end ; j++){
        if (arr[j] <= pivet){
            idx++;
            swap(arr[idx] , arr[j] );
        }
    }
    idx++;
    swap(arr[idx] , arr[end]);
    return idx ;
}

void quickSort(vector<int>& arr , int st , int end){
    if (st<end){
        int pivIdx = partition(arr , st , end);
        quickSort(arr , st , pivIdx-1);
        quickSort(arr , pivIdx+1 , end);
    }
}



int main(){
    
    vector<int> arr = {5,2,6,4,1,3};
    quickSort(arr , 0 , arr.size()-1);
    for (int i = 0 ; i<arr.size() ; i++ ){
        cout<<arr[i]<<endl ;
    }
}