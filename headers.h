#include<iostream>
#include<string>
using namespace std;

void greet(string name,char gender){ // Entradas nombre y género
    string gn;
    if (gender == 'M'){ //Dependeiendo el género se genera un string referente al título del usuario. Este se guarda en gn
        gn= "Sr.";   
    }else {
        gn= "Sra.";
    }
    string delimiter=" "; //Para generar el saludo usando sólo el primer apellido se establece un delimitador que es el espacio en blanco
    int found=name.find(delimiter); //name.find() brinda un entero que indica en qué psosicion del string (name) se encontró el delimitador (delimiter)
    string cut=name.substr(found,name.find(" this",found+1,1)-found);
    // name.substr() genera un string que representa una porción del string más grande (name). El primer parámetro indica la posición en donde empieza dicha porción; y el segundo, indica cuan extensa será la porción. Este último parámetro que es representado por la posición del segundo espacio en blanco de name se restado con la posición del primer espacio en blanco de namei. 
    cout<<"~Bienvenido al sistema de verificación para duplicado de pasaportes, "<<gn<<cut<<endl;
    cout<<"Por favor, brinde los siguientes datos"<<endl;
}

int year(int edad){
    
    //Hacer una función que bote el año en que nació la persona 
    
    }

void report(string name, char gender, int edad, string dep, string domi){
    
    //Hacer un resumen con todos los datos del usuario e imprimirlos de la sgte manera
    //
    //Sus datos son los siguientes:
    //Nombre: ...
    //Genero: ...
    //
    //Año de nacimiento: ...
    //etc
    //
    //La información brindada será verificada para iniciar el trámite de duplicado de pasaporte en breve. Gracias. 
}
