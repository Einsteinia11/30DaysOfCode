// Problem Statement
// Newton went to a mall. There are N items in a shop. For each i=1, 2, …, N, the price of the i- th item is Ai Rs. Newton has K coupons. Each coupon can be used on one item. You can use any number of coupons, possibly zero, on the same item. Using k coupons on an item with a price of a Rs allows him to buy it for max{a−kX, 0} Rs.
// Print the minimum amount of money Newton needs to buy all the items.
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long 
int main() {
    ll n,k,x;
    cin >> n >> k >> x;
    priority_queue<ll>pq;
    for(ll i=0; i<n; i++){
        ll a;
        cin >> a;
        pq.push(a);
    }
    ll ans=0;
    while(1){
        ll cur=pq.top();
        if(k <=0)
        break;

        if(cur){
            pq.pop();
            int times = cur/x;
            if(times){
                if(times > k)
                    times=k;
                cur-= x*times;
                k-=times;
            }else{
                if(k >0){
                    cur=0;
                    --k;}
                else break;
            }
            pq.push(cur);
        }else
        break;

    }
    while(pq.size()){
        ans += pq.top();
        pq.pop();
    }
    cout << ans;
    return 0;
}
