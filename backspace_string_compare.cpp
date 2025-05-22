#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool backspaceCompare(string s, string t) {
        stack<char> stack1;
        stack<char> stack2;
        int n=s.size(),m=t.size();
        int i=0,j=0;
        while(i<n||j<m){
            if(i<n){
            if(s[i]!='#')
            stack1.push(s[i]);
            else if(stack1.empty()){}
            else
            stack1.pop();
            i++;
            }
            if(j<m){
            if(t[j]!='#')
            stack2.push(t[j]);
            else if(stack2.empty()){}
            else
            stack2.pop();
            j++;
            }
        }
        s.clear(),t.clear();
        for(int k=stack1.size()-1;k>=0;k--){
            s+=stack1.top();
            stack1.pop();
        }
        for(int k=stack2.size()-1;k>=0;k--){
            t+=stack2.top();
            stack2.pop();
        }
        return s==t;
    }
int main(){
    string s="a#b#cd#e";
    string t="#ab##cd#e";
    cout<<backspaceCompare(s,t);
    return 0;
}