#include<iomanip>
#include<iostream>
#include<fstream>
#include<string>
#include<array>

main(){
    //unsigned total{0};
    //Del txt tomo como 0=Enero y 11=Diciembre
    struct std::array<std::array<std::array<unsigned,4>,3>,12> total{{0,0,0}}; //Lo vemos como 12 meses de 3 vendedores y 4 zonas meses

    #ifndef ONLINE_JUDGE
        freopen("Test3.txt","r", stdin);
        freopen("res.txt","w", stdout);
    #endif


    for(unsigned venta,mes,vendedor,region ; std::cin>>venta>>mes>>vendedor>>region ; ){
        total.at(mes).at(vendedor).at(region)+= venta;
    }

    for(auto totalMes : total){
        for(auto vendedor : totalMes){
            for(auto region : vendedor){
                std::cout << region << "\t";
                //std::cout << "\n";;
            }
            std::cout << "\n";
        }
        std::cout<<"------------------------\n";
    }
            
        
    

}