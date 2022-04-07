#include <iostream>
#include <vector>
using namespace std;

//bin search for int vector in ascending order

/*
COMO FUNCIONA:
Segmento inicio y fin, si el punto medio es igual al 
elemento buscado return, si el punto medio es mayor al elem buscado significa q el
elemento está por debajo, si el elem medio es menor significa q está por encima, va
calculando cada mitad hasta que fin e ini sean iguales
*/


int main() {
  vector<int> sec = {0,1,2,3,4,5,6,7,8,9};
  int ini = 0, fin = sec.size() - 1, find, media;
  cin >> find;
  while(ini < fin) {
    media = (ini+fin)/2;
    if(sec[media] == find) {
      cout << "encontrado en: " << media << endl;
      return 0;
    }
    else if(sec[media] > find) {
      fin = media - 1;
    }
    else if(sec[media] < find) {
      ini = media + 1;
    }
  }
  if(sec[ini] == find) {
    cout << "encontrado en: " << ini << endl;
  }
  else {
    cout << "not found" << endl;
  }
  return 0;
}
