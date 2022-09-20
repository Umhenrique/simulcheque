#ifndef _CHEQUE_H
#define _CHEQUE_H
//|=================|
//|   BIBLIOTECAS   |
//|=================|
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iomanip>
#include <time.h>
//|=======================|
//| DECLARAÇÃO DE FUNÇÕES |
//|=======================|
using namespace std;
void unidade (int valor);
void dezena (int valor,int valor2);
void centena (int valor,int valor2,int valor3);
void milhar (int valor,int valor2,int valor3,int valor4,int valor5,int valor6);
#endif