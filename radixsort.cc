#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

void show(vector<int> v) {
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  cout << endl;
}

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
    cola.clear();
    for(int i = 0; i < 10; i++) {
      switch(i) {
        case 0:
          for(int i = 0; i < c0.size(); i++) {
            cola.push_back(c0[i]);      
          }
          c0.clear();
          break;
        case 1:
          for(int i = 0; i < c1.size(); i++) {
            cola.push_back(c1[i]);      
          }
          c1.clear();
          break;
        case 2:
          for(int i = 0; i < c2.size(); i++) {
            cola.push_back(c2[i]);      
          }
          c2.clear();
          break;
        case 3:
          for(int i = 0; i < c3.size(); i++) {
            cola.push_back(c3[i]);      
          }
          c3.clear();
          break;
        case 4:
          for(int i = 0; i < c4.size(); i++) {
            cola.push_back(c4[i]);      
          }
          c4.clear();
          break;
        case 5:
          for(int i = 0; i < c5.size(); i++) {
            cola.push_back(c5[i]);      
          }
          c5.clear();
          break;
        case 6:
          for(int i = 0; i < c1.size(); i++) {
            cola.push_back(c6[i]);      
          }
          c6.clear();
          break;
        case 7:
          for(int i = 0; i < c7.size(); i++) {
            cola.push_back(c7[i]);      
          }
          c7.clear();
          break;
        case 8:
          for(int i = 0; i < c8.size(); i++) {
            cola.push_back(c8[i]);      
          }
          c8.clear();
          break;
        case 9:
          for(int i = 0; i < c9.size(); i++) {
            cola.push_back(c9[i]);      
          }
          c9.clear();
          break;
      }
    }
  }
}


int main() {
  vector<int> v = {45,432,121,34,5,3,23,34432};
  radixsort(v,v.size());
  show(v);
  return 0;
}
