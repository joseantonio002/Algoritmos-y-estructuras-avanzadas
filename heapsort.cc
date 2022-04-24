//ESTO NO FUNCIONA
#include <iostream>
#include <vector>
using namespace std;

void baja( int i, vector<int>& sec, int n) {
  int h1,h2,h;
  while ( 2*i <= n ){
    h1 = 2*i ; 
    h2 = h1 + 1 ;
    if (h1 == n) h = h1;
    else if (sec[h1] > sec[h2]) h = h1; 
    else h = h2 ;
    if (sec[h] <= sec[i]) break ; 
    else {
      int aux = sec[i];
      sec[i] = sec[h];
      sec[h] = aux;
      i = h ;
    } 
  } 
} 

void heapsort(vector<int>& sec, int n ) {
  for (int i = n/2; i > 0; i--)
    baja(i, sec, n) ;
  for (int i = n; i > 1; i--) {
    int aux = sec[1];
    sec[1] = sec[i];
    sec[i] = aux;
    baja(1,sec,i-1) ;
  }
} 



int main() {
  vector<int> v = {36,0,3,47,1243,40,9,24};
  heapsort(v, v.size() - 1);
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  return 0;
}
