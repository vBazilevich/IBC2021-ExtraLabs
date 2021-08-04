#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> array = {28, 19, 42, 53, 69};
    double m;
    for (int i : array) {
        m += i;

    }
    m /= array.size();
    double u=0;
    for (int i : array) {
        u += pow(i - m, 2);
    }
    u = sqrt(u / array.size());
    cout << m << " " << u;
}
