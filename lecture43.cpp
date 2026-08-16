#include <algorithm>
#include <iostream>
#include <vector>
using namespace std ;

void ps(vector<int> &arr , vector<int>& ans , int i ){
    if (i == arr.size()){
        for (int val : ans){
            cout << val << "  ";
        }
        cout << endl ;
        return ;
    }
    // including
    ans.push_back(arr[i]);
    ps( arr , ans , i+1);
    // excluding
    ans.pop_back(); // BACKTRACKING STEP
    ps( arr , ans , i+1);

}

void getAllSS(vector<int> &nums , vector<int> &ans , int i , vector<vector<int>>& allSS  ){
    if (i == nums.size()){
        allSS.push_back({ans});
        return ;
    }
    //include
    ans.push_back(nums[i]);
    getAllSS(nums , ans , i+1 , allSS);
    //backtracking
    ans.pop_back();
    //exclude
    getAllSS(nums , ans , i+1 , allSS);
}
vector<vector<int>> subsets(vector<int> &nums){
    vector<int> ans ;
    vector<vector<int>>allSS ;
    getAllSS(nums , ans , 0 , allSS);
    return allSS ;
}

void getSS( vector<int> &nums , vector<int> &ans , vector<vector<int>> &allSS, int i  ){
    if ( i == nums.size()){
        allSS.push_back(ans);
        return ;
    }
    
    ans.push_back( nums[i] );//include
    getSS(nums , ans , allSS , i+1);
    ans.pop_back();//backtracking

    int idx = i+1 ;
    while (idx < nums.size() && nums[idx] == nums[idx-1]) idx++ ;

    getSS(nums , ans , allSS , idx); // exclude
    
}

vector<vector<int>> subsets2 (vector<int> &nums){
    sort(nums.begin() , nums.end());
    vector<int> ans ;
    vector<vector<int>> allSS ;
    getSS(nums , ans ,allSS , 0);
    return allSS ;
}



int main(){
    vector <int> arr = {1,2,2};
    vector <int> ans = {};
    //ps(arr , ans ,0);
//    vector<vector<int>> a = subsets(arr);
//    for (int i = 0 ; i < a.size() ; i++ ){
//        for(int j = 0 ; j < a[i].size() ; j++ ){
//            cout<< a[i][j] << "  " ;
//        }
//        cout << endl ;
//    }

    vector<vector<int>> b = subsets2(arr);
    for (int i = 0 ; i < b.size() ; i++ ){
        for(int j = 0 ; j < b[i].size() ; j++ ){
            cout<< b[i][j] << "  " ;
        }
        cout << endl ;
    }
    
    return 0; 
}