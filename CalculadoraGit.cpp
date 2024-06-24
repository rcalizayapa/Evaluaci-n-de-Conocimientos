//River Calizaya Pariguana
//Calculadora
#include<iostream>
using namespace std;
int main(){
    double a, b, r;
    char op;
    cout<<"ingrese un numero: ";cin>>a;
    cout<<"ingrese un operador: ";cin>>op;
    cout<<"ingrese otro numero: ";cin>>b;

    switch(op){
        case '+': r = a + b ; cout<<"resultado: "<<r<<endl; break;
        case '-': r = a - b ; cout<<"resultado: "<<r<<endl; break;
        case '*': r = a * b ; cout<<"resultado: "<<r<<endl; break;
        case '/': r = a / b ; cout<<"resultado: "<<r<<endl; break;
        default: cout<<"operador no valido";break;
    }

    return 0;
}