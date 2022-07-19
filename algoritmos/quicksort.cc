#include <iostream>
#include <vector>
using namespace std;
//usando como pivote el elemento del medio
void quicksort(vector<int>& vector,int ini, int fin) {
  int i = ini, f = fin, pivote = vector[(i+f)/2];
  while(i < f) {
    while(vector[i] < pivote) i++;//se para en pivote
    while(vector[f] > pivote) f--;//se para en pivote
    if(i <= f) { 
      int aux = vector[i];
      vector[i] = vector[f];
      vector[f] = aux;
      i++;
      f--;
    }
  }
  //quicksort primera mitad
  if(ini < f) quicksort(vector, ini, f);
  //quicksort segunda mitad
  if(i < fin) quicksort(vector, i, fin);
}

int main() {
  vector<int> v = {4,5,6,2,8};

  quicksort(v,0,v.size()-1);
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
}
