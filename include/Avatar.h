#ifndef AVATAR_H
#define AVATAR_H

#include "Personnage.h"
#include "Image.h"
#include "Ennemi.h"

class Avatar
{
  Personnage _perso;

  // Question 2.2
  int _nbVies;

  // Question 2.6
  bool _invincible;

public:

  Avatar (const Image& image = Image(),
          int x = 0, int y = 0,
          int skin_x = 0, int skin_y = 0,
          Direction direction = BAS);

  void dessiner() const;

  void allerDroite(const Niveau& niveau);
  void allerGauche(const Niveau& niveau);
  void allerHaut(const Niveau& niveau);
  void allerBas(const Niveau& niveau);

  int getX() const;
  int getY() const;

  bool touche (const Ennemi& ennemi) const;

  // Question 2.2
  int getNbVies() const;

  // Question 2.4
  void perteVie();

  // Question 2.4
  void finInvincibilite();
};

#endif // AVATAR_H
