#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
  int x = 0;
  cout << "Entrez un entier : ";
  cin >> x;
  if (x == 0)
    cout << "x est 0" << endl; 
  else if (x < 0)
    cout << "x est négatif" << endl; 
  else {
    cout << "x est positif"; 
    cout << "et dix fois x est : " << x * 10 << endl;
  }

  return 0;
}