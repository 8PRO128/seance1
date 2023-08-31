#include <iostream>
using namespace std; 


int Maximum(int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}

int main()
{
  int x = 0, y = 0;
  cout << "Entrez deux entiers : ";
  cin >> x >> y;
  cout << "Le maximum est : " << Maximum(x, y) << endl;
  return 0;
}