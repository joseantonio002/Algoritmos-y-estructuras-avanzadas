#include <iostream>
#include <vector>
using namespace std;
int INT_MAX = +2147483647;

int main() {
  vector<int> sec = {5,6,3,2,34,65,32,67,4,32,57,-1};
  int size = sec.size();
  int minimo = INT_MAX, posminimo;
  for(int i = 0; i < sec.size(); i++) {
    for(int j = i; j < sec.size(); j++) {
      if(sec[j] < minimo) {
        minimo = sec[j];
        posminimo = j;
      }
    }
    sec[posminimo] = sec[i];
    sec[i] = minimo;
    minimo = INT_MAX;
  }

  for(int i = 0; i < size; i++) {
    cout << sec[i] << ' ';
  }
  return 0;
}
