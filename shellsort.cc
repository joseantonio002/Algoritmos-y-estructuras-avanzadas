#include <iostream>
#include <vector>
using namespace std;

void shellsort(vector<int>& vector, float delta) {
  int size = vector.size(), factor;
  factor = delta * size;
  while(factor > 0) {
    for(int i = factor; i < size; i++) {
      int tempt = vector[i], j;
      //mientras que queden posiciones detras (j >= factor) y el valor de la posición - factor este desordenado
      for(j = i; j >= factor && vector[j-factor]>tempt; 
      j -= factor) {
        vector[j] = vector[j-factor];
      }
      vector[j] = tempt;
    }
    factor = factor * delta;
  }
}

int main() {
  float delta;
  cin >> delta;
  vector<int> vector = {452,1324,12,1243,45,0,2,23,78,9,1,3466,99,98,11,100,18,89,44};
  shellsort(vector, delta);
  for(int i = 0; i < vector.size(); i++) {
    cout << vector[i] << ' ';
  }
  cout << endl;
  
  return 0;
}
