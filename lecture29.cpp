#include <iostream>
#include <string> 
using namespace std;
bool isAlphaNum(char ch ){
    if ((ch >= 0 && ch <= 9 ) ||
     (tolower(ch) >= 'a'  && tolower(ch) <= 'z')) {
        return true;
    }
    return false ; 
}
bool isPalindrom(string str){
    int st = 0 , end = str.length()-1;
    while (st < end){
        if (!isAlphaNum(str[st])) {
            st++; continue;
            cout<< "GI" << endl ;
        }
        if (!isAlphaNum(str[end])) {
            end--; continue;
            cout<< "GL" << endl;
        }
        if (tolower(str[st]) != tolower(str[end])) {
            cout<< "jf" << endl;
            return false;
        }
        st++ ; end--;
    }
    cout<< "GOD" ;
    return true; ;

}
int main(){
    string str = "race a car$";
    cout<< isPalindrom(str) << endl;;
}