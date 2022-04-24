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
    cout << "factor: " << factor << endl;
    for(int i = 0; (i+factor) < size; i++) {
      if(vector[i+factor] < vector[i]) {
        swap(vector[i+factor], vector[i]);
      }
    }
    factor = factor * delta;
  }

  for(int i = 0; i < size; i++) {
    cout << vector[i] << ' ';
  }
  cout << endl;
  
  return 0;
}
