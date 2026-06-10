#include<iostream>
using namespace std;

int main(){

    int num = 5;

    int *ptr = &num;

    cout<<"The value is : "<<*ptr<<endl;
    cout<<"Adress of num is : "<<ptr<<endl;


}

                          // another method to do same thing as above

#include<iostream>
using namespace std;

int main(){

    int num = 5;

    int *ptr = 0;
    ptr = &num;

    cout<<"The value is : "<<*ptr<<endl;
    cout<<"Adress of num is : "<<ptr<<endl;

}

                      
                             // increment
#include<iostream>
using namespace std;

int main(){

int num = 5;
int a = num;

cout<<"a befor increment : "<< num<<endl;
a++;
cout<<"a after increment : "<< num <<endl;


int *p = &num;
cout<<"before : "<<num<<endl;
(*p)++;
cout<<"after : "<<num<<endl;

// copying the pointer p into q
int *q = p;
cout<<p<<" "<<q<<endl;
cout<<*p<<" "<<*q<<endl;

    return 0;
}
