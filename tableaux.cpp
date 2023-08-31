#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{ 
  // attention; tableau non initialisé
  char name[20];   
  // moyenne des notes
  float gpa = 0.0; 

  cout << "Veuillez entrer un nom et une moyenne : ";

  cin >> setw(20) >> name >> gpa;
  cout << "Bonjour " << name << flush;
  cout << ". La moyenne est : " << setprecision(3) << gpa << endl;
  return 0;
}