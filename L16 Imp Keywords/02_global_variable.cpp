#include<iostream>
using namespace std;

int score = 15;              // we use globally

void a(int i){

    cout << score <<" in a"<<endl;
    cout<<i<<endl;


}

void b(int i){

    cout<< score <<" in b" <<endl;
    cout<<i<<endl;

}
int main(){
    cout<<score << " in main" <<endl;
    int i = 5;
    cout << i << endl;
    a(i);

    b(i);

}
