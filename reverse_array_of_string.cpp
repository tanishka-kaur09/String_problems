#include<iostream>
#include<string>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
    int start=0,end=s.size()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++,end--;
    }
    return;
}
int main(){
    vector<char> s={"h","e","l","l","o"};
    reverseString(s);
    for(int num:s)
    cout<<num<<" ";
    return 0;
}