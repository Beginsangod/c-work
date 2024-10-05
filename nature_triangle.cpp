#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    std::cout<<"donner moi les côtés de votre triangle";
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    if ((a*a) == ((b*b)+(c*c))||(b*b) == ((a*a)+(c*c))||(c*c) == ((b*b)+(a*a))){
        std::cout<<"Ce triangle est rectangle";
    }else if (a == b || c == b){
        std::cout<<"Ce triangle est isocèle";
    }else if (a == b == c){
        std::cout<<"Ce triangle est équilatéral";
    }else{
        std::cout<<"Ce triangle est quelconque";
    }
    return 0;    
}