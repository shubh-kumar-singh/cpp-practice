//Container with most water 
#include<vector>
#include <iostream>
using namespace std;
int mostWater(vector <int> vec){ // Brute force approach
    int mostW = 0;
    int n =vec.size();
    for (int i=0 ; i<n ; i++  ) {
        for (int j=i+1 ; j<n ; j++){
            int w = j-i;
            int h = min(vec[i],vec[j]);
            int waterCapacity = w*h;
            mostW = max(mostW , waterCapacity);
        }
    }
    return mostW;
}
int mostPani(vector <int> vec){
    int mostW = 0;
    int n =vec.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        int w = j-i;
        int h = min(vec[i],vec[j]);
        int waterCapacity = w*h;
        mostW = max(mostW , waterCapacity);

        if (vec[i]<vec[j]){
            i++;
        }else if (vec[i]>vec[j]){
            j--;
        }else if (vec[i]==vec[j]){
            i++;
        }
        

    }
    return mostW;
}

int main (){
    vector <int> sizeC = {1,8,6,2,5,4,8,3,7};
    cout <<"Max Water is -- "<< mostWater(sizeC);
    return 0;
}