#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	string s, t;
    cin>>s>>t;
    for(int i = 0; i<s.size() - 1; i++){
        if(s == t){
            cout<<"Yes";
            return 0;
        }
        swap(s[i], s[i+1]);
        if(s == t){
            cout<<"Yes";
            return 0;
        }
        swap(s[i], s[i+1]);
    }
    cout<<"No";
    return 0;
}