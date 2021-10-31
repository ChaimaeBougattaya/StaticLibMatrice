#pragma once
namespace Mat {
	class Matrice
	{
	private:
		int colone;
		int ligne;
		int** TMatrice;
	public:
		Matrice(int, int);
		Matrice(const Matrice&) = delete;
		~Matrice();
		void remplissage(int);
		Matrice& operator=(const Matrice&) = delete;
		Matrice* operator+(const Matrice&)const;
		Matrice* operator-(const Matrice&)const;
		Matrice* operator*(const Matrice&)const;
		void produitparSca(const int);
		void print()const;
	};
}
