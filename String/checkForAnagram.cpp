#include<bits/stdc++.h>
using namespace std;

// brute
// time complexity = o(nlogn)
// space complexity = o(1)
bool checkAnagram(string &str1, string &str2) 
{
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 != str2) {
        return false;
    }

    return true;
}



// optimal
// time complexity = o(n)
// space complexity = o(1)

bool checkAnagram(string &str1, string &str2)  
{
    int freqTable[256] = {0};

    for(int i=0; i<str1.size(); i++)
    {
        freqTable[str1[i]]++;
    }

    for(int i=0; i<str2.size(); i++)
    {
        freqTable[str2[i]]--;
    }

    for(int i=0; i<256; i++) 
    {
        if(freqTable[i] != 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    string str1 = "cat";
    string str2 = "act";

    cout<<"The ans is "<<checkAnagram(str1, str2)<< endl;

    return 0;
}