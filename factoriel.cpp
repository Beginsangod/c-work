#include <iostream>
using namespace std;

int main(){
    unsigned int n,f;
    std::cout<<"entrer un nombre";
    std::cin>>n;
    f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    std::cout<<"le factoriel de se nombre est de: "<<f;
    return 0;
}