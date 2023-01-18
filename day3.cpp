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