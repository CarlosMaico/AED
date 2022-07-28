#include<cassert>
#include<iostream>
//Especificacion
//Mcd: Z --> Z / Mcd(a,b)= { b  si residuo = 0
//                         { b/residuo si residuo != 0


//Si el residuo es 0, el mcd es el valor b, si residuo es distinto de 0 el mcd es b/residuo

//Prototipo
int Mcd(int, int);

int main(){
    std::cout<<Mcd(720,224)<<std::endl;
    std::cout<<Mcd(-5,5)<<std::endl;
    //std::cout<<Mcd(-42,-64)<<std::endl;
    assert(Mcd(720,224)==16);
    return 0;
}

//Sin caso base la fucnion seria infinita
//Caso base: si el residuo es igual a cero el MCD es b, para que no exista bucle
int Mcd(int a, int b){
    //return b ? Mcd(b, a%b) : a;

    return a == 0 ? b : Mcd(b%a , a);
}