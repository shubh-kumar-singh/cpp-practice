//print all subarray
//#include <vector>
//#include <iostream>
//using namespace std;
//int main(){
//    vector<int> vec ={1,2,3,4,5,6,7,8,9,0} ;
//    int size = vec.size();
//    for (int st = 0 ; st < size ; st++ ){
//        for (int end = st ; end < size ; end++){
//            for (int i = st ; i <= end ; i++){
//                cout << vec[i];
//            }
//            cout<<"  ";
//        }
//        cout << endl;
//    }
//}
//Maximum Subarray Sum using Brute force approach
//#include<vector>
//#include<iostream>
//using namespace std;
//int main (){
//    vector <int> vec = {3,-4,5,4,-1,7,-8};
//    int size = vec.size();
//    int Max_Sum= INT_MIN;
//    for (int st=0 ; st < size ; st++){
//        int curr_sum=0;
//        for (int end =st ; end < size ; end ++){
//            curr_sum+= vec[end];
//            Max_Sum=max(curr_sum,Max_Sum);
//        }
//    }
//    cout << Max_Sum << endl;
//}
//
//Maximum Subarray Sum using Brute force approach
//#include<vector>
//#include<iostream>
//using namespace std;
//int main (){
//    vector <int> vec = {3,-4,5,4,-1,7,-8};
//    int size = vec.size();
//    int Max_Sum= INT_MIN , curr_sum=0;
//    for (int value : vec){
//        curr_sum += value;
//        Max_Sum=max(Max_Sum, curr_sum);
//        if (curr_sum<0){
//            curr_sum=0;
//        }
//    }
//    cout << Max_Sum<< endl;
//}
//