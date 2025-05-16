#include<iostream>
#include<string>
#include<vector>
using namespace std;
int numJewelsInStones(string jewels, string stones) {
        vector<bool> a(256,0);
        int n=jewels.size(),m=stones.size(),ans=0;
        for(int i=0;i<n;i++)
            a[jewels[i]]=1;
        for(int i=0;i<m;i++)
            if(a[stones[i]]==1)
                ans++;
        return ans;
}
int main(){
    string jewels="abBc";
    string stones="aaBCcDDDdde";
    cout<<"number of jewels = "<<numJewelsInStones(jewels,stones);
    return 0;
}
