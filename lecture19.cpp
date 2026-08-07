#include <vector>
#include <iostream>
using namespace std;
int peakIdx(vector<int> vec ){
    int st = 0 , end = vec.size() - 1;
    while(st <= end){
        int mid = st +(end-st)/2;
        if (vec[mid] > vec[mid-1] && vec[mid] > vec[mid+1] ){
            return mid ;
        }else if ( vec[mid] > vec[mid-1] && vec[mid] < vec[mid+1] ){
            st = mid  + 1;
        }else {
            end =mid - 1; 
        }
    }
    return -1;
}
int main (){
    vector <int> vec = {1,2,3,4,5,1};
    cout << peakIdx(vec) << endl;
}