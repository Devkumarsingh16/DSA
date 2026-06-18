#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "krishna";

    stack<char> s;

    for(int i = 0; i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
    
    string ans;

    while(!s.empty()){
        char word = s.top();
        ans.push_back(word);

        s.pop();

    }

    cout << "ans is : " << ans << endl;

    return 0;
}
