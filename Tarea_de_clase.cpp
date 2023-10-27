#include <iostream>
using namespace std;
struct alumno{
    int matricula;
    int edad;
    string nombre;
    float prom;
    bool aprobado;
};

int main() {
    alumno al1;
    alumno listA[5];
    al1.nombre = "Angel";
    al1.edad = 22 ;
    al1.prom = 9.8 ;
    al1.aprobado = true;
    al1.matricula = 202259358;

    cout<<"Nombre: "<<al1.nombre<<"\tEdad: "<<al1.edad;
    cout<<"Matricula: "<<al1.matricula<<"\tProm"<<al1.edad;
    cout<<"\tAprobado: "<<al1.aprobado<<endl;

    for (int i = 0; i < 5; i ++){
        cout << "Ingresa tu nombre: ";
        cin>> al1.nombre;
        cout << "Ingresa tu edad: ";
        cin >> al1.edad;
        cout <<"Ingresa tu matricula: ";
        cin >> al1.matricula;
        cout << "ingresa tu promedio: ";
        cin >> al1.prom;
        if (al1.prom < 6){
            al1.aprobado = false;
        }
        else al1.aprobado = true;
    }

    for (int i = 0; i < 5; i++){
        string bandera;
        cout<<"Nombre: "<<listA[i].nombre<<"\tEdad: "<<listA[i].edad;
        cout<<"Matricula: "<<listA[i].matricula<<"\tPromedio: "<<listA[i].prom;
        if(listA[i].aprobado == 0) bandera = "No";
        else bandera = "SI";
        cout<<"Aprobado: "<<listA[i].aprobado<<endl;
        
    }

    return 0;
}