#include<iostream>
#include<string>

//Todo lo que etra por cin mandarlo por cout 


int main(){
    
    for (std::string dato;;){
        std::cin >> dato;
        std::cout << dato;
    }
    std::cout << "fin";

}
//CIn y cou es del tipo de dato flujo, de stream y los flujos tienen estados, se ponen en falsos en negativos
//buscar como preguntarle su estado a un flujo

//Aca si lo capturamos a un archivo hayq ue contemplar el espacio que tenemos
//el espacio marca el fin de un string
//los espacio, tabs y enters delimitan el fin de los datos
//Caso excpecional que el chorro de datos se corte o el espacio de mememoria se llen

//tratar que los chorro de entrada y salida terminen
//Leer seccion 15 de los trabajos
