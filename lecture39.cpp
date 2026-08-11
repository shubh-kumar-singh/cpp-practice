#include <iostream>
#include <vector> 
using namespace std ;
#include<algorithm>

vector<vector<int>> fourSum(vector<int> nums , int tar){
    int n = nums.size();
    vector<vector<int>> ans ;
    sort(nums.begin() , nums.end());
    for(int i = 0 ; i<n ; i++){
        if (i>0 && nums[i] == nums[i-1])continue;
        for(int j = i+1 ; j<n ;){
            int p = j+1 , q = n-1 ;
            while(p<q){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q] ;
                if (sum>tar){
                    q--;
                } else if(sum < tar){
                    p++;
                }else{
                    ans.push_back({nums[i] , nums[j] , nums[p] , nums[q]});
                    p++ ; q-- ;
                    while(p<q && nums[p]==nums[p-1]) p++;
                }
            }
            j++;
            while( j < n && nums[j]==nums[j-1]) j++;
        }
    }
    return ans ;
}

int main(){
    vector<int> arr = {-2 , -1 , -1, 1 , 1 , 2 , 2 };
    int target = 0;
    vector<vector<int>> ans = fourSum(arr , target);
    for (int i = 0 ; i<ans.size() ; i++){
        for(int j = 0  ; j<ans[i].size() ; j++ ){
            cout<<ans[i][j]<<"  " ;
        }
        cout<<endl ;
    } 
    return 0 ;
}