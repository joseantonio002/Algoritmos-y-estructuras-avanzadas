#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> sec = {5,6,3,2,34,65,32,67,4,32,57,-1};
  int size = sec.size();
  int j, valoracolocar, med, ini, fin;
  //busca justo la posición del elemento inmediatamente menor al que queremos
for (int posvalacolocar = 1; posvalacolocar<size;posvalacolocar++) {
   j = posvalacolocar ;
   valoracolocar = sec[posvalacolocar] ;
   ini = 0 ; fin = posvalacolocar-1; 
   while ( ini <= fin ) {
      med = (ini+fin)/2; 
      if (sec[med] < valoracolocar)
         ini = med+1;
      else
         fin = med-1;
   } 
  //de atras hacia adelante rodar hasta ini (donde se coloca)
   for (int j = posvalacolocar-1; j >= ini; j--)
      sec[j+1] = sec[j] ; 
   sec[ini] = valoracolocar ;
} 
  for(int i = 0; i < size; i++) {
    cout << sec[i] << ' ';
  }
