#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="aabbcbbaa";
    int start=0;
    int end=s.size()-1;

    while(start<=end){
        if(s[start]!=s[end])
        {
            cout<<"not palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"palindrome";
}