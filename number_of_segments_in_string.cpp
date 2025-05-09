#include<iostream>
#include<string>
using namespace std;
int countSegments(string s) {
    int n=s.size();
    bool insegment=false;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            if(!insegment){
            insegment=true;
            ans++;
            }
        }
        else
        insegment=false;
    }
    return ans;
}
int main(){
    // string s="Hello, my name is John";
    string s;
    getline(cin,s);
    cout<<countSegments(s);
    return 0;
}