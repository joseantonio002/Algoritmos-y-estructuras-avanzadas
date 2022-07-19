#include <iostream>
#include <vector>
using namespace std;

bool movalfrente(vector<int>& v, int find) {
  for(int i = 0; i < v.size(); i++) {
    if(v[i] == find) {
      if(i != 0) {
        int p = i, aux;
        while(p != 0) {
          aux = v[p - 1];
          v[p - 1] = v[p];
          v[p] = aux;
          p--;
        }
      }
      return true;
    }
  }
  return false;
}

int main() {
    vector<int> v = {34,1,56,78,12,25};
    if(movalfrente(v,25)) {
      cout << "f" << endl;
      for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
      }
    }
    return 0;
}
