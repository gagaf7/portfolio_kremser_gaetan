#include <stdio.h>		// bibliothèque, déjà écrit
#include <iostream>
#include <string>

using namespace std;  

int main() // début du programme, main = principale , du coup début programme principale commentaire en C++
{
	/* début du programme , commentaire en C*/
int a,b,ma,mb;  // déclaration des variables
	// Cout permet un affichage écran, cout passe part une sortie par défaut(écran)
	cout<<("Entrez 2 valeurs positives : \n");
	// fait un affichage
	// /n permet de sauter une ligne, vient du C
    cout<<"saisir la premi�re valeur \n";
	// cout<< , va vers cout , permet de stocker
	// ex a = 4
    cin>>a;
	// cin = saisir une variable a, stocke la valeur dans a
	// cin>> a, permet de mettre la premiere valeur rentrer dans a
    cout<<"saisir la deuxi�me valeur \n";
	cin>>b;
	// ex b = 5
	//met la deuxième valeur dans b

	/* sauvegarde des valeurs de travail */
	ma=a; // affection de a à ma ex ma = 4
	mb=b;// affectation de b a mb ex mb = 5

	/* recherche */
	while (ma != mb)  //boucle tant que ma est diff�rente de mb, 4 dif de 5 
	{	if (ma<mb)		// si ma<mb , si 4 <5
			ma = ma+a;	// ma = ma + a , ma = 4 + 4
		else			// si ma > mb, pas lors de la premsiers boucle
			mb = mb+b; // deuxième passage :mb = 5 + 5, mb= 10
	}   /*fin du while  */   // reivens au début du while  

	/*  Affichage du r�sultat */
	cout<<"� partir de "<<a<<" et de "<<b<<" on obtient: "<<ma;
	cout<<"\n";

	system("PAUSE"); // permet de stopper le programme

}  /* fin du programme  */ 
