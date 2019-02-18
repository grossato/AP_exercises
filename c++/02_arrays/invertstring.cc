#include<iostream>

template <typename T>
T* get(int n);
template <typename T>
T* reverse(int n,T *ind);
int main(){


std::cout << "Please insert array lenght: \n";
std::size_t n;
std::cin >> n;
 double * b;

 b=get<double>(n);


 //std::cout << *b;
 reverse<double>(n,b);
 delete[] b;
}
template <typename T>
T *get(int n){ 
  T* da{new T [n]};  // allocated on the HEAP, or free-store
  std::cout << "Please insert the values: \n";
  for (std::size_t i{0}; i < n; ++i)
    std::cin>> da[i];
return  da;


}
template <typename T>
T* reverse(int n,T *ind){
  
  for(int i=n-1;i>=0;i--){
    std::cout << ind[i]<< "\n";
  }


}

