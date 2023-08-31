#include <iostream>
using namespace std; 
struct student
{
  string name;
  float semesterGrades[5];
  float gpa;
};

int main()
{
  student s1;
  s1.name = "Franz Schubert";
  s1.semesterGrades[0] = 3.0;
  s1.semesterGrades[1] = 4.0;
  s1.gpa = 3.5;
  cout << s1.name << " a une moyenne de : " 
                    << s1.gpa << endl;
  return 0;
}