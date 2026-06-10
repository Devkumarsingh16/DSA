#include<iostream>
using namespace std;

int main(){

    int value = 5;
    int* p = &value;
    int**p2 = &p;

    cout <<"Printing p :"<<p<<endl;
    cout <<"address of p : "<<&p<<endl;
    cout << *p2 <<endl;

    cout << value <<endl;
    cout <<*p << endl;
    cout << **p2 <<endl;

    cout << &value <<endl;
    cout <<p << endl;
    cout << *p2 <<endl;

    cout <<&p << endl;
    cout << p2 <<endl;

    return 0;

}
                                              
                                       //double pointer in function

#include<iostream>
using namespace std;

int update(int** p2){

    // p2 = p2+1;            // any change->No

    // *p2 = *p2+1;             // any change->yes

    **p2 = **p2+1;                // any change->yes                                                                                                                                                                                                                                                            
}

int main(){

    int value = 5;
    int* p = &value;
    int**p2 = &p;

    cout <<"before :"<<value<<endl;
    cout <<"before : "<<p<<endl;
    cout <<"before : " <<p2 <<endl;

    update(p2);

    cout <<"after :"<<value<<endl;
    cout <<"after : "<<p<<endl;
    cout << "after : "<<p2 <<endl;

    return 0;
}
