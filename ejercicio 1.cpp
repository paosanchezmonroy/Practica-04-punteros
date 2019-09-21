#include<string.h>
#include<locale>
#include<conio.h>
#include<iostream>

using namespace std;
struct nodo{
    int valor;
    struct nodo *Ptr;
};

void funcion_agregar(int, nodo*&);
void mostrar_datos(nodo*&);

int main(int argc,char** argv){
    char *locale;
    locale=setlocale(LC_ALL,"");
    struct nodo *inicio;
    struct nodo *aux;
    inicio=NULL;
    int num;
    int val;
    do{
	cout<<".::Elija una opcion::."<<endl;
	cout<<"1. Agregar"<<endl;
	cout<<"2. Mostrar datos "<<endl;
	cout<<"3. Salir "<<endl;
	cin>>num;
	switch (num)
 	{
 	case 1:
 	cout<<"Ingrese valor: ";
 	cin>>val;
 	funcion_agregar (val, inicio);
 	break;
	case 2:
    mostrar_datos (inicio);
    break;
    case 3:
	cout<<"Vuelva pronto"<<endl;
	break;	
	default:
		cout<<"Ingrese una opcion valida"<<endl;
	break;
 	}
	}while (num!=3);
	getch();
	return 0;
}
    
    void funcion_agregar( int valor, nodo *&Ptr){
	struct nodo *inicio;
    struct nodo *auxiliar2; 
    inicio=Ptr;
	auxiliar2=new nodo();
	auxiliar2->valor=valor;
	auxiliar2->Ptr=NULL;
    if(inicio==NULL){
		Ptr=auxiliar2;
		}
}

	

void mostrar_datos (nodo *&Ptr){
	do{
		cout<<"El valor del pauntador es: "<<Ptr->valor<<endl;
		Ptr=Ptr->Ptr;
		
	
	}while(Ptr!=NULL);
	
}
