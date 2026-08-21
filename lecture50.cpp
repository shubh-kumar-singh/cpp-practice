#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void merge(vector<int>& arr , int st , int end , int mid ){
    int i = st , j = mid+1 ;
    vector<int> temp ;
    while (i <= mid && j <= end){
        if ( arr[i] >= arr[j] ){
            temp.push_back(arr[j]);
            j++;
        }else{
            temp.push_back(arr[i]);
            i++ ;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++ ;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0 ; idx < temp.size(); idx++ )
        arr[idx+st] = temp[idx];
}

void mergeSort(vector<int>& arr , int st , int end ){
    if (st>=end){
        return;
    }
    int mid = st + (end-st)/2 ;
    mergeSort(arr , st , mid );
    mergeSort(arr , mid+1 , end );
    merge(arr , st , end , mid );
}

int main(){
    vector<int> arr = { 12 , 31 , 35 , 8 , 32 , 17 };
    mergeSort(arr , 0 , arr.size()-1 );
    for (int i = 0 ; i<arr.size() ; i++ ){
        cout<<arr[i]<<endl ;
    }
}