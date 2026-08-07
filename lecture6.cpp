//#include <iostream>
//using namespace std;
//int DecToBi(int DecNo){
//    int B =0, pow = 1;
//    while ( DecNo>0 ){
//        int reminder = DecNo%2;
//        DecNo = DecNo/2;
//        B += reminder*pow;
//        pow *= 10;
//    }
//    return B;
//}
//
//int main(){
//    int DecNo;
//    cout << "ENTER YOUR NUMBER:-";
//    cin >> DecNo;
//    cout<<"ITS BINARY FORM IS " << DecToBi(DecNo) << endl;
//}
//
//#include <iostream>
//using namespace std;
//int biToDec(int BiNo){
//    int pow= 1 , decimalNo =0;
//    while (BiNo>0){
//        int rem = BiNo%10;
//        BiNo /=10;
//        decimalNo += rem * pow;
//        pow *=2;
//    }
//    return decimalNo;
//}
//int main(){
//    int BiNo;
//    cout <<"ENTER YOUR NUMBER :-";
//    cin >> BiNo;
//    cout << "THE DECIMALNO. IS " << biToDec(BiNo) ;
//}