#include<iostream>
#include<string>
using namespace std;
//brute force (optimized version in sliding window problem)
int sub(string s){
    int n=s.size();
    int ans=1;
    for(int i=0;i<n;i++){
        string res; 
        res+=s[i];
        for(int j=i+1;j<n;j++){
            int c=0;
            for(int k=0;k<res.size();k++){
                if(s[j]==res[k]){
                c=1;
                break;
                }
            }
            if(c==0)
            res+=s[j];
            else
            break;
        }
        if(res.size()>ans)
        ans=res.size();
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<sub(s);
}
