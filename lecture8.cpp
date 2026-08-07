//find smallest and largest number in an array of n numbers
//#include <iostream>
//using namespace std;
//
//int main(){
//    int size=10;
//    int marks[10];
//    int s_no = INT_MAX;
//    int l_no = INT_MIN;
//    int l_idx;
//    int s_idx;
//    for (int i=0 ; i<size ; i++){
//        cout << "ENTER THE MARKS FOR ROLL NO " << i+1 <<":--  "<< endl;
//        cin >> marks[i];
//    }
//    for (int i=0 ; i<size ; i++){
//        cout << marks[i]<< endl;
//    }
//    for (int i=0 ; i<size ; i++){
//        if (marks[i]<s_no){
//            s_no= marks[i];
//            s_idx=i;
//        }
//        if ( marks[i]>l_no){
//            l_no=marks[i];
//            l_idx=i;
//        }
//    }
//    cout << "THE LEAST MARKS IS  " << s_no   << "  OF INDEX  " << s_idx<<endl;
//    cout << "THE HIGHEST MARKS IS  " << l_no << "  OF INDEX  " << l_idx <<endl;
//    
//
//}
//#include <iostream>
//using namespace std;
//
//int Linear_Search(int arr[] , int size , int Target ){
//    for (int i=0 ; i<size ; i++){
//        if (arr[i]==Target){
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main(){
//    const int size = 5;
//    int arr[size]={4,8,94,74,5};
//    int Target = 8;
//    cout << "THE IDX OF " << Target << "  IS  "<< Linear_Search(arr, size, Target) <<endl;
//}
//#include <iostream>
//using namespace std;
//int R_Array(int arr[] , int size ){
//    int start=0;
//    int end = size - 1;
//    while (start<=end){
//        swap(arr[start] , arr [end]);
//        start++;
//        end--;
//    }
//    return 0;
//}
//
//int main (){
//    const int size = 5;
//    int arr[size] = {1,2,3,4,5};
//    R_Array(arr , size );
//    for (int i=0 ; i<size ; i++){
//        cout << arr[i] <<endl ;
//    }
//    
//}
//WAF TO CALCULATE SUM & PRODUCT OF ALL NUMBER IN AN ARRAY
//#include <iostream>
//using namespace std;
//
//int SumProduct (int arr[] , int size){
//    int sum =0;
//    int pro =1;
//    for (int i=0 ; i<size ; i++ ){
//        sum+= arr[i];
//        pro*= arr[i];
//    }
//    cout <<"PRODUCT OF ALL NUMBER OF ARRAY :-"<< pro << endl <<  "SUM OF ALL NUMBER OF ARRAY :-"<< sum ;
//    return 0;
//}
//int main (){
//    int arr[5]={1,2,3,4,5};
//    int size = 5;
//    SumProduct(arr , size);
//}
//WAF TO SWAP THE MAX AND MIN NUMBER OF AN ARRAY
//#include <iostream>
//using namespace std ;
//
//int SwapMaxMin(int arr[] , int size){
//    int max = INT_MIN;
//    int min = INT_MAX;
//    int iMax;
//    int iMin;
//    for (int i=0 ; i<size ; i++){
//        if (max < arr[i]){
//            max= arr[i];
//            iMax = i;
//        }
//        if (min > arr[i]){
//            min = arr[i];
//            iMin = i ;
//        }
//                
//    }
//    swap(arr[iMin] , arr[iMax]);
//    for (int j=0 ; j<size ; j++){
//        cout << arr[j] <<" ";
//    }
//    return 0;
//}
//int main (){
//    int arr[5]={1,2,3,4,5};
//    int size =5;
//    SwapMaxMin(arr,size);
//    return 0;
//}

//WAF TO PRINT ALL UNIQUE VALUES IN AN ARRAY
//#include <iostream>
//using namespace std;
//
//int UniqueVal (int arr[] , int size){
//    for (int i=0 ; i<size ; i++){
//        int Value = arr[i];
//        bool isuq = true;
//        for (int j=0 ; j<size ; j++){
//            if (Value== arr[j]){
//                if (i!=j){
//                    isuq = false;
//                }
//            }
//        }
//        if (isuq == true) {
//            cout << arr[i] << endl;
//        
//        }
//        
//    }
//    return 0;
//}
//int main (){
//    int arr[10]={1,2,3,4,5,5,4,8,6};
//    int size =10;
//    UniqueVal(arr,size);
//    return 0;
//}
//
//WAF TO PRINT INTERSECTION OF 2 ARRAY
//#include <iostream>
//using namespace std;
//
//int Isection2(int arr1[] , int size1 ,int arr2[] , int size2 ){
//    for (int i=0 ; i<size1 ; i++ ){
//        int val=arr1[i];
//        for (int j=0 ; j<size2 ; j++ ){
//            if (arr1[i]==arr2[i]){
//                cout << arr2[j]<<endl;
//            }
//        }
//    }
//    return 0;
//}
//int main (){
//    int arr1[10]={1,2,3,4,5,5,4,8,6};
//    int size1 =10;
//    int arr2[10]={1,2,3,4,5,5,48,6,51};
//    int size2 =10;
//    Isection2( arr1 , size1 , arr2 , size2 );
//    return 0;
//}