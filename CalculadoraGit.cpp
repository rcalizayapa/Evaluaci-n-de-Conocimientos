//River Calizaya Pariguana
//Calculadora
#include<iostream>
using namespace std;
int main(){
    double a, b, r;
    char op;//inicio del programa
    cout<<"ingrese un numero: ";cin>>a;//solicitudes para digitar los valores del programa
    cout<<"ingrese un operador: ";cin>>op;
    cout<<"ingrese otro numero: ";cin>>b;

    switch(op){//ejecución del programa con los datos introducidos
        case '+': r = a + b ; cout<<"resultado: "<<r<<endl; break;
        case '-': r = a - b ; cout<<"resultado: "<<r<<endl; break;
        case '*': r = a * b ; cout<<"resultado: "<<r<<endl; break;
        case '/': r = a / b ; cout<<"resultado: "<<r<<endl; break;
        default: cout<<"operador no valido";break;
    }

    return 0;
}//fin del programa