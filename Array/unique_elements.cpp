#include<bits/stdc++.h>
using namespace std;

int unique(vector<int>&arr)
{
    int ans = 0;
    for(int i=0; i<arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int>arr = {1,1,2,3,4,3,4};

    int ans = unique(arr);

    cout<<"The unique element -> "<<ans<<endl;

    return 0;
}