#include<string>
#include<cassert>
#include<iostream> //aveses tambien incluye un printf, flujos de entrada y salida (No usar printf)
#include<cstdio>//trae todo el estilo segun el estandar de c


using namespace std::string_literals;

//El unico tipo de dato que tiene rango fijo es el char, los demas dependen de la maquina

int main(){
    assert(2 == 1+1);

    //Booleanos (operaciones: and ; or ; not ; != ; ==)
    assert(true);
    assert(not false);
    assert(false==false);
    assert(false != true);
    assert(not false);
    assert(false == not true);
    assert(not not true);
    assert(false or true);
    assert((false and false) == false);

    //Punto flotante   Double.  Otros tipos flotante:s Float; long double (aproximacion a Reales)
    assert(2.0 == 1.0+1.0);
    assert(1.0 == 0.1*10.0);
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); //Osea si queremos sumar 10 centavos no nos dan 1 peso: Osea el double no representa valores monetarios
    assert(0.23 > -1.0);
    assert(2.0 + 1 == 3.0);
    assert(3E2 == 3e2); //Esta en notcacion cientifica 3E10 es 3*(10alcuadrado)
    assert(3E2 == 3*10*10);
    assert(3E2 == 300);
    assert(3E6 == 3000000.0);
    assert(3E6 == 3'000'000.0);
    assert(3E6 == 3'0'00'0'00.0); //Los ' podemos usar para separar los numero para verlos mas comodo 
    assert(1.0);
    assert(not 0.0);
    assert(3.14159 > 3e-2); //3e-2 esta en notacion cientifica
    assert(3.5 * 3.5 == 12.25);
    assert(33.0 / 25.0 == 1.32);

    //Unsigned,  unsigned menor es 0 y el mayor es 4mil millones (depende de los bit que maneja la computadora)
    //Para que sean enteros no singados se usa el u despues del numero
    assert(3u == 3u);
    assert(1u != 2u);
    assert(50u < 1000u);
    assert(5u > 0u);
    assert(5u*5u <= 25u);
    assert(666u == 666u);
    assert(667l >= 666l);// l es el sufijo para rpresentar el long, que le da mas rango
    assert(2 == 2u);
    assert(5u % 5u == 0u);
    assert(30u / 15u == 2u);

    //Entero (int)
    assert(-1000 < 1000);
    assert(50-50 == 0);
    assert(5%5 == 0); 
    assert(100*100 != 1);
    assert(333 < 777);
    assert(15/30 != 4);
    assert(6 % 3 == 0);
    assert(8 / 4 != 0);

    //Char
    assert('A' == 'A');
    assert('A' + 'B' != 'x');
    assert(' ' == 32);
    assert(NULL == 0);  //En el ascii null es identico a 0
    assert('+'+'-' < 'Z');      
    assert('d' + 'q' == 213);
    assert('d' + 'q' == 0xd5);  //El simbolo 213 se fue del estandarizado, por eso usamos el representdo en hexadecimal
    assert('s' - 'A' == '2');
    assert('C' - 2 == 'A');
    assert('C' + 2 == 'E');
    assert('C' - 2 == 65);
    assert('C' - 2 == 65 and'C' - 2 == 'A');

    //string
    assert("hola"s != "hello"s);
    assert(12 == "Las palabras"s.length()); //Debo incluir using namespace string_literals para manejar string
    assert("abcd"s == "ab"s + "cd"s); //el "abcd"s  esa s es para identificar que es un string, aca se esta concatenando strings
    assert("Maico"s <= "Michael"s);

    //Agregado opcional. Conocer limites de cada tipo de dato y Memoria de cada tipo de dato

    assert(sizeof 'A' == 1);   //el sizeof(operador, me da el tamaño del tipo de dato) me dice el espacio en bytes que ocupa en memoria
    assert(sizeof 65 == 4);  
    assert(sizeof "Hola"s == 32);
    assert(sizeof "Hola" == 5);  //arreglo de caracteres me da el tamaño del arreglo Hola que son 4 mas el caracter centinela
                                //El unci tipo de dato que tiene tamaño identico siempre es el char
    //std::cout << sizeof "Hola como"s; muestra el tamaño de "hola como"
    assert(sizeof 10u == 4);
    assert(sizeof 100.0 == 8);
    
    //Los que usmos aca serian los datos primitivos. salvo el string, luego hay mas datos como el Date, Tipo de datos abtractos, etc.
    //Dentro de los assert tambien podemos llamar a una funcion para verificar el valor que va a devolver esa funcion.


}
