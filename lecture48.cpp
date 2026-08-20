#include<iostream>
#include<vector>
#include<set>
using namespace std ;



void combSum(vector<int>& arr, int i , vector<int>& comb , vector<vector<int>>& ans , int tar , set<vector<int>>& s  ){
    int n = arr.size();
    if (i==n || tar <0 ){
        return ;
    }
    if (tar == 0){
        if (s.find(comb) == s.end()){
            ans.push_back( comb );
            s.insert(comb);
        }
        
        return ;
    }
    comb.push_back(arr[i]);
    combSum(arr , i+1 , comb , ans , tar-arr[i] , s);
    combSum(arr , i , comb , ans , tar-arr[i] , s);
    comb.pop_back();
    combSum(arr , i+1 , comb , ans , tar , s);
}

vector<vector<int>> combinationSum(vector<int>& arr , int target){
    vector<int> comb;
    vector<vector<int>> ans;
    set<vector<int>> s ;
    combSum(arr , 0 , comb , ans , target , s);
    return ans ;
}

int main(){
    vector<int> arr = {2,3,5};
    int target = 8 ;
    vector<vector<int>> ans = combinationSum(arr , target);
    for (int i = 0 ; i<ans.size() ; i++){
        for (int j = 0 ; j<ans[i].size() ; j++ ){
            cout<<ans[i][j] << "  " ;
        }
        cout<<endl ;
    }
}