#include <vector>
#include <iostream>

int main(void){
    int n;
    std::cin >> n;

    std::vector<int> array(n, 0);
    for(int i = 0; i < n; ++i){
        std::cin >> array[i];
    }

    int k;
    std::cin >> k;
    for(int i = 0; i < k; ++i){
        int tmp;
        std::cin >> tmp;
        array.push_back(tmp);
    }

    /* Print vector */
    for(int i : array){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
