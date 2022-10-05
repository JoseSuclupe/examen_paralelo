#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
   srand(time(0));
   int col = 1000;
   int i, j;
   int a[col][col], b[col][col], sum=0;

   cout<<"\nMi matriz A es:\n";
   for( i = 0; i < col; ++i) {
      for( j = 0;  j < col; ++j) {
         a[i][j] = (rand()%10);
      }
   }
   for( i = 0; i < col; ++i) {
      for( j = 0; j < col; ++j)
         std::cout<<a[i][j]<<'\t';
      std::cout<<'\n';
   }

   cout<<"\nMi matriz B es:\n";
   for( i = 0; i < col; ++i) {
      for( j = 0;  j < col; ++j) {
         b[i][j] = (rand()%10);
      }
   }
   for( i = 0; i < col; ++i) {
      for( j = 0; j < col; ++j)
         std::cout<<b[i][j]<<'\t';
      std::cout<<'\n';
   }

   cout<<"\nEl resultado de las matrices c es:\n";
   for(i=0; i<col; i++) {
      for(j=0; j<col; j++) {
         sum = a[i][j]+b[i][j];
         std::cout<<sum<<"  ";
      }
      cout<<endl;
   }

   return 0;
}
