#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
// Ordenamiento por intercambio -- Estructura de datos
int main(){
	int A[8]; //Declaramos la variable del arreglo.
	int pos,Aux; //Declaramos variables de Auxiliar para realizar el cambio de los numeros y posicion.
	cout<<"\t----------Ordenamiento por intercambio----------";
	for(int i=0;i<8;i++){//Creamos con el for el arreglo unidimensional que acepte hasta 8 valores. 
		cout<<"\nIngrese un valor: "; //Imprimimos en pantalla que ingresen el numero.
		cin>>A[i]; //Se guarda el dato en el arreglo.
		}
	for(int i=0;i<8;i++){ //Este for es el bucle para recorrer el arreglo.
	    	pos=i; //La variable de ubicacion es igual al iterador que recorrera el arreglo. 
		Aux=A[i]; //El auxiliar guarda la ubicacion del iterador en el arreglo.
		while((pos>0)&&(A[pos-1]>Aux)){ //El bucle compara que posicion sea mayor a 0 y que posicion a la izquierda sea mayor que Auxiliar, si se cumple se cambia. 
			A[pos]=A[pos-1]; //Se realiza el intercambio de posicion a posicion de izquierda.
			pos--; //Se disminuye la posicion 
		}
		A[pos]=Aux; //Se utiliza para refrescar el recorrido del bucle.
	}
	for(int i=0;i<8;i++){
		cout<<A[i]<<" || "; //Se utiliza para imprimir los valores en Orden.
	}
  	cout<<"\n\n\tGrupo #4\n\nGuillen Miraba Jose Felipe\nGutierrez Leon Dennis Orlando\nJaramillo Ramirez Valeria Nicole";
  getch();
  return 0;
}

