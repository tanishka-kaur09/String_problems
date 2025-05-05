#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> addToArrayForm(vector<int>& a, int k) {
    int n=a.size()-1;
    vector<int> b;
    int i=0;
    while(k){
        int l=k%10;
        b.push_back(l);
        k/=10;
        i++;
    }
    reverse(b.begin(),b.end());
    int m=b.size()-1;
    int carry=0,res;
    vector<int> r;
    while(n>=0||m>=0||carry){
        int x= (n>=0)? a[n--]:0; 
        int y= (m>=0)? b[m--]:0;
        res=x+y+carry;
        carry=res/10;
        res%=10;
        r.push_back(res);
    }
    reverse(r.begin(),r.end());
    return r;
}
int main(){
    vector<int> a={1,2,3,4};
    int k=19;
    vector<int> r;
    r=addToArrayForm(a,k);
    for(int i=0;i<r.size();i++)
    cout<<r[i]<<" ";
}