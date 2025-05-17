#include<iostream>
#include<string>
#include<vector>
using namespace std;
string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        vector<string> res(n);
        for(int i=0;i<n;i++)
            res[indices[i]]=s[i];
        s.clear();
        for(int i=0;i<n;i++)
            s+=res[i];
        return s;
    }
int main(){
    string s="codeleet";
    vector<int> indices={4,5,6,7,0,2,1,3};
    cout<<restoreString(s,indices);
    return 0;
}