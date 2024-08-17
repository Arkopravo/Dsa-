#include<bits/stdc++.h>
using namespace std;

// brute
// time complexity = o(n^2)
// space complexity = o(n)

string countAndSay(int n)
{
    if(n == 1)
    {
        return "1";
    }

    if(n == 2)
    {
        return "11";
    }

    string str = "11";
    for(int i=3; i<=n; i++)
    {
        string temp = "";
        int count = 1;
        str = str+'&';

        for(int j=1; j<str.length(); j++)
        {
            if(str[j] != str[j-1])
            {
                temp += to_string(count);
                temp += str[j-1];
                count = 1;
            }
            else
            {
                count++;
            }
        } 
        str = temp;  
    }
    return str;
}




// using recursion
// time complexity = o(n^2)
// space complexity = o(n)

string countAndSay2(int n)
{
    if(n == 1)
    {
        return "1";
    }

    string say = countAndSay2(n-1);
    string result;
    for(int i=0; i<say.length(); i++) 
    {
        char ch = say[i];
        int count = 1;
        while(i < say.length()-1 && say[i] == say[i+1])
        {
            count++;
            i++;
        }
        result += to_string(count)+string(1, ch);
    }
    return result;
}


int main()
{
    int n = 4;

    cout<<"The ans -> "<<countAndSay2(n);

    return 0;
}