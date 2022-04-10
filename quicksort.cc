#include <iostream>
#include <vector>
using namespace std;
//usando como pivote el elemento del medio
void quicksort(vector<int>& vector,int ini, int fin) {
  int i = ini, f = fin, pivote = vector[(i+f)/2];
  while(i < f) {
    while(vector[i] < pivote) i++;
    while(vector[f] > pivote) f--;
    if(i <= f) {
      int aux = vector[i];
      vector[i] = vector[f];
      vector[f] = aux;
      i++;
      f--;
    }
  }
  //supuestamente i e f acaban en la misma pos (la del medio) creo
  //quicksort primera mitad
  if(ini < f) quicksort(vector, ini, f);
  //quicksort segunda mitad
  if(i < fin) quicksort(vector, i, fin);
}

int main() {
  vector<int> v = {44,55,12,42,94,18,6,67};

  quicksort(v,0,v.size()-1);
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
}
