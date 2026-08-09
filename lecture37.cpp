#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printVec( vector<int> vec ){
    for (int i=0 ; i < vec.size() ; i++){
        cout << vec[i] << "  " ;
    }
    cout << endl ;
}

vector<int> twoSum(vector<int> vec , int target){
    vector<int> ans ;
    for (int i = 0 ; i < vec.size() ; i++ ){
        for (int j = i+1 ; j < vec.size() ; j++){
            if (vec[i] + vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans ;
}

vector<int> betterTwoSum(vector<int> vec , int target){
    int st = 0 , end = vec.size() - 1 ;
    sort(vec.begin() , vec.end());
    vector<int> ans ;
    while (st < end){
        if (vec[st] + vec[end] == target ){
            ans.push_back(st);
            ans.push_back(end);
            break;
        } else if (vec[st] + vec[end] < target ){
            st++ ;
        } else if (vec[st] + vec[end] > target ){
            end-- ;
        }
    }
    return ans ;
}

vector<int> optimalTwoSum( vector<int> vec , int target ){
    unordered_map<int,int> m ;
    vector<int> ans ;

    for (int i = 0 ; i < vec.size() ; i++ ){
        int First = vec[i];
        int Sec = target - First ;
        if ( m.find(Sec) != m.end() ){
            ans.push_back( i );
            ans.push_back(m[Sec]);
            break ;
        }

        m[First] = i ;
    }
    return ans;
}

vector<int> findMissingAndRepeatingVal( vector<vector<int>> grid ){
    int n = grid.size();
    unordered_set<int> s ;
    vector<int> ans ;
    int a , b ;

    int expectedSum = 0 , actualSum = 0 ;

    for (int i = 0 ; i<n ; i++ ){
        for (int j = 0 ; j<n ; j++ ){
            actualSum += grid[i][j] ;
            if (s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }

    expectedSum = (n*n) * (n*n + 1) / 2;
    b = expectedSum + a - actualSum ;
    ans.push_back(b) ;

    return ans ;
}

int findDuplicate(vector<int> vec){
    int slow = vec[0];
    int fast = vec[0];
    do{
        slow = vec[slow];
        fast = vec[vec[fast]];
    } while (slow != fast) ;
    slow = vec[0];
    while( slow != fast ){
        slow = vec[slow] ;
        fast = vec[fast] ;
    }
    return fast ;
}


int main(){
    vector<int> vec = {5,2,11,7,15} ;
    int target = 9 ;
    vector<int> ans1 = twoSum(vec , target);
    printVec(ans1);
    vector<int> ans3 = optimalTwoSum(vec , target);
    printVec(ans3) ; 
    vector<int> ans2 = betterTwoSum(vec , target);
    printVec(ans2);
    cout << "THE ABOVE IDX IS DIFFERENT BECAUSE OF SORTING OF VECTOR ";
    cout<<endl;
    vector<vector<int>> grid ={{9,1,7} , {8,9,2} , {3,4,6}};
    vector<int> ans4 = findMissingAndRepeatingVal(grid);
    printVec(ans4);
    vector<int> arr = {3,1,3,4,2};
    cout << findDuplicate( arr ) ;
}