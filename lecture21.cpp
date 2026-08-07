#include<vector> 
#include<iostream>
using namespace std ;

bool Valid( vector<int> vec , int max , int n , int k){
    int sum = 0 , count = 1;
    for (int i=0 ; i<n ; i++ ){
        if (vec[i] > max ) return false;
        if (sum + vec[i] <= max){
            sum += vec[i];
        }else{
            sum = vec[i];
            count++;
        }
    }
    if (count <= k){
        return true;
    }else{
        return false;
    }
}

int bookProblem( vector<int> nums , int k  ){
    int n=nums.size();
    if (n < k ) return -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    if (k==1) return sum;
    int st = 0 , end = sum-1 , ans = -1;
    int loop=555;
    while (loop = 555 ){
        int mid = st + (end-st)/2;
        if (Valid(nums , mid , n , k)){
            end =mid-1;
            ans = mid;
        }else {
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {7,2,5,10,8};
    int k = 2;
    cout << bookProblem(vec , k) << endl;
    return 0;
}