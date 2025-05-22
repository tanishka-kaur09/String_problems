#include<iostream>
#include<string>
using namespace std;
string defangIPaddr(string address) {
    int start=0,end=address.size()-1;
    string ans;
    while(start<=end){
        if(address[start]=='.')
        ans+="[.]";
        else
        ans+=address[start];
        start++;
    }
    return ans;
}
int main(){
    string address="11.1.1";
    cout<<defangIPaddr(address);
    return 0;
}
