#include <iostream>
using namespace std;
#include <vector>
int binarySearch(vector<int> vec , int target ){
    int st =0;
    int end = vec.size()-1;
    while (st<=end){
        int mid = st + (end - st)/2;
        if (vec[mid] < target ){
            st = mid+1;
        }else if (vec[mid] > target ){
            end = mid-1;
        }else {
            return mid;
        }
    }
    return -1;
}
// using Recursion
int BS(vector<int> vec ,int target , int st , int end){
    int mid = st+(end-st)/2;
    if (target<vec[mid]){
        return BS(vec  , target , st , mid-1 );      
    } else if (target>vec[mid]){
        return BS(vec  , target , mid+1 , end);
    } else {
        return mid;
    }

    return -1;
}
int main(){
    vector<int> vec = {-1,0,3,4,5,9,12};
    int target = 12;
    cout<<binarySearch(vec ,target) << endl ;
    cout<<BS(vec , target , 0  , vec.size()-1) << endl;
}