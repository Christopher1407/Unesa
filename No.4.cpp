#include <iostream>
using namespace std;

int main ()

{
 int i, j;
 int data [2][2] = {{2,3},{4,2}};
 
 for (i = 0; i < 2; i++)
 {
  for (j = 0; j < 2; j++)
  {
   cout << data [i] [j];
   cout << " ";
  }
 cout << endl;
 } 

}
