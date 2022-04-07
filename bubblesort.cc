#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> sec = {5,6,3,2,34,65,32,67,4,32,57,-1};
  int size = sec.size(), maxpos = size - 1, aux;
  bool changed = false;
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < maxpos; j++) {
      if(sec[j] > sec[j+1]) {
        aux = sec[j];
        sec[j] = sec[j+1];
        sec[j+1] = aux;
        changed = true;
      }
    }
    if(!changed) break;
    maxpos--;
    changed = false;
  }


  for(int i = 0; i < size; i++) {
    cout << sec[i] << ' ';
  }
  return 0;
}
