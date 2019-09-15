#include<iostream>
#include<stdio.h>
#include<string.h>
#include<locale>
using namespace std;
struct nodo{
    int valor;
    struct nodo *Ptr;
};
int main(int argc,char** argv){
    char *locale;
    locale=setlocale(LC_ALL,"");
    struct nodo N1;
    struct nodo N2;
    struct nodo N3;
    struct nodo N4;
    struct nodo N5;
    
    N1.valor=3;
    N1.Ptr=	NULL;
    N2.valor=7;
    N2.Ptr=	NULL;
    N3.valor=9;
    N3.Ptr=	NULL;
    N4.valor=2;
    N4.Ptr=	NULL;
    N5.valor=4;
    N5.Ptr=	NULL;
    
    N1.Ptr=&N2;
    N2.Ptr=&N3;
    N3.Ptr=&N4;
	N4.Ptr=&N5;
	N5.Ptr=&N1;
	
    cout<<"Nodo 2. "<<N1.Ptr->valor<<endl;
    cout<<"Nodo 3. "<<N1.Ptr->Ptr->valor<<endl;
    cout<<"Nodo 4. "<<N1.Ptr->Ptr->Ptr->valor<<endl;
    cout<<"Nodo 5. "<<N1.Ptr->Ptr->Ptr->Ptr->valor<<endl;
    cout<<"Nodo 1. "<<N1.Ptr->Ptr->Ptr->Ptr->Ptr->valor<<endl;
    return 0; 
}
