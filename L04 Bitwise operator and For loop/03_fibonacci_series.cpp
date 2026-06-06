#include<iostream>
using namespace std;

int main(){
    int n = 10;

    int a = 0,b = 1;
    cout<<a<<" "<<b<<" ";

    for(int i = 1;i<=n;i++){

    int nextterm = (a+b);
    cout<<nextterm<<" ";

    a = b;
    b = nextterm;
    }


}
