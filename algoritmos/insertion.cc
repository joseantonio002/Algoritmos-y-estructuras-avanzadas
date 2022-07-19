#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {5,6,3,2,34,65,32,67,4,32,57};
  int j, aux;
  for(int i = 1; i < v.size(); i++) {
    j = i;
    while(j != 0 && v[j-1] > v[j]) {
      aux = v[j];
      v[j] = v[j-1];
      v[j-1] = aux;
      j--;
    }
  }
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  return 0;
}
