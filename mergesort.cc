#include <iostream>
#include <vector>
using namespace std;


void Mezcla (vector<int>& sec,int ini,int cen,int fin){ 
  int posizq = ini, posder = cen+1, posaux = 0;
  vector<int> aux(sec.size());
  while(posizq <= cen && posder <= fin) {
    if(sec[posizq] < sec[posder]) {
      aux[posaux] = sec[posizq];
      posizq++;
      posaux++;
    }
    else {
      aux[posaux] = sec[posder];
      posder--;
      posaux++;
    }
  }
  
}




void Msort (vector<int>& sec,int ini,int fin){
    if (ini < fin){
       int cen = (ini + fin) / 2 ;
      //ordena primera mitad
       Msort(sec, ini, cen) ;
      //ordena segunda mitad
       Msort(sec, cen+1, fin) ;
      //mezcla ambas listas ordenadas
       Mezcla(sec, ini, cen, fin) ;
    } 
} 

int main() {
    vector<int> v = {45,2,34,65,89,0,4,46,49,42,10244,234,8};
   Msort(v, 0, v.size() - 1);
   for(int i = 0; i < v.size(); i++) {
     cout << v[i] <<' ';
   }
    return 0;
}
