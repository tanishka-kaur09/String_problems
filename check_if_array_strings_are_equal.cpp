#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size(),m=word2.size();
        string s1,s2;
        for(int i=0;i<n;i++)
            s1+=word1[i];
        for(int i=0;i<m;i++)
            s2+=word2[i];
        return s1==s2;
}
int main(){
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    if (arrayStringsAreEqual(word1, word2))
        cout << "The arrays form the same string." << endl;
    else
        cout << "The arrays do not form the same string." << endl;

    return 0;

}
