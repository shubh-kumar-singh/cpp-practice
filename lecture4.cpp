//#include <iostream>
//using namespace std ;
//int main(){
//    int n;
//    cout <<"ENTER YOUR NO.";
//    cin >> n ;
//    for(int i=1 ; i<=n ; i++){
//        for ( int j=1 ; j<=n ;j++ ){
//            cout <<j << "  " ;
//        }
//        cout << endl ;
//    }
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout <<"ENTER A NO :-";
//    cin >> n;
//    for (int i=0 ; i<n ; i++){
//        char ch = 'A';
//        for (int j=0 ; j<n ;j++){
//            cout << ch << "  ";
//            ch = ch+1;
//        }
//        cout<< endl ;
//
//    }
//}
//#include <iostream>
//int main (){
//using namespace std;
//    int n;
//    int no= 1;
//    cin >> n;
//    cout <<"ENTER YOUR CHOICE :- ";
//    for (int j=0 ; j<n ; j++){
//    for (int i=0 ; i<n ;i++ ){
//            no++;
//            cout << no << "  " ;
//            cout << endl;
//        }
//    
//    }
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> no;
//    for (int i=0 ; i<no ; i++){
//        for (int j=0 ; j<i+1 ; j++){
//            cout <<"*"<<" " ;
//
//        }
//        cout << endl ;
//    }
//
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    int num = 1;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> no;
//    for (int i=0 ; i<no ; i++){
//        for (int j=0 ; j<i+1 ; j++){
//            cout << num << " " ;
//
//        }
//        cout << endl ;
//        num++;
//    }
//
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    char ch = 'A';
//    cout <<"ENTER THE NUMBER :-";
//    cin >> no;
//    for (int i=0 ; i<no ; i++){
//        for (int j=0 ; j<i+1 ; j++){
//            cout << ch << " " ;
//
//        }
//        cout << endl ;
//        ch++;
//    }
//
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> no;
//    for (int i=0 ; i<no ; i++){
//        int num = 1;
//        for (int j=0 ; j<i+1 ; j++){
//            cout << num << " " ;
//            num++;
//
//        }
//        cout << endl ;
//        
//    }
//
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> n;
//
//    for (int i=0 ; i<n ; i++){
//        for (int j= i+1 ; j>0 ; j--){
//            cout << j << " " ;
//        }
//        cout << endl ;
//        
//    }
//    return 0;
//
//}
// Floyd's Triangle Pattern
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> no;
//    int num = 1;
//    for (int i=0 ; i<no ; i++){
//        for (int j=0 ; j<i+1 ; j++){
//            cout << num << " " ;
//            num++;
//
//        }
//        cout << endl ;
//        
//    }
//
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> no;
//    char num = 'A';
//    for (int i=0 ; i<no ; i++){
//        for (int j=0 ; j<i+1 ; j++){
//            cout << num << " " ;
//            num++;
//
//        }
//        cout << endl ;
//        
//    }
//
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> n;
//
//    for (int i=0 ; i<n ; i++){
//        char ch = 'A' +i;
//        for (int j= i+1 ; j>0 ; j--){
//            cout << ch << " " ;
//            ch--;
//        }
//        cout << endl ;
//        
//    }
//    return 0;
//
//}
// Inverted Tringle Pattern
//#include <iostream>
//using namespace std ;
//int main (){
//    int n;
//    cout << "ENTER THE NUMBER :-";
//    cin >> n;
//    int num =1;
//    for (int i =0 ; i<n ; i++ ){
//        for (int j=i ; j>0 ; j-- ){
//            cout << " ";
//        }
//        for (int j=n-i ; j>0 ; j--){
//            cout << num;
//        }
//        num++ ;
//        cout << endl;
//    }
//    
//}
//#include <iostream>
//using namespace std ;
//int main (){
//    int n;
//    cout << "ENTER THE NUMBER :-";
//    cin >> n;
//    char ch ='A';
//    for (int i =0 ; i<n ; i++ ){
//        for (int j=i ; j>0 ; j-- ){
//            cout << " ";
//        }
//        for (int j=n-i ; j>0 ; j--){
//            cout << ch;
//        }
//        ch++ ;
//        cout << endl;
//    }
//    
//}
//
//#include<iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER YOUR NO.";
//    cin >> no;
//    for (int i=0 ; i<no ; i++ ){
//        int num = 1;
//        for (int j=no-i ; j>0 ; j--){
//            cout << " ";
//        }
//        for (int j =i+1 ; j>0 ; j--){
//            cout << num ;
//            num++;
//        }
//        
//        num=1;
//        for(int j=i ; j>0 ; j--){
//            cout << num;
//            num++;
//        }
//    
//    cout << endl;
//        
//    }
//}
 //   *             0---3
 //  * *            1---2            
 // *   *           2---1                 
 //*     *          3---0                                  
 // *   *                                                   
 //  * *                                                             
 //   *                                                      
 //   HOLLOW DIMOND PATTERN 
//#include<iostream>
//using namespace std;
//int main(){
//    int n=4;
//    for ( int i=0 ; i<n ; i++ ){
//        for(int j=n-i-1; j>0 ; j--){
//            cout<<" ";
//        }
//        cout << "*";
//        if (i!=0){
//            for (int j=(2*i)-1 ; j>0 ; j--){
//                cout << " ";
//            }
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    // BOTTOM
//    for (int i=0 ; i<n-1 ; i++ ) {
//        for (int j=0 ; j<=i ; j++){
//            
//      cout << " ";
//        }
//        cout << "*";
//        if (i!=n-2){
//            for (int j=2*(n-i)-5 ; j>0 ; j--){
//                cout <<  " ";
//            }
//            cout << "*";
//        }
//      cout << endl;
//    }
//
//
//    
//
//}
//
//*      *       0--6                        
//**    **       1--4                      
//***  ***       2--2                        
//********       3--0                 
//********       0--4             
//***  ***       1--3  
//**    **       2--2           
//*      *       3--1                  
// 
#include <iostream>
using namespace std ;
int main (){
    int n=4;
    for (int i=0 ; i<n ; i++){
        for (int j =0 ; j<i+1 ; j++){
            cout << "*";
        }
        for (int j=(n+2)-(2*i) ; j>0 ; j--){
            cout << " ";
        }
        for (int j =0 ; j<i+1 ; j++){
            cout << "*";
        }
        cout << endl; 
    }
    for (int i=0 ; i<n ; i++){
        for (int j =n-i ; j>0 ; j--){
            cout << "*";
        }
        for (int j=2*i ; j>0 ; j--){
            cout << " ";
        }
        for (int j = n-i ; j>0 ; j-- ){
            cout << "*";
        }

        cout << endl;
    }
}             