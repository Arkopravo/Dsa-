#include <bits/stdc++.h>
using namespace std;

// time complexity is o(n^3)
// space complexity is o(n)

bool isPalindrome(string &s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++, j--;
        }
    }
    return true;
}
string longestPalindrome(string s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            if (isPalindrome(s, i, j))
            {
                string t = s.substr(i, j - i + 1);
                ans = t.size() > ans.size() ? t : ans;
            }
        }
    }
    return ans;
}

int main() 
{
    string s = "abcbae";
    string ans = longestPalindrome(s);

    cout<<"Longest Palindromic Substring -> "<<ans<<endl;

    return 0;
}