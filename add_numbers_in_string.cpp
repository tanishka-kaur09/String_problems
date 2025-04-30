#include<iostream>
#include<string>
using namespace std;
string addStrings(string num1, string num2) {
    int x=num1.size()-1,y=num2.size()-1;
    int carry=0;
    string ans;
    while(x>=0||y>=0||carry)
    {
        int m=(x>=0)?(num1[x]-'0'):0;
        int n=(y>=0)?(num2[y]-'0'):0;
        
        int sum=m+n+carry;
        carry=sum/10;
        sum%=10;

        ans+=(sum+'0');

        x--,y--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<addStrings(a,b);
}