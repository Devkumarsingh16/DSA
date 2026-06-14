#include<iostream>
using namespace std;

bool element(int arr[],int size,int key){

    // Base case
    if(size == 0){
        return false;
    }

    // processing
    if(arr[0] == key){
    return true;
    }

    // recursive case
    else{
        bool remainingpart = element(arr+1,size-1,key);
        return remainingpart;
    }
}

int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;

   int ans  = element(arr,5,2);

   if(ans){
    cout << "element is found" <<endl;

   }
   else{
    cout << "element not found"<< endl;
   }

    return 0;
}
