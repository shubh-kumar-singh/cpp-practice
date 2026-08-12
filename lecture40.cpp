#include<iostream>
#include<unordered_map>
#include <vector>
using namespace std ;
int sumEqualsK(vector<int> arr , int target){
    int count = 0 ;
    for (int i = 0 ; i<arr.size() ; i++ ){
        int sum =0 ;
        for(int j = i ; j<arr.size() ;j++){
            sum += arr[j] ;
            if (sum == target){
                count++ ;
            }
            
        }
    }
    return count; ;
}

//OPTIMISED APPROACH  T.C --> O(n)  S.C --> O(n)
int sunarray(vector<int> vec , int target){
    int n = vec.size();
    int count = 0 ;
    vector<int> prefixSum(n,0);
    prefixSum[0] = vec[0];
    for (int i = 1 ; i<n ; i++){
        prefixSum[i] = prefixSum[i-1] + vec[i] ;
    }
    unordered_map<int,int> M ;
    for (int j = 0 ; j<n ; j++){
        if (prefixSum[j] == target ) count++ ;
        int val = prefixSum[j] - target ;
        if (M.find(val) != M.end()){
            count += M[val];
        }
        if (M.find(prefixSum[j]) == M.end()){
            M[prefixSum[j]] = 0;
        }
        M[prefixSum[j]]++;
    }
    return count ;
}
int main(){
    vector<int> arr = {9,4,20,3,10,5};
    int target = 33;
    int ans = sumEqualsK(arr , target);
    cout<< ans  << endl ;
    int ans2 = sunarray(arr , target);
    cout<<ans2<<endl;

    return 0 ;
}