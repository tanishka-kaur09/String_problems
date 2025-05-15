#include<iostream>
#include<string>
using namespace std;
int num(char s)
    {
    if(s=='I')
        return 1;
    else if(s=='V')
        return 5;
    else if(s=='X')
        return 10;
    else if(s=='L')
        return 50;
    else if(s=='C')
        return 100;
    else if(s=='D')
        return 500;
    else if(s=='M')
        return 1000;
    return 0;
    }
int romanToInt(string s) {
        int i=0,sum=0;
        while(i<s.size()-1)
        {
            if(num(s[i])<num(s[i+1]))
            sum-=num(s[i]);
            else
            sum+=num(s[i]);
            i++;
        }
        sum+=num(s[s.size()-1]);
        return sum;
    }
int main(){
    string s="MCMXCIV";
    cout<<romanToInt(s);
}