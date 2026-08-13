#include<iostream>
using namespace std;

void printNToOne( int n){
    if (n==1){
        cout<< n << "  ";
        return ;
    }
    cout << n << "  ";
    printNToOne(n-1);

}

int NFactorial(int n ){
    if (n == 0) return 1 ;
    return n * NFactorial(n-1);
    
}

int nSum(int n ){
    if (n==1){
        return 1;
    }
    return n + nSum(n-1);
}
int main(){
    int  n= 10;
    printNToOne(n);
    cout<<endl;
    cout<<NFactorial(n)<<endl;
    cout<<nSum(n) << endl;
}