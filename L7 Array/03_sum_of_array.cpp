#include<iostream>
using namespace std;

int sumarray(int num[],int n){

    int sum = 0;

    for(int i = 0;i<n;i++){
        sum = num[i]+sum;
        
    }
    return sum;
}


int main(){

int size;
cin>>size;

int num[100];

for(int i=0;i<size;i++){
    cin>>num[i];
}

cout<<"sum of array  is : "<<sumarray(num,size)<<endl;


return 0;

}
