#include<iostream>
using namespace std;

void saydigit(int n ,string arr[]){

     // Base case
    if(n == 0){
        return;
    }
   
    // processing

    int digit = n % 10;
    n = n/10;

    // recursive call

    saydigit(n,arr);

    cout<<arr[digit]<< " ";

}

int main(){

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cout <<" Enter any digit : ";
    cin >> n;

    // cout << endl;

    saydigit(n , arr);

    return 0; 
}
