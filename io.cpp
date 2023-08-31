#include <iostream>

// nous limiterons l'espace de noms sous peu
using namespace std;

int main()
{
  // attention, tableau de char non initialisé
  char name[20];
  int age = 0;
  cout << "Veuillez entrer un nom et un âge: ";

  // attention, peut déborder la variable name
  cin >> name >> age;
  cout << "Bonjour " << name;
  cout << ". Vous avez " << age << " ans." << endl;

  return 0;
}