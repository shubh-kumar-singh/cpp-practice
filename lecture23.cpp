// AGGRESIVE COWS PROBLEM
#include <vector>
#include<algorithm>
#include <iostream>
using namespace std;

bool isValid(vector<int> vec , int C , int n ,int max){
    int cow = 1 ; int position = vec[0];
    for (int i = 0 ; i < n ; i++){
        if (vec[i] - position >= max ){
            cow++;
            position = vec[i];
        }
        if (cow == C) return true;
    }
    return false ;
}

int aggresiveCows(vector<int> vec , int C){
    int n = vec.size();
    if (C==1) return -1;
    sort(vec.begin(), vec.end());
    int st = vec[0] , end = vec[n-1];
    int ans = -1;
    while (st <= end){
        int mid = end + ( st - end )/2;
        if (isValid(vec , C , n , mid  )){
            st = mid + 1;
            ans = mid;
        } else {
            end = mid - 1 ;
        }
    }
    return ans;


}
int main(){
    vector <int> vec ={1,2,8,4,9};
    int noCow = 3 ;
    cout << aggresiveCows(vec , noCow) << endl;

}