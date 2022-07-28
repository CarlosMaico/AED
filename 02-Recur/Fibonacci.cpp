#include <cassert>
#include <iostream>

//Especificacion
//Fibonacci: Z-->Z/Fibonacci(n)={ 1 si n = 1 o n = 2
//                              { Fibonacci(n-1) + Fibonacci(n-2)  e.o.c


//Prototipo
int Fibonacci(int);


int main(){

    std::cout<<Fibonacci(0);
    assert(Fibonacci(1)==1);
    assert(Fibonacci(2)==1);
    assert(Fibonacci(3)==2);
    assert(Fibonacci(6)==8);
    return 0;
}


int Fibonacci(int n){
    return n==1 || n==2? 1:Fibonacci(n-1)+Fibonacci(n-2);
}

