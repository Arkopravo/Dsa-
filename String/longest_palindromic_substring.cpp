#include <bits/stdc++.h>
using namespace std;

// normal approach

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




// optimal approach (expand around index approach)

// time complexity is o(n^2)
// space complexity is o(1)

string longestPalindrome(string s) 
{
    int n = s.length();
    int l, r, start = 0, end = 1;

    for(int i=0; i<n; i++) 
    {
        // even string
        l = i - 1;
        r = i;
        while(l >= 0 && r < n && s[l] == s[r])
        {
            if(r - l + 1 > end) 
            {
                start = l;
                end = r - l + 1;
            }
            l--, r++;
        }

        // odd string
        l = i - 1;
        r = i + 1;
        while(l >= 0 && r < n && s[l] == s[r])
        {
            if(r - l + 1 > end) 
            {
                start = l;
                end = r - l + 1;
            }
            l--, r++;
        }
    }
    return s.substr(start, end);
}



int main() 
{
    string s = "abcbae";
    string ans = longestPalindrome(s);

    cout<<"Longest Palindromic Substring -> "<<ans<<endl;

    return 0;
}