#include<iostream>
using namespace std;

int Sum(int arr[],int size){
 
    // base case
    if(size == 0){
        return 0;
    }
    
     //  recursive case
    
    return arr[size-1]  + Sum(arr,size-1);                          
}

int main(){

    int arr[5] = {3,2,5,1,6};
    int size = 5;
                                       
   int ans =  Sum(arr,5);
   cout << ans;
    return 0;
}
