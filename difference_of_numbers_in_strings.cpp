#include<iostream>
#include<string>
using namespace std;
char findTheDifference(string s, string t) {
    int m=s.size(),n=t.size();
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    sum1+=t[i];
    for(int i=0;i<m;i++)
    sum2+=s[i];
    return sum1-sum2;
}
int main(){
    string s,t;
    cin>>s,t;
    cout<<findTheDifference(s,t);
}
