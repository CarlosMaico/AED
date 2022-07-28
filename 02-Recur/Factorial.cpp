#include <cassert>
#include <iostream>

//Especificacion
//Factorial: N --> N/Factorial(n)={ 1 si n = 0
//                                { n*Factorial(n-1) si n>0
//3! = 3*2!

//Prototipo
int Factorial(int);

int main(){
    std::cout<<Factorial(1);
    std::cout<<Factorial(0);

    assert(Factorial(1)==1);
    assert(Factorial(0)==1);
    assert(Factorial(10)==3628800);


    return 0;
}

int Factorial (int n){

    return n==0? 1:n*Factorial(n-1);
}