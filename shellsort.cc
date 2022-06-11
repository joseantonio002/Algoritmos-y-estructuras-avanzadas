#include <iostream>
#include <vector>
using namespace std;

//TECNICAMENTE NO FUNCIONA PERO CREO QUE COMO PSEUDOCODIGO ESTA BIEN

/*
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
  if(posizq > cen) { //si falta por colocar elementos del trozo derecho
    for(int i = posder; i <= fin; i++) {
      aux[posaux] = sec[i];
      posaux++;
    }  
  }
  if(posder > fin) { //si falta por colocar elementos del trozo izquierdo
    for(int i = posizq; i <= cen; i++) {
      aux[posaux] = sec[i];
      posaux++;
    }  
  }
  for(int i = ini; i <= fin; i++) {
    sec[i] = aux[i];
  }
  
}*/


void Mezcla (vector<int>& sec, int ini,int cen,int fin){ 
  int i = ini, j = cen+1;
  vector<int> aux(sec.size());
  for (int k = ini; k <= fin; k++){
    if ((i < cen && j > fin)||( sec[i] < sec[j])){
      aux[k] = sec[i];
      i++;
    }
    else { 
      aux[k] = sec[j];
      j++;
    }
  }
  for (int k = ini; k <= fin; k++)
    sec[k] = aux[k] ;
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
