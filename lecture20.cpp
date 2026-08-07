// SINGLE ELEMENT IN A SORTED ARRAY {1 2 2 3 3 4 4 5 5 6 6}
#include <vector>
#include <iostream>
using namespace std;
int singleEle(vector <int> vec){
    int n = vec.size();
    if (n==1) return vec[0];
    int st = 0 , end = n-1 ;
    while (st <= end){
        int mid = st +(end-st)/2;

        if (mid == 0 && vec[0] != vec[1]) return mid;
        if (mid == n-1 && vec[n-1] != vec[n-2]) return mid;
        
        if (vec[mid] != vec[mid - 1] && vec[mid] != vec[mid + 1] ) return mid;

        if (mid % 2 == 0){
            if (vec[mid] == vec[mid - 1]){
                end = mid- 1;
            } else {
                st = mid + 1;
            }
        }else {
            if (vec[mid] == vec[mid - 1]){
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
    cout << singleEle(vec) << endl;
    return 0;
}