#include <stdio.h>


int main()

{
    
  int n2,lcm;
    
  printf("Enter two positive integers: ");
    
  scanf("%d %d",&n1,&n2);

    
  lcm = (n1>n2)?n1:n2;

    
   
  while(1)
       
    {
          
       if(lcm%n1==0 && lcm%n2==0)
          
         {
            
            printf("The LCM of %d and %d is %d.",n1,n2,lcm);
            
             
          
         }
        
          
         ++lcm;
       
    }
    
   return 0;

}
