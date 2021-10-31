#include "pch.h"
#include "Matrice.h"
#include<iostream>
#include<assert.h>
using namespace std;
using namespace Mat;
Matrice::Matrice(int l, int c)
{
	this->ligne = l;
	this->colone = c;
	this->TMatrice = new int*[l];
	for (int i = 0; i < l; i++)
		this->TMatrice[i] = new int[c];

	for (int i = 0; i < l; i++)
		for (int j = 0; j < c; j++)
			this->TMatrice[i][j] = 0;
}

Matrice::~Matrice()
{
	for (int i = 0; i < this->ligne; i++)
	{
		delete(this->TMatrice[i]);
	}
	delete(this->TMatrice);
}

void Matrice::remplissage(int val)
{
	for (int i = 0; i < this->ligne; i++)
		for (int j = 0; j < this->colone; j++)
			this->TMatrice[i][j] = val;
}

Matrice* Matrice::operator+(const Matrice& M) const
{
	//errer si la matrice n'est pas carrée
	assert((this->colone == M.colone) && (this->ligne == M.ligne));
	Matrice* res = new Matrice(this->ligne, this->colone);
	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < this->colone; j++)
		{
			res->TMatrice[i][j] = this->TMatrice[i][j] + M.TMatrice[i][j];
		}
	}
	return res;
}

Matrice* Matrice::operator-(const Matrice& M) const
{
	assert((this->colone == M.colone) && (this->ligne == M.ligne));
	Matrice* res = new Matrice(this->ligne, this->colone);
	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < this->colone; j++)
		{
			res->TMatrice[i][j] = this->TMatrice[i][j] - M.TMatrice[i][j];
		}
	}
	return res;
}

Matrice* Mat::Matrice::operator*(const Matrice& M) const
{
	assert((this->colone == M.colone) && (this->ligne == M.ligne));
	Matrice* P = new Matrice(this->ligne, this->colone);
	for (int i = 0; i < this->ligne; i++) {
		for (int j = 0; j < M.colone; j++) {
			for (int k = 0; k < M.ligne; k++) {
				P->TMatrice[i][j] += this->TMatrice[i][k] * M.TMatrice[k][j];
			}
		}
	}
	return P;
}

void Mat::Matrice::produitparSca(const int val)
{
	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < this->colone; j++)
		{
			this->TMatrice[i][j] = this->TMatrice[i][j] * val;
		}
	}
	
}

void Matrice::print() const
{

	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < this->colone; j++)
		{
			//cout << "Matrice[" << i << "][" << j << "] = "<<this->TMatrice[i][j]<<endl;
			cout << this->TMatrice[i][j] << " ";
		}
		cout << "\n";
	}
}