#include<cassert>
#include<iostream>
#include<iomanip>

int main(){
    assert(2 == 1+1);

    //Bool
    assert(true);

    assert(false==false);

    assert(false != true);

    assert(not false);

    assert(false == not true);

    assert(not not true);

    assert(false or true);

    assert((false and false) == false);

    //Double
    assert(2.0 == 1.0+1.0);

    assert(1.0 == 0.1*10.0);

    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); //Osea si queremos sumar 10 centavos no nos dan 1 peso: Osea el double no representa valores monetarios

    //std::cout << std::setprecision(17) << 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 << "\n";

    //El double no sirve para valores monetarios ni fisicos.

    //No usar ints para DNIs

    //Por eso e importnante relizar el tipo de dato a usar.

    //unsigned
    assert(3 == 3);

    assert(1 != 2);

    assert(50 < 1000);

    assert(5 > 0);
    
    assert(5*5 <= 25);

    //int
    assert(-1000 < 1000);

    assert(50-50 == 0);

    assert(5%5 == 0); 

    assert(100*100 != 1);

    assert(333 < 777);

    assert(15/30 != 4);

    //char
    assert('A' == 'A');

    assert('A' + 'B' != 'x');

    assert(' ' == 32);

    assert(NULL == 0);

    assert('+'+'-' < 'Z');

    //string
    assert("hola" != "hello");

}