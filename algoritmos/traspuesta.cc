#include <iostream>
#include <vector>
using namespace std;

bool bustraspues(vector<int>& v, int find) {
  for(int i = 0; i < v.size(); i++) {
    if(v[i] == find) {
      if(i != 0) {
        v[i] = v[i-1];
        v[i-1] = find;
      }
      return true;
    }
  }
  return false;
}

int main() {
    vector<int> v = {34,1,56,78,12,25};
    if(bustraspues(v,56)) {
      cout << "f" << endl;
      for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
      }
    }
    return 0;
}
