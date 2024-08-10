#include<bits/stdc++.h>
using namespace std;

string reverse(string s) {
    if(s.length() == 0) {
        return "";
    }

    string ans;
    stack<string> st;
    int size = s.length();

    for(int i=0; i<size; i++) {
        string word = " ";

        if(s[i] == ' ') {
            continue;
        }

        while(i<size && s[i] != ' ') {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();

        if(!st.empty()) {
            ans += " ";
        }
    }

    return ans;
}

int main() {
    string s = "the sky is blue";
    string ans = reverse(s);

    cout<<"The reverse words in string are -> "<<ans<<endl;

    return 0;
}