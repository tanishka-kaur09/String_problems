#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];
    for (int i = 1; i < strs.size(); ++i) {
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            ++j;
        }
        prefix = prefix.substr(0, j);
        if (prefix.empty()) break;
    }
    return prefix;
}

string longestCommonPrefix2(vector<string>& a) {
    int n=a.size(),x=0,size=INT_MAX,k=0;
    if(n==1)
    return a[k];
    string res;
    for(int i=0;i<n;i++){
        string s=a[i];
        if(size>s.size())
        size=s.size();
    }
    while(k<size){
    for(int i=0;i<n-1;i++){
        char ab = a[i][x];
        char ba = a[i + 1][x];
        if(ab!=ba)
        return res;
        if(i==n-2){
        res+=ab;
        x++;
        }
    }
    k++;}
    return res;
}
int main(){
    vector<string> a={"flower","flow","flight"};
    cout<<longestCommonPrefix(a);
    cout<<longestCommonPrefix2(a);
}