//Pair Sum (Two Pointer Approach)
#include <vector>
#include <iostream>
using namespace std;

vector <int> pairSum( vector<int>nums , int target){
    int n= nums.size();
    int i = 0 , j = n-1;
    vector <int> ans;
    while (i<j){
        int pairsum = nums[i]+nums[j];
        if (pairsum > target){
            j--;
        }
        if (pairsum < target){
            i++;
        }else {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;

        }
    }
    return ans;

}
int main(){
    vector<int> vec ={3,2,4};
    int target=6;
    vector<int> ans=  pairSum(vec , target);
    cout << "THE PAIR OF NUMBER WHICH MATCHES THE TARGET IS  " << ans[0]  << "  AND  " << ans[1] << endl; 
}
//MAJORITY ELEMENT (BRUTE FORCE APPROACH)
//#include <vector>
//#include <iostream>
//using namespace std;
//int majorityEle(vector<int>vec){
//    int n=vec.size();
//    int condition = n/2;
//    int major;
//    for (int i : vec ){
//        int freq;
//        for (int j: vec){
//            if (i==j){
//                freq++;
//            }
//        }
//        if (freq > condition){
//            major = i;
//            return i;
//        }
//        
//    }
//    return -1;
//}
//int main (){
//    vector <int> vec={1,2,2,2};
//    cout << majorityEle(vec);
//}
//MAJORITY ELEMENT (OPTIMISED APPROACH)
//#include <vector>
//#include<algorithm>
//#include <iostream>
//using namespace std;
//int majorityEleOptimised(vector<int>vec){
//    int n=vec.size();
//    sort(vec.begin(),vec.end());
//    int condition = n/2;
//    int freq = 1;
//    int major = vec[0];
//    for (int i=1 ; i<n ;i++){
//        if (vec[i]==vec[i-1]){
//            freq++;
//            if (freq>condition){
//                return major;
//            }
//        }else{
//            freq=1;
//            major = vec[i];
//        }
//    }
//    return -1;
//}
//int main (){
//    vector <int> vec={1,2,2,1,1};
//    cout << majorityEleOptimised(vec);
//}
//MOORE'S VOTING ALGORITHM
//#include <vector>
//#include<algorithm>
//#include <iostream>
//using namespace std;
//int MooreVotingAlgo(vector<int>vec){
//    int n=vec.size();
//    int major = 0;
//    int freq = 0;
//    for (int i=0 ; i<n ; i++){
//        if (freq==0){
//            major=vec[i];
//        }
//        if (major == vec[i]){
//            freq++;
//        }else {
//            freq--;
//        }
//        
//    }
//    return major;
//}
//int main (){
//    vector <int> vec={1,2,2,1,1};
//    cout << MooreVotingAlgo(vec);
//}