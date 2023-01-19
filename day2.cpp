#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool solve(vector<vector<int>> &adj, int n){
    for(auto ele : adj){
        if(ele.size() == n-1)
            return true;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    int u,v;
    for(int i=1; i<n; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ans = solve(adj,n);
    if(ans)
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}
