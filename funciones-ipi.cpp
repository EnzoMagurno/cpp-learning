#include <iostream>
#include <string>
using namespace std;
// Funciones

// Suma de dos números:
// Escribe una función llamada suma que tome dos enteros como parámetros y devuelva su suma. Luego, en la función main, llama a esta función con dos números y muestra el resultado.
int suma(int a, int b){
    return a+b;
}

// Número mayor:
// Escribe una función llamada mayor que tome dos enteros como parámetros y devuelva el mayor de los dos. Usa esta función en la función main para encontrar el mayor de dos números ingresados por el usuario.
int mayor(int a, int b){
    return (a>b) ? a : b;
}

// Calcular el área de un círculo:
// Escribe una función llamada areaCirculo que tome el radio de un círculo como parámetro y devuelva el área del círculo. Luego, en la función main, pide al usuario que ingrese el radio y muestra el área calculada.
int areaCirculo(double a){
    const double PI = 3.14159;
    return PI * (a*a);
}


// Reverso de una cadena:
// Escribe una función llamada reversoCadena que tome una cadena como parámetro y devuelva la cadena invertida. Usa esta función en la función main para invertir una cadena ingresada por el usuario.
string reversoCadena(string cadena){
    string cadenaInvertida;
    for(int i=cadena.length()-1;i >= 0 ;i--){
        cadenaInvertida+=cadena[i];
    }
    return cadenaInvertida;
}


// Factorial de un número:
// Escribe una función llamada factorial que tome un entero como parámetro y devuelva el factorial de ese número. Luego, en la función main, pide al usuario que ingrese un número y muestra su factorial.
int factorial(int numero){
    if (numero<0){
        return -1;
    }
    int resultado = 1;
    for (int i = 1; i <= numero; ++i){
        resultado *= i;
    }
    return resultado;
}



int main(){
    // cout<<mayor(5,3);
    // cout<<"La suma es de: "<< suma(10,15);
    // cout<<"El radio del circulo es de: "<< areaCirculo(8);
    // cout<<"Su cadena invertida es: "<< reversoCadena("palabra");
    // cout<<"El factorial es: "<<factorial(9);
    return 0;
}