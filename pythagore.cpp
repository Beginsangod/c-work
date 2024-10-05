#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    int d;
    float a,b,c;
    std::cout<<"soit le triangle abc rectangle ayant pour hypothénus c\n quel est le côté manquant ? 1:pour a\n 2:pour b\n 3:pour c\n";
    std::cin>>d;
    if (d == 3){
        std::cout<<"entrer les deux côtés connus";
        std::cin>>a;
        std::cin>>b;
        c = (pow(a, 2)+pow(b,2));
        c = sqrt(c);
        std::cout<<"la longueur de ce coté est de "<<c;
    }else{
        std::cout<<"entrer l'hypothénus";
        std::cin>>c;
        std::cout<<"entrer le deuxieme côtés connus";
        std::cin>>a;
        b = (pow(c,2)-pow(a,2));
        b = sqrt(b);
        std::cout<<"la longueur de ce coté est de "<<b;
    }
    return 0;
}