#include<bits/stdc++.h>
using namespace std;

string reverse(string s) {
    int size = s.length();

    int i = 0, j = size-1;

    while(i < j) {
        swap(s[i], s[j]);
        i++, j--;
    }   
    return s;
}

int main() {
    string s = "abcd";
    string ans = reverse(s);

    cout<<"Reversed word -> "<<ans<<endl;

    return 0;
}