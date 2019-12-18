#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Article.h"
#include <iostream>


Article::Article(std::string titre1, double prix1){
	titre = titre1;
	prix = prix1;
}

std::string Article::getTitre() const{
	return titre;
}

double Article::getPrix() const{
	return prix;
}

void Article::setTitre(std::string titreSet){
	titre = titreSet;
}

void Article::setPrix(double prixSet){
	prix = prixSet;
}


//test git wola
