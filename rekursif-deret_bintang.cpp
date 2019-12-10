#include <iostream>

using namespace std;

int main()
{
   int i, j, space, jml = 5;

   for(i = 1; i <= jml; i++)
   {
   		for(j = 1; j <= i; j++)
		   {
        	cout << "*";
      		}
      		
      cout << "\n";
   }
   return 0;
}
