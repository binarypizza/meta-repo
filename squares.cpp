#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    for (unsigned int i = 0; i < 1337; i++) {
        v.push_back(v);
    }
    for (auto i : v) {
        cout << i * i << endl;
    }
}
