#include<bits/stdc++.h>
using namespace std;


// time complexity = o(n)
// space complexity = o(1)


int romanToInt(string s)
{
    int ans = 0;
    unordered_map<char, int>mp{{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

    for(int i=0; i<s.size(); i++) {
        if(mp[s[i]] >= mp[s[i+1]])
        {
            ans += mp[s[i]];
        }
        else
        {
            ans -= mp[s[i]];
        }
    }
    return ans;
}

int main() {
    string s = "XXXV";
    int ans = romanToInt(s);

    cout<<"The ans -> "<<ans<<endl;

    return 0;
}