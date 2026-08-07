#include <vector>
#include <iostream>
using namespace std;

int srhRotatedArr(vector<int> vec , int target){
    int st =0;
    int end =vec.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if (vec[mid]==target){
            return mid;
        }
        if (vec[mid]>vec[st]){
            if (target < vec[mid] && target >= vec[st]){
                end = mid-1;
            }else {
                st = mid+1;
            }
        }else{
            if (target >= vec[mid] && target <= vec[end]){
                st = mid+1;
            }else {
                st = mid-1;
            }
        }      
        
    }
    return -1;
}

int main (){
    vector<int> vec = {4,5,6,7,1,2,3};
    int target = 3 ;
    cout << srhRotatedArr(vec , target)<< endl;
}