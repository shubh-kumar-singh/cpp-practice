#include<algorithm>
#include<iostream>
#include<vector>
using namespace std ;

bool isPalin(string s ){
    string s1 = s ;
    reverse(s1.begin() , s1.end());
    if (s1 == s){
        return true ;
    }else{
        return false;
    }
}

void getAllPart( string s , vector<string>& partition , vector<vector<string>>& ans ){
    if (s.size() == 0){
        ans.push_back(partition);
        return ;
    }
    for(int i = 0 ; i < s.size() ; i++ ){
        string part = s.substr(0,i+1);
        if (isPalin(part)){
            partition.push_back(part);
            getAllPart(s.substr(i+1) , partition , ans);
            partition.pop_back();
        }
    }
}

vector<vector<string>> palindromePartition(string s ){
    vector<string> partition ;
    vector<vector<string>> ans ;
    getAllPart(s , partition , ans );
    return ans ;
}

int main(){
    string s = "aab";
    vector<vector<string>> ans  = palindromePartition(s);
    for(int i = 0 ; i<ans.size() ; i++ ){
        for(int j = 0 ; j<ans[i].size() ; j++ ){
            cout << ans[i][j] << " ";
        }
        cout << endl ;
    }

}