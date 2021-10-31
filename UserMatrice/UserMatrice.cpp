// UserMatrice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Matrice.h"
using namespace Mat;
using namespace std;
int main()
{
    cout << "\n***********  Affichage matrice M1 : *************\n";
    Matrice M1(2, 2);
    M1.remplissage(3);
    M1.print();

    cout << "\n\n***********  Affichage matrice M2 : *************\n";
    Matrice M2(2, 2);
    M2.remplissage(1);
    M2.print();
    cout << "\nla somme de M1 et  M2 \n\n";
    M1.operator+(M2)->print();

    cout << "\nla soustraction de M1 et  M2 \n\n";
    M1.operator-(M2)->print();

    cout << "\nle produit de M1 par -2 \n\n";
    M1.produitparSca(-2);
    M1.print();

    cout << "\nle produit de M1 et M2 \n\n";
    M1.operator*(M2)->print();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
