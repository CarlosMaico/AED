#include<iomanip>
#include<iostream>
#include<fstream>
#include<string>


main(){
    /*
    Venta = N
    Venta* --> P --> Venta

    */
    unsigned total{};//Cuando se pone solo llaves pone por defecto 0

    #ifndef ONLINE_JUDGE
        freopen("Test0.txt","r", stdin);
    #endif


    for(unsigned x; std::cin>>x; ){
        total+=x;
    }
    std::cout << total;

}