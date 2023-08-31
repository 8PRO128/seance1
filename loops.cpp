#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int i = 0;
  while (i < 10)
  {
    cout << i << endl;
    i++;
  }

  i = 0;
  do
  {
    cout << i << endl;
    i++;
  } while (i < 10);

  for (i = 0; i < 10; i++)
  {
    cout << i << endl;
    for (int j = 0; j < 10; j++)
      cout << j << endl;
    cout << "\n";
  }

  return 0;
}