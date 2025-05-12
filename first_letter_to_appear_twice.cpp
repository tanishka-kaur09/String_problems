#include<iostream>
#include<string>
#include<vector>
using namespace std;
char repeatedCharacter(string s) {
    int n=s.size(),i;
    vector<int> num(26,0);
    for(i=0;i<n;i++){
        num[s[i]-'a']++;
        if(num[s[i]-'a']==2)
        break;
    }
    return s[i];
}
int main(){
    string s;
    cin>>s;
    cout<<repeatedCharacter(s);
    return 0;
}