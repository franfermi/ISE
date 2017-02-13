
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
  

int main(){
    
   clock_t timeAnt,timeDes;
   double tiempo;
   int puntuacion_cpu;
   int aux;
   int cantidad=0;
   double cantidad2=0.0;

   cout<<'\n';
   for(int i=0;i<50;i++) cout<<"*";
   cout<<"\n*  BENCHMARK  Autor: Francisco Fernández Millán  *\n";
   for(int i=0;i<50;i++) cout<<"*";
   cout<<endl;

   
   cout<<"\n***-TEST CPU-*** \n";
   //Tiempo antes del test.
   timeAnt = clock();
   
   cout<<"\nIniciando test de CPU..."<<endl;

   //Operaciones sin coma flotante.
   for(int i=0;i<1000000000;i++){
		cantidad = cantidad*2;
		cantidad = cantidad/2;
		cantidad++;
		cantidad--;
    } 
    //Operaciones con coma flotante.
   for(int i=0;i<1000000000;i++){
      cantidad2=cantidad2*1.5;
      cantidad2=cantidad2/1.5;
	}
   //Tiempo después del test.
   timeDes = clock();
   //Calculo de tiempo empleado, truncado a decimales.
   //(CLOCKS_PER_SEC) Ciclos de reloj por segundo.
   tiempo = static_cast<double>(timeDes - timeAnt)/CLOCKS_PER_SEC;
   cout<<"\nTiempo empleado: "<<tiempo<<" segundos"<<endl;
   //Calculo de la puntuación de la CPU, truncado a enteros.
   puntuacion_cpu = static_cast<int>(10000/tiempo);
   cout<<"\nPuntuacion obtenida: "<<puntuacion_cpu<<" puntos\n"<<endl;
     

}