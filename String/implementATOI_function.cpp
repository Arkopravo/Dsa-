#include<bits/stdc++.h>
using namespace std;


// time complexity = o(n)
// space complexity = o(1)


int ATOI(string s)
{
    int i = 0, n = s.size();
    int sign = 1, ans = 0;

    // skipping the leading spaces
    while(i < n && s[i] == ' ')
    {
        i++;
    }

    // checking the sign (+ / -)
    if(i < n && (s[i] == '-' || s[i] == '+')) {
        sign = (s[i] == '+') ? 1 : -1;
        i++;
    }

    while(i < n && s[i] >= '0' && s[i] <= '9') {
        // checking for overflow from int size
        if((ans > INT_MAX/10) || (ans == INT_MAX/10 && s[i]-'0' > INT_MAX%10)) {
            return (sign == -1) ? INT_MIN : INT_MAX; 
        }
        ans = ans * 10 + (s[i] - '0');
        i++;
    }
 
    return ans * sign;
}


int main()
{
    string s = "    -45xc12";
    int ans = ATOI(s);

    cout<<"Ans -> "<<ans<<endl;

    return 0;
}