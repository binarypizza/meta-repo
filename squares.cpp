#include <iostream>
#include <algorithm>

int main() {
    std::vector<int> v;
    for (unsigned int i = 0; i < 1337; i++) {
        v.push_back(v);
    }
    for (auto i : v) {
        std::cout << i * i << std::endl;
    }
}
