#include<iostream> //Establece console out (cout) y console in (cin)
#include<string> //Establece el uso de cadenas (strings)
#include "headers.h"//Se incluyen las funciones creadas en el archivo headers.h
using namespace std;//Se obvia la declaración de std en cout y cin

int main(){
        string name,dep,dom;  //Declaración de variables
        int age;
        char gender;
        cout<<"********DEPARTAMENTO DE MIGRACIONES DEL PERÚ********"<<endl; //Presentación del programa
        cout<<"Nombre Completo (Sin segundo nombre):"<<endl;

        getline(cin,name);
        cout<<"Género (M/F):"<<endl;
        cin>>gender;
        greet(name,gender); //Función greet(saludo) que se jala desde header.h que tiene como entradas el nombre y el género y da como salida un saludo incluyendo "Sr(a). <Primer apellido>" 

        cout<<"Edad:"<<endl; //Toma de datos
        cin>>age; 
        cout<<"Departamento de procedencia:"<<endl;
        cin.ignore(); //el anterior getline lee hasta que aparezca una nueva línea de caracteres. Con cin.ignore() se detiene esto 
        getline(cin,dep); 
        cout<<"Domicilio:"<<endl;
        getline(cin,dom);
        

        //CONTINUAR
       
        

}

