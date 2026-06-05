                                               // Set

#include<iostream>              // set always give in sorted orderd and if same value contain many time ten it behave 1
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(7);

    for(int i:s){
    cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();

    s.erase(it);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Check 7 is present or not : "<<s.count(7);

}

                                                      // Map

    

#include<iostream>              // set always give in sorted orderd and if same value contain many time ten it behave 1
#include<map>
using namespace std;

int main(){

    map<int,string> m;

    m[1] = "Dev";
    m[4]  = "Kumar";
    m[9] = "Singh";

    m.insert({6,"Prince"});

    cout<<"Before erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }
cout<<" Finding 13 : "<<m.count(13)<<endl;

m.erase(9);
cout<<"After erase : "<<endl;
   for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
   }
}
