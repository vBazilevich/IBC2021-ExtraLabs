#include <iostream>
#include <array>
#include <vector>
#include <numeric>

/* How to pass vector so that we can change it outside */
int f(std::vector<int>& arr){
    return 1;
}

/* Same for static array */
int f(std::array<int, 3>& arr){

}

/* And for old C-style arrays */
int f1(int** arr, int size){
    (*arr)[3] = 2;    
}

int main(void){
    /* Declaring and initializing old C-style array */
    int a[4] = {2, 3, 7, 1};

    /* Defining and iterating over static array */
    std::array<int, 5> ar = {-1, 12, 8};
    for(int i = 0; i < ar.size(); ++i){
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;

    /* Computing sum of array or vector without using for loop explicitly 
     * 0 is initial value of accumulator variable*/
    std::accumulate(ar.begin(), ar.end(), 0);

    /* Vector pre-allocation */
    std::vector<int> arr(5);
    /* Range-based for loop (since C++11) */
    for(int i : arr){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    f(arr);

    return 0;
}
