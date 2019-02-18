#include <iostream>

int main() {
  std::size_t n,m;
  n=1;
  m=2;
  int * a{new int[n]};
  int* b{new int[m]};
  b[0]=1;
  b[1]=2;
  a[0]=5;
  a[1]=b[1];
  delete[] b;
  std::cout << a[0] << "       "<< a[1];
   
  



}
