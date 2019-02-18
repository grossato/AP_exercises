#include<iostream>

bool primecheck(int *a,int cur, int dim){
  for(int i=0;i<dim;i++)
    {
      if(cur%a[i]==0) return 0;
            
    }
  
  return 1;

}


int main()
{
  
    int * a{new int[50]};
    int count{0};

    for (int  i=2; i < 100; ++i)
      {
   
    
	if (primecheck(a,i,count))
        {   count++;
            a[count] = i;
        }
    }

    return 0;
}
