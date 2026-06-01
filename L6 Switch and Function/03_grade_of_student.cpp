#include<iostream>
using namespace std;

int main(){

    int m;

    cout<<"Enter value of m: ";
    cin>>m;



    switch(m/10){

       case 9 : cout<<"Grade A";
                break;
       case 8 : cout<<"Grade B";
                break;
       case 7 : cout<<"Grade C";
                break;
        case 6 : cout<<"Grade D";
                break;
        case 5 : cout<<"Grade E";
                break;
        default:cout<<" invalid";
    }
    cout<<endl;
    return 0;
}
