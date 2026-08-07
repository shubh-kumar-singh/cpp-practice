#include <vector>
#include <iostream>
using namespace std;
vector<int> prodMe(vector<int> vec){
    int n= vec.size();
    vector <int> result;
    for (int i=0 ; i<n ; i++){
        int pro = 1;
        for(int j=0 ; j<n ; j++){
            if (i!=j){
                pro*=vec[j];
            }
        }
        result.push_back(pro);
    }
    return result; 
}
// MORE OPTIMIZED SOLUTION - T.C = O(N) and S.C = O(N)
vector<int> productExceptSelf(vector<int> vec ){
    int n = vec.size();
    vector <int> ans(n,1);
    vector <int> prefix(n,1);
    vector <int> suffix(n,1);

    for (int i =1 ; i<n ; i++){
        prefix[i] = prefix[i-1] * vec [i-1];
    }
    for (int i= n-2 ; i>=0 ; i--){
        suffix[i] = suffix[i+1] * vec[i+1];
    }
    for (int i=0 ; i<n ; i++){
        ans[i] = prefix[i] * suffix [i] ;
    }
    return ans ;

}
// MOST OPTIMIZED SOLUTION - T.C = O(N) and S.C = O(1)
vector<int> productExceptSelf1(vector<int> vec ){
    int n = vec.size();
    vector <int> ans(n,1);

    for (int i =1 ; i<n ; i++){
        ans[i] = ans[i-1] * vec[i-1] ;
    }
    int suffix = 1;
    for (int i= n-2 ; i>=0 ; i--){
        suffix *= vec[i+1];
        ans[i] *= suffix ;
    }
    return ans ;

}

int main(){
    vector<int> vec ={1,2,3,4};
    vector<int> result = productExceptSelf1(vec);
    for (int i=0 ; i<result.size() ; i++){
        cout << result[i] << " ";
    }
    return 0;
}