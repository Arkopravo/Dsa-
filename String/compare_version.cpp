#include<bits/stdc++.h>
using namespace std;

// time complexity = o(max(v1, v2))
// space complexity = o(1)

int compareVersion(string v1, string v2)
{
    long long int scoreV1 = 0, scoreV2 = 0, currScore = 0;
    int i = 0, j = 0;

    while(i < v1.size() || j < v2.size())
    {
        currScore = 0;
        while(i < v1.size() && v1[i] != '.')
        {
            currScore = currScore * 10 + (v1[i] - '0');
            i++;
        }
        scoreV1 += currScore;

        cout<<"ScoreV1 -> "<<scoreV1<<endl;

        currScore = 0;
        while(j < v2.size() && v2[j] != '.')
        {
            currScore = currScore * 10 + (v2[j] - '0');
            j++;
        }
        scoreV2 += currScore;

        cout<<"ScoreV2 -> "<<scoreV2<<endl;

        if(scoreV1 < scoreV2)
        {
            return -1;
        } 
        else if(scoreV1 > scoreV2)
        {
            return 1;
        }
        i++;
        j++;
    }
    return 0;
}


int main()
{
    string v1 = "1.1.1.0.1";
    string v2 = "1.1.2.0";

    int ans = compareVersion(v1, v2);

    if(ans == 1) 
    {
        cout<<"V1 is greater"<<endl;
    }
    else if(ans == -1)
    {
        cout<<"V2 is greater"<<endl;
    }

    return 0;
}