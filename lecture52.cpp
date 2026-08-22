#include<iostream>
#include<vector>
using namespace std ;
// BRUTE FORCE APPROACH
int countInversion(vector<int> arr){
    int count = 0 ;
    for (int i = 0 ; i < arr.size() ; i++ ){
        for (int j = i+1 ; j < arr.size() ; j++ ){
            if (arr[i] < arr[j]){
                count++;
            }
        }
    }
    return count ;
}

// OPTIMISED:-

int merge( vector<int>& arr , int st , int mid , int end ){
    vector<int> temp ;
    int i = st , j = mid+1;
    int count = 0 ;
    while ( i<= mid && j<=end ){
        if (arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            count += (mid-i+1) ;
        }
    }
    while(i<= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = 0 ; i<temp.size() ; i++){
        arr[i + st]= temp[i];
    }

    return count ;
}


int mergeSort( vector<int>& arr , int st , int end ){
    if (st < end){
        int mid = st + (end-st)/2;
        int LH = mergeSort(arr , st , mid);
        int RH = mergeSort(arr , mid+1 , end);
        int invSum = merge(arr , st , mid , end );

        return LH + RH + invSum ;
    }
    return 0 ;

}


int main(){
    vector<int> arr = {6,3,5,2,7};
    cout << countInversion(arr) << endl ;
    cout << mergeSort(arr , 0 , arr.size()-1) << endl ;
    
}