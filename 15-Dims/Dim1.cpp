#include<iomanip>
#include<iostream>
#include<fstream>
#include<string>
#include<array>

main(){

    /*
    Venta and Mes = N
    (venta x Mes)* --> P --> Venta^12
    */
    //unsigned total{0};
    //Del txt tomo como 0=Enero y 11=Diciembre
    struct std::array<unsigned,12> total{};

    #ifndef ONLINE_JUDGE
        freopen("Test1.txt","r", stdin);
    #endif

    //unsinged total[12]{};  Tiene mayor expeciones, y si yo recorro este arreglo hasta mas de su capacidad i termina bien, pero estaria mal
    for(unsigned venta,mes; std::cin>>venta>>mes; ){
        total.at(mes)+= venta;
    }
    for(auto TotalDelMes:total)//Foreach  , el auto permite al compilador asignarrle el tipo de dato
        std::cout<<TotalDelMes<<"\n";
    

}