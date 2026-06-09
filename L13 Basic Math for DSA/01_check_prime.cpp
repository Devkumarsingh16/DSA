#include<iostream>
using namespace std;

 bool isPrime(int n){
    if(n <=1){
        return false;
    }

        for(int i = 2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

int main(){

    cout<<"Enter any number : "<<endl;
    int n;
    cin>>n;

    if((isPrime(n))){
        cout<<"It is Prime Number"<<endl;
    }
    else{
        cout<<"It is not Prime Number "<<endl;
    }
    return 0;
}
