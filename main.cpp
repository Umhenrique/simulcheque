#include "encomenda.h"
float valor;
int fechador;
int centavos, reais, resto, cent, decimal[6], centimal[2], gambi,
arra;
int CD[] = {100000, 10000, 1000, 100, 10, 1}; //Casas decimais
int CDc[] = {10, 1}; //Casas decimais dos centavos
string linhaNome;
string nome;
string recebedor;
int main()
{
do{
setlocale(LC_ALL, "portuguese");
fstream nomes;
nomes.open("Extensos.txt", fstream::in);
cout << "\n|========================================================|";
cout << "\n|++++++<<O cheque deve ser depositado no nome de>>+++++++|"; 
cout << "\n|========================================================|";
cin >> recebedor;

cout << "|========================================================|";
cout << "\n|++++++++++-<Digite o valor a ser depositado>++++++++++++|";
cout << "\n|========================================================|";
cout << "\n VALORES DECIMAIS DEVEM SER ISERIDOS COM '.', NÃO ','";
cout << "\n >> ";
cin >> valor;
system("cls");
cout << "\n|=============================================================|\n";
reais = int(valor); //Reais : NUMEROS REAIS
centavos = round(( valor - reais) * 100); //Aqui arredonda pra descobrir se tem centavos, tira um float por um interiro
resto = reais;
for(int i = 0; i < 6 ; i++) //Por que casas decimais foi declarado como u array de tamanho 6
{
	decimal[i] = resto / CD[i];
	resto -= decimal[i] * CD[i];
}
cout <<" ", cout << valor, cout<<"R$\n";
cout << " Cheque destinado à: ", cout<< recebedor;
cout << "\n O valor do cheque a ser depositado é :";
// cout << "\n";
milhar(decimal[0], decimal[1], decimal[2], decimal[3], decimal[4], decimal[5]);
if(!(decimal[0] == 0 && decimal[1] == 0 && decimal[2] == 0 && decimal[3] == 0 && decimal[4] == 0 && decimal[5] == 0))
{
	if(reais == 1)
	cout << " real"; //PERGUNTAR SE PODE
	else
	cout << " reais"; //PERGUNTAR SE PODE
}
if(!(centavos == 0) && reais > 1)
{
	cout << " e"; 
}
if(!(centavos == 0))
{
	cent = centavos;
	for(int i = 0; i < 2 ; i++)
	{
		centimal[i] = cent / CDc[i];
		cent -= centimal[i] * CDc[i];
	}
	if (centimal[1] < 5) centimal[1] += 1;
		dezena(centimal[0], centimal[1]);
		cout << " centavos";
}
if(centavos == 0 && decimal[0] == 0 && decimal[1] == 0 && decimal[2] == 0 && decimal[3] == 0 && decimal[4] == 0 && decimal[5]
== 0)
{
	cout << "\n ERROR 001 \n\n";
}
time_t mytime;
mytime = time(NULL);
cout << "\n <Data e hora do deposito>\n";
cout<< " ", cout<< ctime(&mytime);
cout<< " Assinatura Digital: _____________________\n";

cout << "\n|=============================================================|\n";
cout << "\n|+++++++<<Se deseja depositar outro cheque digite 0>>+++++++++|"; 
cin >> fechador;
system("cls");
}while (fechador == 0);
return 0;
}