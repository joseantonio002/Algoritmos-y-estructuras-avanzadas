//ESTO NO FUNCIONA
#include <iostream>
#include <vector>
using namespace std;

/*
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
*/

// C++ program for implementation of Heap Sort
//https://www.youtube.com/watch?v=MtQL_ll5KhQ
//https://www.geeksforgeeks.org/heap-sort/
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    //mira un subtree (una raiz y dos hijos),
    //si el subtree no está ordenado (el mayor de los
    //de los tres nodos no es la raíz) ordena y
    //aplica recursivamente a la posición del largest
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        //basicamente como intercambiaste un nodo ahora
        //tienes que mirar sus hijos y así sucesivamente
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heapsort(vector<int>& arr, int n) {
    // Build heap (rearrange array)
    //hacer lo de heapify de la mitad hacia abajo,
//los hijos de la mitad son los últimos yasísucesivamente
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        //el root es el mayor elemento
        //movemos el root al final del array (arbol)
        //y ponemos en la pos 0 al último elemento
        swap(arr[0], arr[i]);
        //volvemos a hacer heap sin el último elemento
        //(ya ordenado)
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
 
/* A utility function to print array of size n */
void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

/*Básicamente:
1)Crear heap a partir de un array haciendo heapify
desde la posición de la mitad (la función heapify se encarga de ello)
2)Como tenemos un heap la primera posición del array será el mayor o menor elemento, lo ponemos al final del array y volvemos a hacer el heap menos la posición final
3)Repetimos*/


int main() {
  vector<int> v = {36,0,3,47,1243,40,9,24};
  heapsort(v, v.size());
  printArray(v,v.size());
  return 0;
}
