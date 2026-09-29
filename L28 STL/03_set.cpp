                       
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    int age;
    string name;

    bool operator < (const Person &other) const{
        return age < other.age;
    }

};


int main(){

       // 1.accending order insertion
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(40);
    s.insert(50);
    s.insert(30);


    for(auto i = s.begin(); i != s.end();i++){

        cout << *i<<" ";
    
     
             //2. desending order insertion
         set<int,greater<int>> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(40);
    s.insert(50);
    s.insert(30);


    for(auto i = s.begin(); i != s.end();i++){

        cout << *i<<" ";
    }

    cout << endl;

               // 3. search element
    if(s.find(90) != s.end()){

        cout<< "Found" << endl;
    }
    else{
        cout<< " Not Found" << endl;
    }

              // 4. count 
     cout << s.count(10)<< " " << endl;

             // 5. delete 
    s.erase(20);

    set<Person>say;
    Person p1,p2,p3;

    p1.age = 20, p1.name = "Ravi";
    p2.age = 30, p2.name = "kavi";
    p3.age = 40, p3.name = "savi";

    say.insert(p1);
    say.insert(p2);
    say.insert(p3);

    for(auto i = say.begin(); i != say.end();i++){
        cout << (*i).age  << " " <<(*i).name << endl;
    }
    }
    return 0;
}
