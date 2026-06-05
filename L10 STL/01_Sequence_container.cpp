                            //Array

#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[3] = {2,3,4};

    array<int,4>a = {5,6,7,9};
    int size = a.size();

    for(int i = 0;i<size;i++)
    cout<<a[i]<<endl;

    cout<<"Element at 2nd Index : "<<a.at(2)<<endl;

    cout<<"Array is empty or not : "<<a.empty()<<endl;

    cout<<"First element : "<<a.front()<<endl;

    cout<<"Last element : "<<a.back()<<endl;
}

                                //Vector;

#include<iostream>
#include<vector>
using namespace std;

int main(){
     
    vector<int> v;

    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(3);
     cout<<"Capacity : "<<v.capacity()<<endl;

     cout<<"Size of v : "<<v.size()<<endl;

     cout<<"Element at 2nd Index  : "<<v.at(2)<<endl;

     cout<<"First element : "<<v.front()<<endl;

     cout<<"Last Element : "<<v.back()<<endl;

     cout<<"Before pop : "<<endl;
     for(int i:v){
        cout<<i<<" ";
     }cout<<endl;

     v.pop_back();

     cout<<"After pop : "<<endl;
     for(int i:v){
        cout<<i<<" ";
     }cout<<endl;

     cout<<"Befor clear size : "<<v.size()<<endl;

     v.clear();

     cout<<"After clear size : "<<v.size()<<endl;

}

                               // Deque

#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout<<endl;

    cout<<"Print First index element : "<<d.at(1)<<endl;

    cout<<"First element : "<<d.front()<<endl;
    cout<<"Last element : "<<d.back()<<endl;

    cout<<"Before erase : "<<d.size()<<endl;
    
    d.erase(d.begin(),d.begin()+1);         // he delete the first element
    
    cout<<"After erase : "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
    
}

                            // List

#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l;

    list<int> n(5,2);
    cout<<"Printing n"<<endl;
    for(int i:n){
    cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
    cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());

    cout<<"after erase : "<<endl;

    for(int i:l)
    cout<<i<<" ";

    cout<<endl;

    cout<<"Size of list : "<<l.size()<<endl;

}
