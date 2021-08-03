#include <iostream>

int main(void){
    float b0, q;

    std::cin >> b0 >> q;

    unsigned int n;
    std::cin >> n;

    for(int i = 0; i < n; ++i){
        b0 *= q;
    }
    std::cout << b0 << std::endl;
}
