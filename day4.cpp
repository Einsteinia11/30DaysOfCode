#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> even_numbers;
    for (int i = n + 1; i < m; i++) {
        if (i % 2 == 0) {
            even_numbers.push_back(i);
        }
    }
    unsigned seed = time(0);
    shuffle(even_numbers.begin(), even_numbers.end(), default_random_engine(seed));
    for (int i = 0; i < 5; i++) {
        cout << even_numbers[i] << " ";
    }

    return 0;
}