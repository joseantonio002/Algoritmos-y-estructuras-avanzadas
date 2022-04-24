#include <iostream>
#include <vector>
using namespace std;

int main() {
  float delta;
  cin >> delta;
  vector<int> vector = {452,1324,12,1243,45,0,2};
  int size = vector.size(), factor;
  factor = delta * size;
  while(factor > 0) {
    for(int i = factor; i < size; i++) {
      int tempt = vector[i], j;
      for(j = i; j >= factor && vector[j-factor]>tempt; 
      j -= factor) {
        vector[j] = vector[j-factor];
      }
      vector[j] = tempt;
    }
    factor = factor * delta;
  }

  for(int i = 0; i < size; i++) {
    cout << vector[i] << ' ';
  }
  cout << endl;
  
  return 0;
}
