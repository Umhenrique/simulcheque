#include "encomenda.h"
void unidade(int valor)
{
fstream nomes;
string linhaNome;
nomes.open("Extensos.txt", fstream::in);
if(!valor == 0) 
{
for(int i = 0; i < valor + 1; i++)
getline(nomes, linhaNome);
cout << " " << linhaNome ;
}
nomes.close();
}
void dezena(int valor, int valor2) 
{
fstream nomes;
string linhaNome;
nomes.open("Extensos.txt", fstream::in);
if(!valor == 0)
{
if(valor == 1 && valor2 == 0)
{
for(int i = 0; i < valor + 10; i++)
getline(nomes, linhaNome);
cout << " " << linhaNome;
}
else if(valor == 1 && valor2 > 0)
{
for(int i = 0; i < 10 + valor2 + 1 ; i++)
getline(nomes, linhaNome);
cout << " " << linhaNome;
}
else
{
for(int i = 0; i < valor + 19; i++)
getline(nomes, linhaNome);
cout << " " << linhaNome;
if (valor >0 && valor2 >0)
	cout << " e";
unidade(valor2);
}
}
else if (!valor2 == 0)
unidade(valor2);
nomes.close();
}
void centena(int valor, int valor2, int valor3)
{
fstream nomes;
string linhaNome;
nomes.open("Extensos.txt", fstream::in);
if(!valor == 0) 
if(valor == 1 && (valor2 == 0 && valor3 == 0))
for(int i = 0; i < valor + 28; i++)
getline(nomes, linhaNome);
else
for(int i = 0; i < valor + 29; i++)
getline(nomes, linhaNome);
cout << " " << linhaNome;
if (valor >0 && valor2 >0 && valor3 > 0)
	cout << " e";
nomes.close();
dezena(valor2, valor3);
}
void milhar(int valor, int valor2, int valor3, int valor4, int
valor5, int valor6)
{
if(!(valor == 0 && valor2 == 0 && valor3 == 0))
{
centena(valor, valor2, valor3);
cout << " mil";
}
centena(valor4, valor5, valor6);
}