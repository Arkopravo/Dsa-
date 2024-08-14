#include<bits/stdc++.h>
using namespace std;

// Time complexity = o(n^m)
// Space complexity = o(m)

string longestCommonPrefix(vector<string>&strs)
{
    string ans = "";
    int i = 0;
    while(true) {
        char curr = 0;
        for(auto str : strs) {
            if(i >= strs.size()) {
                curr = 0;
                break;
            }

            if(curr == 0) {
                curr += str[i];
            }

            if(curr != str[i]) {
                curr = 0;
                break;
            }
        }

        if(curr == 0) {
            break;
        }
        ans.push_back(curr);
        i++;
    }
    return ans;
}





// Time complexity = O(nm log n)
// Space complexity = o(m)

string longestCommonPrefix(vector<string>&strs)
{
    string ans = "";
    sort(strs.begin(), strs.end());
    string a = strs[0];
    string b = strs[strs.size()-1];

    for(int i=0; i<a.size(); i++) {
        if(a[i] == b[i]) {
            ans += a[i];
        } else {
            break;
        }
    }

    if(ans == " ") {
        return "-1";
    } else {
        return ans;
    }
}


int main ()
{
    vector<string>strs{"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);

    cout<<"Ans -> "<<ans<<endl;

    return 0;
}