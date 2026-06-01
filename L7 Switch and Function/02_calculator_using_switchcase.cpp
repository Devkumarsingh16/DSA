#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;

    
    char op;
    cout<<"Enter operation :";
    cin>>op;


    switch(op){

       case '+':cout<<(a+b)<<endl;
                 break;
       case '-':cout<<(a-b)<<endl;
                 break;
        case '*':cout<<(a*b)<<endl;
                 break;
        case '/':cout<<(a/b)<<endl;
                 break;
        default:cout<<"invalid choice";

    }
    cout<<endl;
    return 0;
}
