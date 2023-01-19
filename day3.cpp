// Problem Statement
// Edward participated in one maths competition. He was asked to find the number of ways to choose a pair of an even number and an odd number from the positive integers between 1 and N (inclusive). The order does not matter.
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    int even = (N + 1) / 2; // number of even numbers between 1 and N
    int odd = N / 2; // number of odd numbers between 1 and N

    cout << even * odd << endl;
    return 0;
}