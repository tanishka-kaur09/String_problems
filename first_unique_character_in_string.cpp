#include<iostream>
#include<string>
#include<vector>
using namespace std;
int firstUniqChar(string s) {
        int n=s.size();
        vector<int> num(26,0);
        for(int i=0;i<n;i++)
            num[s[i]-'a']++;
        for(int i=0;i<n;i++){
            if(num[s[i]-'a']==1)
            return i;
        }
        return -1;
    }
int main(){
    string s;
    cin>>s;
    cout<<"fisrt unique element is at index: "<<firstUniqChar(s);
}