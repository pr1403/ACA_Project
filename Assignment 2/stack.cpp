#include<bits/stdc++.h>
#include<stack>
#include<string.h>
using namespace std;
int main(){
string s;
cin>>s;
stack<char> stack;
int i;
string a;
for(i=0;i<s.size();i++){
    if(s[i]=='(' || s[i]=='[' || s[i]=='{')stack.push(s[i]);
    else if(!stack.empty()){
        if((s[i]==')' && stack.top()=='(')||
        (s[i]==']' && stack.top()=='[')||
        (s[i]=='}' && stack.top()=='{')){
        stack.pop();
        a='true';
        }
    }
    else {
        a='false';
        break;
    }
}
cout<<a<<endl;
return 0;
}
        
