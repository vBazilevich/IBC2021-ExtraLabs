#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0){
        cout << "Дурашка";
    } else {
        float  x1, x2;
        int d= pow(b, 2)-4*a*c;
        if (d<0){
            cout << "Resheniy net";
        } else if (d==0) {
            x1 = -b/(2*a);
        } else {
            x1 = (-b - sqrt(d))/(2*a);
            x2 = (-b + sqrt(d))/(2*a);
            std::cout << x1 << " " << x2 << std::endl;
        }

    }
}
