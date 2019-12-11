#ifndef ARTICLE_H
#define ARTICLE_H
#include <string.h>
#include <stdio.h>
#include <iostream>


class Article
{
   private:
      std::string titre;
      double prix;

   public:
      Article(std::string titre1="", double prix1=0.);

      std::string getTitre() const;
      double getPrix() const;
      void setTitre(std::string titreSet);
      void setPrix(double prixSet);
};

#endif //ARTICLE_H
