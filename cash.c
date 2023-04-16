#include <cs50.h>

#include <stdio.h>

#include <math.h>

int main(void)

{
    
	float n;
   
	 do
    
	{
        
	n = get_float("Change owed:");  	//prompt the user to enter the amount
    
	}
   
	while (n < 0);                  		//indicate that n should be positive
 
   
	int cent = round(n * 100);     		 //rounds to the nearest penny
    

	int q = cent / 25;              		//the amount divided by 25
    
	int d = (cent % 25) / 10;    		//the remainder divided by 10
    
	int ni = ((cent % 25) % 10) / 5;    	//the remainder by 5
    
	int p = ((cent % 25) % 10) % 5;    	//and the final remainder
  
    
	
	printf("%i coins\n", q + d + ni + p);       //adding all the coins

}
