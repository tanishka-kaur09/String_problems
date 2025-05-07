#include<iostream>
#include<string>
using namespace std;
int strStr(string a, string b) {
    int n=a.size(),m=b.size();
    int i=0,j=0,x=0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            if(j==0)
            x=i;
        i++,j++;
        }
        else{
            if(j!=0){
                i=x+1;
                j=0;
            }
            else
            i++;
        } 
    }
    if(j==m)
    return i-m;
    return -1;
}
int main(){
    string a="mississippi";
    string b="sip";
    cout<<strStr(a,b);
    return 0;
}