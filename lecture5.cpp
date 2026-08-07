//#include <iostream>
//using namespace std;
//int Sum(int a , int b){
//    int s = a+b;
//    return s;
//}
//int main(){
//    cout<< Sum(15,20)<<endl;
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int Greater(int a ,int b){
//    cout <<(a<b ? b  : a) << " is greater" ;
//    return 0;
//}
//int main (){
//    Greater(10,202);
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int sumN(int N){
//    int sum=0;
//    for (int i=1 ; i<=N ; i++ ){
//        sum += i ;
//    }
//    return sum;
//}
//int main(){
//    cout << sumN(5) << endl;
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int factN(int N){
//    int mul=1;
//    for (int i=1 ; i<=N ; i++ ){
//        mul *= i ;
//    }
//    return mul ;
//}
//int main(){
//    cout<< factN(5) << endl;
//    return 0;
//}
// calculate the sum of digits of the numbers
//#include <iostream>
//using namespace std;
//
//int digitSum(int No){
//    int SumD =0;
//    while (No>0){
//        int a = No%10;
//        No=No/10;
//        SumD+=a;
//    }
//    return SumD;
//}
//
//int main (){
//    int No;
//    cout <<"ENTER THE NO.";
//    cin >> No ;
//    cout << digitSum(No) << endl ;
//}
// CALCULATE THE nCr FOR GIVEN VALUE OF n AND r nCr= n!/r!(n-r)!
//#include <iostream>
//using namespace std;
//int nCr( int n , int r ){
//    int rf = 1 ;
//    int nf = 1 ;
//    int n_minus_f = 1;
//    for (int i=1 ; i<=n ; i++  ){
//        nf*=i;
//    }
//    for (int i=1 ; i<=r ; i++  ){
//        rf*=i;
//    }
//    for (int i=1 ; i<=n-r ; i++  ){
//        n_minus_f*=i;
//    }
//    cout << nf / (rf * n_minus_f) <<"  "<< n_minus_f << endl;
//    return 0;
//}
//int main(){
//    int n;
//    int r;
//    cout <<"ENTER THE VALUE OF n :-";
//    cin >> n;
//    cout <<"ENTER THE VALUE OF r :-";
//    cin >> r;
//    nCr(n,r);
//    
//}
//#include <iostream>
//using namespace std;
//
//int checkPrime(int n){
//    int i=2;
//    bool isPrime=true;
//    while (n>i){
//        if (n%i==0){
//            cout <<"NON PRIME NUMBER";
//            isPrime=false;
//            break;
//        }else{
//            isPrime=true;
//            i++;
//        }
//    }
//    if (isPrime==true){
//    cout <<"PRIME NUMBER ";
//        }  return 0;
//}
//int main (){
//    int n=4;
//    checkPrime(n);
//}
//
//#include<iostream>
//using namespace std;
//
//int primeN(int n){
//    for (int i=3 ; i<n ; i++ ){
//            int count=2;
//            if (i%count!=0){
//                cout<<i<<endl;
//            }
//    }
//    return 0;   
//}
//int main (){
//    int n;
//    cout <<"ENTER THE NUMBER:-";
//    cin >> n;
//    primeN(n);
//}
//FIBONACCI SERIES
#include <iostream>
using namespace std;
int fiboS(int n){
    int p2=0;
    int p1=1;
    int cur=0;
    for (int i=2 ; i<=n ; i++){
        cur =p2 + p1;
        p2=p1;
        p1=cur;
    }
    cout << cur << endl;
    return 0;
}
int main (){
    int n;
    cout <<"ENTER THE Nth TERM :-";
    cin >> n;
    fiboS(n);
}
