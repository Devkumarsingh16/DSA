#include<iostream>
using namespace std;

int main(){

    int i = 5;

    // creating reference variavle

    int &j = i;

    cout<< i <<endl;
    i++;
    cout<< i <<endl;
    j++;
    cout << i << endl;
       //or
    cout << j <<endl;
    return 0;
}

                                   // why we use pass by reference
#include<iostream>
using namespace std;

void update(int& n){       // by using this the value of i change because of using ref. variable
    n++;
}
// void  update(int n){        // here no any change such because we not use ref. variable
//     n++;
//  }

int main(){

    int  i= 5;

    cout <<"Before : "<<i<<endl;
    update(i);

    cout<< "After : " <<i<<endl;


    return 0;

}
