#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool checkIfPangram(string s) {
    int start=0,end=s.size()-1;
    vector<bool> x(26,0);
    while(start<=end)
    {
        x[s[start]-'a']=1;
        start++;
    }
    for(int i=0;i<26;i++)
        if(x[i]==0)
        return false;
    return true;
}
int main(){
    string s="thequickbrownfoxjumpsoverthelazydog";
    if(checkIfPangram(s))
    cout<<true;
    else
    cout<<false;
    return 0;   
}