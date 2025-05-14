#include<iostream>
#include<string>
#include<vector>
using namespace std;
string reverseWords(string s) {
    vector<string> a;
    string res;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            if(!res.empty()){
                a.push_back(res);
                res.clear();
            }
            while(s[i]==' ')
            i++;
        }
        res+=s[i];
    }
    if(s[s.size()-1]!=' ')
    a.push_back(res);
    string r;
    for(int i=a.size()-1;i>=0;i--){
        r+=a[i];
        r+=' ';
    }
    r.pop_back();
    return r;
}
int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
    return 0;
}
