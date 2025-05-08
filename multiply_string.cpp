#include<iostream>
#include<string>
#include<vector>
using namespace std;

// optimized approach
string multiply(string a, string b) {
    int n=a.size(),m=b.size();
    vector<int> r(n+m,0);
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            int mul=(a[i]-'0')*(b[j]-'0');
            int sum=r[i+j+1]+mul;
            r[i+j+1]=sum%10;
            r[i+j]+=sum/10;
        }
    }
    string res;
    for(int num:r){
        if(!(res.empty()&&num==0))
        res+=num+'0';
    }
    return res.empty()?"0":res;

}

// basic approach
/*
string multiply(string a, string b) {
    int n=a.size(),m=b.size();
    long long x=1,num1=0,num2=0;
    string res;
    for(int i=n-1;i>=0;i--){
        num1+=1LL*(a[i]-'0')*x;
        x*=10;
    }
    x=1;
    for(int i=m-1;i>=0;i--){
        num2+=1LL*(b[i]-'0')*x;
        x*=10;
    }
    long long ans=num1*num2;
    if(ans==0){
        string r="0";
        return r;
    }
    while(ans){
        res.push_back((ans%10)+'0');
        ans/=10;
    }
    reverse(res.begin(),res.end());
    return res;
}
*/
int main(){
    string a="1234";
    string b="123";
    cout<<multiply(a,b);
    return 0;
}