#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="hello";
    cout<<s<<endl;
    int start=0;
    // int end=s.size()-1;
    ind end=0;
    while(s[end]!="\0")
    end++;
    end--;

    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    cout<<s;
    return 0;
}
