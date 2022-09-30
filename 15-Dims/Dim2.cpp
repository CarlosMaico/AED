#include<iomanip>
#include<iostream>
#include<fstream>
#include<string>
#include<array>

main(){
    //unsigned total{0};
    //Del txt tomo como 0=Enero y 11=Diciembre    Usar el matrix solo es una cuestion de entendimiento visual
    struct std::array < std::array<unsigned,3>,12>total{{0,0}}; //Areglo de 12 filas , de 3 columnas unsigneds,  Lectura de afuera a adentro

    #ifndef ONLINE_JUDGE
        freopen("Test2.txt","r", stdin);
    #endif


    for(unsigned venta,mes,vendedor; std::cin>>venta>>mes>>vendedor; ){
        total.at(mes).at(vendedor)+= venta; //Total es una matriz, .at(mes) es fila y el.at(vendedor) es columna
    }
    
    for(auto vendedor:total){
        for(auto totalDelMes : vendedor)
            std::cout << totalDelMes << "\t";
        std::cout<<"\n";
    }
    

}