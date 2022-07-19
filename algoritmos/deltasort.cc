#include <iostream>
#include <vector>
using namespace std;


void deltasortcode( int delta, vector<int>& sec, int n) {
  int x,j;
  for (int i = delta; i < n; i++){
      x = sec[i];
      j = i;
      while ((j >= delta) && (x < sec[j - delta])){
         sec[j] = sec[j - delta];
         j = j - delta;
      } ;
   sec[j] = x;
  } 
} 


int main() {
  vector<int> sec = {45,2435,23,234,3,5,0,4245};
  int delta, n = sec.size();
  delta = n;
  while (delta > 1){
    delta = delta / 2;
    deltasortcode(delta,sec, n);
  } 
  for(int i = 0; i < n; i++) {
    cout << sec[i] << ' ';
  }
  return 0;
}
