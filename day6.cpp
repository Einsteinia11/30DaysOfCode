// Problem Statement
// Abhas likes to play with numbers. He is given integers N and K. Find the number of triples (a, b, c) of positive integers not greater than N such that a+b, b+c, and c+a are all multiples of K. The order of a, b, and c does matter, and some of them can be the same.
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
long long int count(long long int n, long long int k){
    if(k%2 == 0){
        long long int x = n/k;
        long long int y = (n+(k/2))/k;
        return x*x*x+y*y*y;
    }
    else{
        long long int x = n/k;
        return x*x*x;
    }
}
int main() {
	long long int n, k;
    cin>>n;
    cin>>k;
    cout<<count(n, k)<<endl;
    return 0;
}