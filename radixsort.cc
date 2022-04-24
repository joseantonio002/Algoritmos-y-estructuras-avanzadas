#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

int count_digit(int number) {
  return int(log10(number) + 1);
}

int getmaxval(vector<int> v) {
  int maxval = -312434;
  for(int i = 0; i < v.size(); i++) {
    if(v[i] > maxval) maxval = v[i];
  }
  return maxval;
}

void radixsort(vector<int>& cola, int size) {
  vector<int> c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
  //getmaxval de cola
  int maxval = getmaxval(cola);
  int ndigits = count_digit(maxval), module = 10, digit;
  vector<int> copy = cola;
  //bucle número de veces número de cifras mayor elemento, modulo 10*1..cifrasmayor
  //si un número es más pequeño y las cifras no dan para la vuelta simplemente va a la cola 0 (creo)
  for(int i = 0; i < ndigits; i++) {
    for(int i = 0; i < size; i++) {
      digit = (copy[i]%module);
      switch(digit) {
        case 0:
          c0.push_back(cola[i]);
          break;
        case 1:
          c1.push_back(cola[i]);
          break;
        case 2:
          c2.push_back(cola[i]);
          break;
        case 3:
          c3.push_back(cola[i]);
          break;
        case 4:
          c4.push_back(cola[i]);
          break;
        case 5:
          c5.push_back(cola[i]);
          break;
        case 6:
          c6.push_back(cola[i]);
          break;
        case 7:
          c7.push_back(cola[i]);
          break;
        case 8:
          c8.push_back(cola[i]);
          break;
        case 9:
          c9.push_back(cola[i]);
          break;
      }
      copy[i] = (copy[i]/10);
    }
    /*
    cola.clear();
    for(int i = 0; i < size; i++) {
      switch(i) {
        case 0:
          cola.push_back(c0[0]);
          c0.erase(c0.begin());
          break;
        case 1:
          cola.push_back(c1[0]);
          c1.erase(c1.begin());
          break;
        case 2:
          cola.push_back(c2[0]);
          c2.erase(c2.begin());
          break;
        case 3:
          cola.push_back(c3[0]);
          c3.erase(c3.begin());
          break;
        case 4:
          cola.push_back(c4[0]);
          c4.erase(c4.begin());
          break;
        case 5:
          cola.push_back(c5[0]);
          c5.erase(c5.begin());
          break;
        case 6:
          cola.push_back(c6[0]);
          c6.erase(c6.begin());
          break;
        case 7:
          cola.push_back(c7[0]);
          c7.erase(c7.begin());
          break;
        case 8:
          cola.push_back(c8[0]);
          c8.erase(c8.begin());
          break;
        case 9:
          cola.push_back(c9[0]);
          c9.erase(c9.begin());
          break;
      }
    }*/
  }
}


int main() {
  vector<int> v = {45,432,121,34,5,3,23,34432};
  radixsort(v,v.size());
  return 0;
}
