#include <stdio.h>
#include <iostream>
#include <string> 

/* corrigé num 5, M. Kreyder */
/* à compléter   */

using namespace std;  
string nompizza[10];
string ingredientpizza[30];
string tabNomIngredients[10][5];
int tabQIngredient[30];
string nomClient;
string tabNomClient[40];
int tabCommandeClientPizza[40][10];
int tabPrixPizza[10][1];
int tabNbpersonneParTable[40][1];

/* dï¿½but des procï¿½dures et des fonctions */
void saisirLesPizzas()
{ 
	nompizza[0] = "Calzone";
	nompizza[1] = "4 fromage";
	nompizza[2] = "Gaetan";
	nompizza[3] = "Montagnard";
	nompizza[4] = "californienne";
	nompizza[5] = "Chèvre Miel";
	nompizza[6] = "Canibale";
	nompizza[7] = "lune de miel";
	nompizza[8] = "Munster";
	nompizza[9] = "margarita";
}

double saisirLesPrix()
{
	tabPrixPizza[0][0] = 1.00;
	tabPrixPizza[1][0] = 2.00;
	tabPrixPizza[2][0] = 3.00;
	tabPrixPizza[3][0] = 4.00;
	tabPrixPizza[4][0] = 5.00;
	tabPrixPizza[5][0] = 6.00;
	tabPrixPizza[6][0] = 7.00;
	tabPrixPizza[7][0] = 8.00;
	tabPrixPizza[8][0] = 9.00;
	tabPrixPizza[9][0] = 10.00;
}

void affichenompizza()
{
	int i;
	cout<<"les pizzas de la pizzeria"<<endl;
	
	for (i = 0;i<10;i++){
		cout<< i+1<<" "<<nompizza[i]<<endl;
	}
}


void ingredientPizza()
{ 
	int i;

	ingredientpizza[0] = "tomate";
	ingredientpizza[1] = "Viande Hacher";
	ingredientpizza[2] = "Fromage rapée";
	ingredientpizza[3] = "Munster";
	ingredientpizza[4] = "Chèvre";
	ingredientpizza[5] = "Miel";
	ingredientpizza[6] = "Sauce blanche";
	ingredientpizza[7] = "Pomme de terre";
	ingredientpizza[8] = "fromage a raclet";
	ingredientpizza[9] = "mozzarela";
	ingredientpizza[10] = "lard";
	ingredientpizza[11] = "chorizo";
	
	for (i = 12;i<30;i++){
		ingredientpizza[i] = "X";		
	}
};
void QIngredient()
{ 
	int i;
	// le poids en kilo 
	tabQIngredient[0] = 50;
	tabQIngredient[1] = 0;
	tabQIngredient[2] = 90;
	tabQIngredient[3] = 30;
	tabQIngredient[4] = 100;
	tabQIngredient[5] = 59;
	tabQIngredient[6] = 40;
	tabQIngredient[7] = 90;
	tabQIngredient[8] = 10;
	tabQIngredient[9] = 0;
	tabQIngredient[10] = 110;
	tabQIngredient[11] = 0;
	
	for (i = 12;i<30;i++){
		tabQIngredient[i] = 0;		
	}
};


void afficheingredientpizza()
{
	int j;
	for (j = 0;j<12;j++){
		cout<<ingredientpizza[j]<<endl;
	}
};


void pizzaplusingredient(){
	int i; 
	int j;
	for (i=0;i<10;i++){
		for (j=0;j<5;j++){
			tabNomIngredients[i][j] = "X";
		};
	};
	
	tabNomIngredients[0][0] = "tomate";
	tabNomIngredients[0][1] = "mozzarela";
	tabNomIngredients[0][2] = "jambon";
	tabNomIngredients[0][3] = "champignon";
	tabNomIngredients[0][4] = "fromage rapée";
	
	tabNomIngredients[1][0] = "tomate";
	tabNomIngredients[1][1] = "mozzarela";
	tabNomIngredients[1][2] = "munster";
	tabNomIngredients[1][3] = "chèvre";
	tabNomIngredients[1][4] = "fromage rapée";

	tabNomIngredients[2][0] = "tomate";
	tabNomIngredients[2][1] = "mozzarela";
	tabNomIngredients[2][2] = "miel";
	tabNomIngredients[2][3] = "chèvre";
	tabNomIngredients[2][4] = "chorizo";
	
	tabNomIngredients[3][0] = "tomate";
	tabNomIngredients[3][1] = "champignon";
	tabNomIngredients[3][2] = "munster";
	tabNomIngredients[3][3] = "jambon";
	tabNomIngredients[3][4] = "fromage rapée";
	
	tabNomIngredients[4][0] = "tomate";
	tabNomIngredients[4][1] = "fromage rapée";
	tabNomIngredients[4][2] = "miel";
	tabNomIngredients[4][3] = "chèvre";
	tabNomIngredients[4][4] = "Noix";
	
	tabNomIngredients[5][0] = "tomate";
	tabNomIngredients[5][1] = "fromage rapée";
	tabNomIngredients[5][2] = "miel";
	tabNomIngredients[5][3] = "chèvre";
	tabNomIngredients[5][4] = "Noix";
};

void affichetabNomIngredients()
{
	int j;
	int i;
	for (i = 0;i<10;i++)
	{
		cout<<endl<<"c'est la pizza : "<<nompizza[i]<<" avec les ingrédients : "<<endl;
		for (j=0;j<5;j++)
		{
		cout<<tabNomIngredients[i][j]<<endl;
		};
	};
};


void afficheChorizoPizza(){
	int i, j;
	cout<<endl<<"les pizzas avec du chorizo"<<endl;
	for (i = 0;i<10;i++){
		for (j=0;j<5;j++){
			if (tabNomIngredients[i][j] == "chorizo"){
				cout<<endl<<"c'est la pizza : "<<nompizza[i]<<" qui contient du "<<tabNomIngredients[i][j]<<endl;
			}
		}
	}
};

void afficheIngredientPizzas(string IngredientParam){
	int i, j;

	cout<<endl<<"les pizzas avec du "<<IngredientParam<<endl;
	for (i = 0;i<10;i++){
		for (j=0;j<5;j++){
			if (tabNomIngredients[i][j] == IngredientParam){
				cout<<endl<<"c'est la pizza : "<<nompizza[i]<<" qui contient du "<<tabNomIngredients[i][j]<<endl;
			}
		}
	}
};

void afficheIngredientPizzasWhile(string IngredientParam){
	int i, j;

	cout<<endl<<"les pizzas avec du "<<IngredientParam<<endl;
	i = 0;
	while(i<10){
		j = 0;
		while (j<5)
		{
			if (tabNomIngredients[i][j] == IngredientParam)
			{
				cout<<endl<<"c'est la pizza : "<<nompizza[i]<<" qui contient du "<<tabNomIngredients[i][j]<<endl;
			}
			j++;
		}
		i++;
	};
};

void affiche1IngredientPizzasWhile(string IngredientParam){
	int i, j; // ECRIRE AVEC UN SEUL WHILE

	cout<<endl<<"les pizzas avec du "<<IngredientParam<<endl;
	i = 0;
	while ((i<10) and (tabNomIngredients[i][j] != IngredientParam))
	{
		j = 0;
		while ((j<5) and (tabNomIngredients[i][j] != IngredientParam))
		{
			j++;
		}
		i++;
	}
	if (i<10)
	{
		cout<<"la pizza : "<<nompizza[i]<<" elle contient du "<< IngredientParam<<endl;
	}
	else //j'ai parcourue tout le tableau et rien trouver
	{
		cout<<"pas de pizza avec du "<<IngredientParam<<endl;
	}
};

/*
int ouPizza(string nomPizzaParam){
	int i = 0;
	bool btrouve = false;
	while((i<10) and (btrouve == false)){
		if (nompizza[i] == nomPizzaParam){
			btrouve = true;
		}
		else{
			i++;
		}
	}
	if (btrouve == true){
		return(i);
	}
	else{
		return(-1);
	};
};
*/
int ouPizza(string nomPizzaParam){
	int i = 0;
	//bool btrouve = false;  pas de booléen
	while((i<10) and (nompizza[i] != nomPizzaParam))
	{
		i++;
	}
	if (i<10){
		return(i);
	}
	else{
		return(-1);
	};
};




int ouIngredient(string nomIngredientParam){
	int i = 0;
	bool btrouve = false;
	while((i<30) and (btrouve == false)){
		if (ingredientpizza[i] == nomIngredientParam){
			btrouve = true;
		}
		else{
			i++;
		}
	}
	if (btrouve == true){
		return(i);
	}
	else{
		return(-1);
	};
};

int ouIngredient(string nomIngredientParam, int &qteDispo){
	int i = 0;
	bool btrouve = false;
	while((i<30) and (btrouve == false)){
		if (ingredientpizza[i] == nomIngredientParam){
			btrouve = true;
		}
		else{
			i++;
		}
	}
	if (btrouve == true){
		qteDispo = tabQIngredient[i];
		return(i);
	}
	else{
		qteDispo = 0;
		return(-1);
	};
};


int calculprix(double prixpizza[], int quantitepizza[], double totalprix)
{ 
    // retourne le nombre de ligne dans la facture*/

/* lecture des lignes de la facture */
int i;
string rep;
double prix;
int quantite;


totalprix=0;


i=0; // c'est le premiere pizza

printf("quantite : ");
cin>>quantite;

while (quantite > 0 )  // tant que rep = o ou O

{
    printf ("Gestion de la facture \n");
  
	printf("prix de la pizza : ");
	cin>>prix;
	prixpizza[i]=prix;
	
	
 
	quantitepizza[i]=quantite;
	
	printf("quantite : ");
	cin>>quantite;
	
	i=i+1;


	totalprix=totalprix+prix*quantite;
	
       // i++;
}

printf("total de la facture : ");
cout<<totalprix<<endl;

return i;     // retourne de la fonction

}

void saisirLesInfos(string civilite, string nom,string prenom,string rue,string cpos,string ville)  // void = procï¿½dure
{
cout<<"Entrez les coordonnees de la personne: \n";

cout<<"civilite : ";
getline(cin, civilite);

cout<<"nom : ";
getline(cin, nom);

cout<<"prenom : ";
getline(cin, prenom);

cout<<"rue : ";
getline(cin, rue);  // permet de saisir des nom composer dans une même ligne du tableau
/* traitement code postal et ville */

cout<<"code postal : ";
getline(cin, cpos);

cout<<"Ville : ";
getline(cin, ville);

system("PAUSE");
}


void affacture(string civilite, string nom,string prenom,string rue,string cpos,string ville,double prixpizza[],int quantitepizza[],double totalprix, int nbreligne)
{
	int j; 
// pour afficher

cout<<"affichage définitif de la pizza"<<endl;
cout<<endl;
cout<<endl;
cout<<"pizza rabbit"<<endl;
cout<<endl;
cout<<"numero de commande: "<<"23"<<endl;
cout<<"Numero de client :"<<"234"<<endl;

cout<<"                                     "<<civilite<<" "<<nom<<" "<<prenom<<endl;
cout<<"                                     "<<rue<<endl;
cout<<"                                     "<<cpos<<" "<<ville<<endl;

cout<<endl;
cout<<"ligne de la commande "<<endl;

cout<<"      quantité"<<"    "<<"référence"<<"    "<<"désignation"<<"  prix    "<<"total"<<endl;

for (j=0;j<nbreligne;j++)
{
 cout <<"N. "<<j+1<<",  "<<quantitepizza[j]<<"           "<<" refe" <<j+1<<"    "<<"nompizz"<<j+1;
 cout <<"      "<<prixpizza[j]<<"    "<< quantitepizza[j]*prixpizza[j]<<endl;
}    
cout<<endl;
cout<<endl;
cout<<"                                                        total: "<<totalprix;
cout<<endl;
cout<<endl;
 
}

void afficheIngredientPizzaDemande()
{	
	int j;
	int i;
	cout<<"quel pizza voulez vous voir les ingredients : "<<endl;
	cin>>i;
	cout<<"les ingredient de la pizza "<<nompizza[i -1]<<" sont : "<<endl;
	for (j=0;j<5;j++)
	{
		cout<<tabNomIngredients[i - 1][j]<<endl;
	};
};

void lesPizzaDeLaTable()
{	
	int nbpersonne;
	int j;
	int i;
	int pizza;
	cout<<"quel table êtes vous : "<<endl;
	cin>>i;
	cout<<"combien êtes vous : "<<endl;
	cin>> nbpersonne;
	tabNbpersonneParTable[i][1] = nbpersonne;
	if (i <= 40){
		for (j=0;j<nbpersonne;j++)
		{
			cout<<"quelle pizza voulez vous : (mettez le numéro de la pizza)"<<endl;
			cin>> pizza;
			tabCommandeClientPizza[i][j] = pizza - 1;
		}
	}
	else{
		cout<<"votre numéro de table n'est pas bon"<<endl;
	}	
};


bool commande(string nomPizzaParam)
{
	//verifie que les ingredients sont disponible pour la pizza avec ouIngredients et ouPizza, on cherche le numero de pizza
	int numPizza; // la pizza se trouve a ca numero dans le tableau
	int numIngredient; // l'ingredient se trouve à ce numéro
	bool bContinue = true; // continue tant qu'il est vrai
	int j ; // va me parcourir le tableau des pizzas et des ingredients
	int qte ; //quantite dispo ?
	//cherche la pizza
	//parcourir les ingrédients de la pizza
	// et regarder si l'ingred
	
	numPizza = ouPizza(nomPizzaParam);
	//if((ouPizza(nomPizzaParam)) >= 0)
	if(numPizza >= 0){   //trouver si la pizza existe
		// bien trouver la pizza
		//parcourir le tableau
		j = 0;
		while((j<5) and (bContinue)){
			//numIngredient = ouIngredient(tabNomIngredients[numPizza][j]);
			numIngredient = ouIngredient(tabNomIngredients[numPizza][j], qte);
			if ( qte == 0){
				bContinue = false;
			}
			else{
				j++; // aller au prochaine ingredient
			}
		}
		
	}
	else{
	bContinue = false ;
	}
	return (bContinue);
		
};

int calculPrixDeLaTable(){
	cout<<"quelle table êtes vous : "<<endl;
	
		
}


char afficheMenu(){
	char choix;
	cout<<"Menu principale de gestion"<<endl;
	cout<<"1 : affiche les pizzas"<<endl;
	cout<<"2 : affiche les ingredients de la pizzas"<<endl;
	cout<<"3 : saisir les pizza de la table "<<endl;
	cout<<"4 : calculer l'addition de la table"<<endl;
	//les autres cout 
	cout<<"F pour fin"<<endl;
	cout<<"quel est votre choix ?"<<endl;
	cin>>choix;
	return(choix);
};


void gestionPizzeria()       //permet de gérer la pizzeria
{    
	char chMenu;
	chMenu = afficheMenu();
	// je récupère le choix de l'utilisateur
	/*
	if (chMenu == 1){
		affichenompizza();
	}
	elseif(chMenu == 2){
		affichetabNomIngredients();
	}
	*/
	// je continue par replacer par une fonction switch, selon
	while(chMenu != 'F'){
		switch(chMenu){
			case '1' :
				affichenompizza();
				break;           // pour sortir du selon, sinon le switch fait les autre option
			case '2':
				afficheIngredientPizzaDemande();
				break;
			case '3':
				lesPizzaDeLaTable();
				break;
			case '4':
				calculPrixDeLaTable();
				break;
				
		}
		//afficher les choix et saisir le choix suivant
		chMenu = afficheMenu();
	}
};


// programme principal

int main()  // dï¿½but du programme principal
{
	int i;  // sert ï¿½ gerer le nombre de lignes dans la commande,
    int j; // permet l'affichage des lignes de la facture de la pizza  

	string civilite; // chaine de caractï¿½re
	string nom;
	string prenom;
	string rue = "4 rue des petits pieds";
	string cpos;
	string ville;
	string rep;
	double totalprix; // chiffre a virgul 
	int quantite;
	double prix;
    int quantitepizza[10];  // tableau qui permet de stocker 10 ï¿½lï¿½ments    // 10 pizza avec des indices nompizza[0] jusqu'a nompizza[9]
	double prixpizza[10]; 
	
	int nbreligne; /* nombre de ligne dans la commande */
	int indice;
	string nomPizzaParam;
	int numPizza;
	
/* dï¿½but du programme */

saisirLesInfos(civilite,nom,prenom,rue,cpos,ville);  // appelle de sous programme(procï¿½dure) , procï¿½dure avec paramï¿½tre, module

saisirLesPizzas();
affichenompizza();
ingredientPizza();
afficheingredientpizza();
pizzaplusingredient();
affichetabNomIngredients();

commande(nomPizzaParam);

indice = ouPizza("Calzone");
cout<<endl;
cout<<"pizza Calzone, à l'indice : "<<indice;
cout<<endl;

indice = ouIngredient("tomate");
cout<<endl;
cout<<"ingredients tomate, à l'indice : "<<indice;
cout<<endl;

indice = ouIngredient(("tomate"),quantite);
cout<<endl;
cout<<"ingredients tomate, à l'indice : "<<indice<<" avec quantite :"<<quantite<<endl;
cout<<endl;

nomPizzaParam = "Clazone";
if (commande(nomPizzaParam) == true){
	cout<<"vous pouvez commander une : "<<nomPizzaParam;
}
else{
	cout<<"Pas de pizza :"<<nomPizzaParam<<endl;
};



// on va calculer et sauvegarder le nombre de lignes
nbreligne=calculprix(prixpizza, quantitepizza, totalprix);     // l'appel de sous programme, fonction  , module
 
// appelle de afffacture(.......)
affacture(civilite, nom,prenom,rue,cpos,ville,prixpizza, quantitepizza,totalprix, nbreligne);

//        civilite, nom,penom,rue,cpos,ville,prixpizza,quantitepizza,totalprix,nbreligne


// Les clients qui commandent les Pizzas
i = 0;
cout<<"Donnez le nom du client; F pour Fin"<<endl;
cin>> nomClient;
//saisir des clients avec des pizzas
//un client qui commande pour la table
//
while (( i<=40) and ( nomClient !="F")){
		tabNomClient[i] = nomClient;
		affichenompizza(); //pour faire un choix
		cout<<"saisir un numéro de pizza (-1 pour arrêter)";
		cin>>numPizza;
		
		j=0;
		//remplir ma commande pour le client
		while ((numPizza > 0) and(j<10)){
			tabCommandeClientPizza[i][j] = numPizza - 1;	
			cout<<"saisir un numéro de pizza (-1 pour arrêter)";
			cin>>numPizza;
			j++;	
		}
	cout<<"Donnez le nom du client; F pour Fin"<<endl;
	cin>> nomClient;	
	i++;
	// incouvenient 
	// si on commande 3 calzones, on sait 3 fois le 10
	
	
};
	// prévoir un menu gestion pour la caissier
	//
	gestionPizzeria();
		
	


system("PAUSE");
cout<<"reste à mettre en forme la présentation de la facture "<<endl;
system("PAUSE");

  system("PAUSE");  
}

