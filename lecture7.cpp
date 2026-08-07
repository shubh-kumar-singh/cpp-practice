// Figure out how to find if a number is power of 2 without loop
#include<iostream>
using namespace std;
int pow2( int n){
    if (n>0 && (n & (n-1)) == 0){
        cout << n <<"IS A POWER OF TWO .";
    }
    else{
        cout << n <<" IS  NOT A POWER OF TWO !!!!!!!!!!!";
    }
    return 0;
}
int main (){
    int n;
    cout << "ENTER A NO.  :---  " ;
    cin >> n;
    pow2(n);
    return 0;
}
// WAF to reverse an integer n
//#include <string>
//#include <iostream>
//using namespace std;
//int revInt (int INT){
//    int revNo=0;
//    while (INT!=0){
//        int rem= INT%10;
//        revNo= (revNo*10) + rem ;
//        INT /= 10;
//    }
//    return revNo;
//}
// int main (){
//    int INT;
//    cout << "ENTER THE NUMBER :-  " ;
//    cin >> INT;
//    cout << revInt(INT) << endl;
//    return 0;
// }