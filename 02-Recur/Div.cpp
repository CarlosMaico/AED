#include <cassert>
#include<iostream>
//Especificacion
//Div: N --> N/ Div(a,b) = { 1 si b = 0, por que no se puede dividir por cero
//                         { a/b e.o.c
// a = Dividendo,  b = Divisor
//Prototipo
unsigned Div(unsigned, unsigned);


int main(){
    std::cout<<Div(0u,0u);
    assert(17u/3u == 5u);
    assert(0u/5u == 0);
    assert(6u/0u != 0);

    return 0;
}


unsigned Div(unsigned a, unsigned b){
    return b==0 ? 1 : a/b;
}

