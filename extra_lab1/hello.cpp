#include <iostream>
#include <cmath>`

using namespace std;

int main(void){
    cout << "Hello, I'm tired" << std::endl;
    /* <type> <name>; 
     * <type> <name> = <init value> */

    int age;
    std::cin >> age;

    if(age < 0 || age > 150) {
        std::cout << "Invalid age" << std::endl;
    } else {
        if(age < 21) {
            std::cout << "You are not allowed to drink alcohol" << std::endl;
        } else {
            std::cout << "Your age is " << age << std::endl;
        }
    }

    int n = 0;
    do {
        std::cin >> n;
    } while(n <= 0 || n > 10);

    int i = 0;
    std::cout << ++i << " " << i++ << std::endl;
}
