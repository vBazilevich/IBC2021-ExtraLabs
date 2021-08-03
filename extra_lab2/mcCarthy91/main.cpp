#include<iostream>

int m(int k){
    if (k>100){
        return k-10;
    }
    else{
        return m(m(k+11));
    }

}

int main(){
    int k;
    std::cin>>k;
    std::cout<<m(k) << std::endl;
}
