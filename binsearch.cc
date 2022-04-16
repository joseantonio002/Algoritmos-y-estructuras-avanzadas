#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int> vec = {0,1,2,3,4,5,6,7,8,9,10,11};
  int ini = 0, fin = vec.size() - 1, media, find = 12;
  while(ini <= fin) {
    media = (ini+fin)/2;
    if(vec[media] == find) {
      cout << "found in " << media << endl;
      return 0;
    }
    else if(vec[media] >= find) {
      fin = media - 1;
    }
    else {
      ini = media + 1;
    }
  }
  if(vec[ini] == find) {
    cout << "found in " << media << endl;
  }
  else {
    cout << "not found" << endl;
  }
  return 0;
}
