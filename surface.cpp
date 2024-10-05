#include <iostream>
using namespace std;
const float pi = 3.14;

int main(){
    unsigned int c;
    float D,D1,a,p;
    std::cout<<"de quel figure voulez vous les dimensions\n 1:cercle\n 2:rectangle\n 3:triangle\n";
    std::cin>>c;
    if (c == 1){
        std::cout<<"entrer le rayon\n";
        std::cin>>D;
        a = D * D * pi;
        p = D + D * pi;
        std::cout<<"Ce cercle à pour périmètre "<<p<<" et pour aire "<<a;
    }else if (c == 2){
        std::cout<<"entrer la longueur puis la largeur\n";
        std::cin>>D;
        std::cin>>D1;
        a = D * D1;
        p = (D + D1) * 2;
        std::cout<<"Ce rectangle à pour périmètre "<<p<<" et pour aire "<<a;
    }else if (c == 3){
        std::cout<<"entrer la base ";
        std::cin>>D;
        std::cout<<"entrer la hauteur ";
        std::cin>>D1;
        a = (D * D1)/2;
        p = 0;
        std::cout<<"entrer les valeurs des deux autres côtés que la base\n";
        for (int i = 0; i < 2; i++){
            p = p + D;
            std::cin>>D;
        }
        std::cout<<"Ce triangle à pour périmètre "<<p<<" et pour aire "<<a;
    }else{
        std::cout<<"entrer un choix valide de grâce";
    }
    return 0;
}