// LECTURE 1 & 2
// #include <iostream>
// using namespace std;
//
// int main(){
//     cout << "Hi shubh" << endl  << "Singh" << endl << "Rajput " << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout << "ENTER YOUR AGE: " << endl;
//     cin >> age;
//     cout << "YOUR AGE IS: " << age << endl;
//     return 0;
// }
// int main(){
//     cout <<!(5<6) << endl;
//     return 0;
// }
// int main(){
//     int a;
//     int b;
//     cout << "ENTER FIRST NUMBERS: " << endl;
//     cin >>a ;
//     cout << "ENTER SECOND NUMBERS: " << endl;
//     cin >> b;
//     cout << "SUM OF TWO NUMBERS IS: " << a+b << endl;
// }
//int main(){
//    int a;
//    cout << "SELECT YOUR ACTION: " << endl << "1. ADDITION" << endl << "2. SUBTRACTION" << endl << "3. MULTIPLICATION" << endl << "4. DIVISION" << endl;
//    cin>>a;
//    if (a==1) {
//        int b;
//        int c;
//        cout << "ENTER FIRST NO. " << endl;
//        cin >> b;
//        cout << "ENTER SECOND NO. " << endl;
//        cin >> c;
//        cout << "SUM OF TWO NUMBERS IS: " << b+c << endl;
//
//            }
//    if (a==2){
//        int b;
//        int c;
//        cout << "ENTER FIRST NO. " << endl;
//        cin >> b;
//        cout << "ENTER SECOND NO. " << endl;
//        cin >> c;
//        cout << "DIFFERENCE OF TWO NUMBERS IS: " << b-c << endl;
//     }
//    if (a==3){
//        int b;
//        int c;
//        cout << "ENTER FIRST NO. " << endl;
//        cin >> b;
//        cout << "ENTER SECOND NO. " << endl;
//        cin >> c;
//        cout << "PRODUCT OF TWO NUMBERS IS: " << b*c << endl;
//    }
//    if (a==4){
//        int b;
//        int c;
//        cout << "ENTER FIRST NO. " << endl;
//        cin >> b;
//        cout << "ENTER SECOND NO. " << endl;
//        cin >> c;
//        cout << "DIVISION OF TWO NUMBERS IS: " << b/c << endl;
//}
//return 0;
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int a;
//    cout <<"ENTER THE NO."<< endl;
//    cin >> a;
//    if (a>=0){
//        cout <<"The no. is +ve"<< endl ;
//    } else {
//        cout <<"The no is -ve"<< endl;
//    }
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//    char b;
//    cout << "ENTER YOUR CHAR :-";
//    cin >> b;
//    char a = b; // implicite type casting
//    if (a>=65 && a<=90) {
//        cout <<"THE CHAR IS UPPER CASE"<< endl;
//    } else if (a>=97 && a<=122){
//        cout << "THE CHAR IS LOWER CASE" << endl;
//    } else {
//        cout <<"SORRY WRONG INPUT"<< endl;
//    }
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//    int a;
//    cout <<"ENTER A NUMBER :- ";
//    cin >> a;
//    int b=1;
//    int c=10;
//    while (b<=c){
//        cout << a*b << endl;
//        b++;
//    }
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER A NO. :-";
//    cin >> no;
//    for (int i=1 ; i<=10 ; i++ ){
//        cout << i*no << endl;
//    }
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER A NO. :-";
//    cin >> no;
//    int sum=0;
//    for (int i=1  ; i<=no ; i++ ){
//        sum=sum+i;
//    }
//    cout << sum ;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER A NO. :-";
//    cin >> no;
//    int oddSum=0;
//    for (int i=1  ; i<=no ; i+=2 ){
//        oddSum+=i;
//    }
//    cout << oddSum ;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> n;
//    int i=1;
//    int oddSum=0;
//    while(i<=n){
//        if (i%2!=0){
//            oddSum+= i;
//        }
//        i+=1;
//    }
//    cout << oddSum <<endl;
//
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> n;
//    int i=1;
//    int evenSum=0;
//    for (int i=1 ; i<=n ;i++){
//        if (i%2==0){
//            evenSum+=i;
//        }
//    }
//    cout << evenSum << endl;
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout <<"ENTER THE NUMBER :-";
//    cin >> n;
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
//    }
//
//}   
//
//#include <iostream>
//using namespace std;
//int main(){
//    int no;
//    cout <<"ENTER THE NO :-";
//    cin >>no;
//    int sum3=0;
//    for (int i=1 ; i<=no ; i++){
//        if (i%3==0){
//        sum3=sum3+i;
//    }
//    }
//    cout << sum3 << endl;
//}
//
#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "ENTER YOUR NO. :-";
    cin >> n;
    int facto=1;
    for (int i=1 ; i<=n ; i++ ){
        facto=facto*i;
    }
    cout << "FACTORIAL IS " << facto << endl;
}