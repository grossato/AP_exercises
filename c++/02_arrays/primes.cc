#include<iostream>
bool primecheck(int cur){
  int i;

  for(i=2;i<cur;i++){
     
    if(cur%i==0){
      return false;
	}
  }

  return true;

  }
 int main(){
   int i,j;
   std::size_t n;
    n=50;
  int* a{new int [n]};
   
 int b=0;
 a[0]=2;
  for(i=3;i<100;i++){
     if(primecheck(i)){
     b++;
    
 
      
               
      a[b]=i;

      

  
    
    }
  
    

  }
  for(i=0;i<=b;i++) {
    std::cout << a[i]<< "  ";
  }

 }

