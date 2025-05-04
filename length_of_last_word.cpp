#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s) {
    int n=s.size()-1,sum=0;
    while(s[n]==' ')
    n--;
    while(n>=0){
        if(s[n]==' ')
        break;
        sum++;
        n--;
    }
    return sum;
}
int main(){
    string s="   a   by  walk   ";
    cout<<lengthOfLastWord(s);
}