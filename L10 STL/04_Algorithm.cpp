#include<iostream>              // set always give in sorted orderd and if same value contain many time ten it behave 1
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);

    cout<<" Finding 7 : "<<binary_search(v.begin(),v.end(),7)<<endl;

    cout<<"Lower bound : "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    
    cout<<"Upper  bound : "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

    int a = 4;
    int b = 8;

    cout<<"Max: "<<max(a,b);
    cout<<endl;

    cout<<"Min : "<<min(a,b); 
    cout<<endl;

    swap(a,b);
    cout<<"After swaping value of a is : "<<a<<endl;

    string alok = "abcd";
    reverse(alok.begin(),alok.end());
    cout<<"After reversing : "<<alok<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotating"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
}
