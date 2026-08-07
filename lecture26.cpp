#include <vector>
#include <iostream>
using namespace std;
void merge2SortefArr(vector<int>& nums1 , int m , vector<int> nums2 , int n ){
    int position = n+m-1;
    while ( m!= 0 || n!=0){
        if (m!= 0 && n!=0){
            if (nums1[m-1] < nums2[n-1]){
                nums1[position] = nums2[n-1];
                n--;
                position--;
            }else if (nums1[m-1] >= nums2[n-1]){
                nums1[position] = nums1[m-1];
                m--;
                position--;
            }
        }else if (m != 0){
            nums1[position] = nums1[m-1];
            m--;
        }else if (n != 0){
            nums1[position] = nums2[n-1];
            n--;
        }
    }
}

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int piv = -1 ;
    for (int i = n-2 ; i>=0 ; i--){
        if (nums[i] < nums[i+1]){
            piv = i ;
            break;
        }
    }
    if (piv == -1) {
        int i = 0 , j = n-1;
        while(i<=j){
            swap(nums[i++] , nums[j--]);
        }
        return;
    }
    for (int i = n-1 ; i>piv ; i--){
        if (nums[i] > nums[piv]){
            swap(nums[i] , nums[piv]);
            break;
        }
    }
    int i = piv+1 , j = n-1 ;
    while( i <= j){
        swap( nums[i++] , nums[j--] );
    }
}

void printVec(vector <int> vec ){
    int n = vec.size();                                       // {,2,2,3,5,6}
    for (int i = 0 ; i<n ; i++){                              // m=3-1=2-1-1=0 n=3-1=2-1=1-1=0 position = 5-1=4-1=3-1=2-1=1-1=0
        cout << vec[i] << "  ";
    }
}

int main (){
    vector<int> n1 = {1,2,3,0,0,0};
    int m = 3 ;
    vector<int> n2 = {2,5,6};
    int n = 3 ;
    merge2SortefArr(n1 , m , n2 , n);
    printVec(n1);
    return 0;

}