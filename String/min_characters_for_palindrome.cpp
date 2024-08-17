#include<bits/stdc++.h>
using namespace std;

// Brute
// time complexity = o(n^2)
// space complexity = o(n)

bool isPalindrome(string str)
{
    int i = 0, j = str.length() - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}


// int minCharForPalindrome(string str)
// {
//     int count = 0;
//     while(str.length() > 0)
//     {
//         if(isPalindrome(str))
//         {
//             break;
//         }
//         else
//         {
//             count++;
//             str.erase(str.begin() + str.length()-1);
//         }
//     }
//     return count;
// }




// optimal approach
// time complexity = o(n)
// space complexity = o(1)

int minCharForPalindrome(string str)
{
    int i = 0, j = str.length() - 1;
    int count = 0, k = j;
    while(i < j)
    {
        if(str[i] == str[j])
        {
            i++, j--;
        }
        else
        {
            i = 0;
            k--;
            j = k;
            cout<<"str[j] -> "<<str[j]<<endl;
            count++;
        }
    }
    return count;
}

int main ()
{
    string str = "abcd";
    int ans = minCharForPalindrome(str);

    cout<<"The ans -> "<<ans<<endl;

    return 0;
}