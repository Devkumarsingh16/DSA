#include<iostream>
using namespace std;
 
int main(){

    int arr[7] = {3,8,10,17,19,2,6};
    int n = 7;


    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;

        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;

    }
    cout<<"pivot elemtent at index : "<<start;      // start or end because same position

    return 0;

}
