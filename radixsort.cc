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
    }
    cola.clear();
    copy.clear();
    for(int i = 0; i < c0.size(); i++) {
      cola.push_back(c0[i]);  
      copy.push_back(c0[i]/10);
    }
    c0.clear();
    for(int i = 0; i < c1.size(); i++) {
      cola.push_back(c1[i]);  
      copy.push_back(c1[i]/10);
    }
    c1.clear();
    for(int i = 0; i < c2.size(); i++) {
      cola.push_back(c2[i]);
      copy.push_back(c2[i]/10);
    }
    c2.clear();
    for(int i = 0; i < c3.size(); i++) {
      cola.push_back(c3[i]);
      copy.push_back(c3[i]/10);
    }
    c3.clear();
    for(int i = 0; i < c4.size(); i++) {
      cola.push_back(c4[i]);
      copy.push_back(c4[i]/10);
    }
    c4.clear();
    for(int i = 0; i < c5.size(); i++) {
      cola.push_back(c5[i]);
      copy.push_back(c5[i]/10);
    }
    c5.clear();
    for(int i = 0; i < c6.size(); i++) {
      cola.push_back(c6[i]);  
      copy.push_back(c6[i]/10);
    }
    c6.clear();
    for(int i = 0; i < c7.size(); i++) {
      cola.push_back(c7[i]); 
      copy.push_back(c7[i]/10);
    }
    c7.clear();
    for(int i = 0; i < c8.size(); i++) {
      cola.push_back(c8[i]); 
      copy.push_back(c8[i]/10);
    }
    c8.clear();
    for(int i = 0; i < c9.size(); i++) {
      cola.push_back(c9[i]); 
      copy.push_back(c9[i]/10);
    }
    c9.clear();
    show(cola);
  }
}


int main() {
  vector<int> v = {23,99,23,67,89,32};
  radixsort(v,v.size());
  return 0;
}
