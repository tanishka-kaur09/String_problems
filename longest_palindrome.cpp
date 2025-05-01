#include<iostream>
#include<string>
#include<vector>
using namespace std;

int longestPalindrome(string s) {
    vector<int> lower(26,0);
    vector<int> upper(26,0);
    int count=0,x=0;
    int start=0,end=s.size()-1;
    for(int i=0;i<=end;i++)
    {
        if(s[i]>='a')
        lower[s[i]-'a']++;
        else if(s[i]>='A')
        upper[s[i]-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(lower[i]%2==0)
        count+=lower[i];
        else{
        count+=lower[i]-1;
        x=1;
        }
        if(upper[i]%2==0)
        count+=upper[i];
        else{
        count+=upper[i]-1;
        x=1;
        }
    }
    
    return count+x;
}

int main(){
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
}