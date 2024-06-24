//numerosprimos
#include<iostream>
using namespace std;

int main(){//inicio del programa 
    int n1, n2, c, i;//declaración de las variables
    char cont; //declaración del caracter
    do{
        cout<<"ingrese dos numeros a comprobar: ";cin>>n1>>n2;
    c = 0;
    for(i=1; i<=n1&&i<=n2; i++){//condiciones para que se ejecute el programa
        if(n1%i==0&&n2%i==0){
            c++;
        }
    }
    if(c>1){
        cout<<"No son pesi"<<endl;
    }
    else{
        cout<<"Son pesi"<<endl;//resultados obtenidos
    }
    cout<<"¿Comprobar mas numeros?s/n: ";cin>>cont;
    }
    while(cont=='s');
    return 0;
}//fin del programa