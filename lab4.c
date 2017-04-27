#include<stdio.h>
int main(){
	int arr[4][4] = { {1, 1, 0, 0}, 
				   {0, 1, 1 ,0} ,
				   {0 , 1 , 0 ,0},
				   {1 , 1 , 0 , 1}};
	int q[20] = {0};
	int p[20] = {0};
	int i,j;
	for(i = 0; i < 4; i++)
	{
	    for(j = 0; j < 4; j++)
	    {
	       if(arr[i][j] == 1 && i == 0)
	       {
	           q[j] = 2;
	        
	       }

	       if(arr[i][j] == 1 && j == 0)
	       {
	           p[i] = 2;
	       }

	    }
        printf("\n");
	}
    for(i = 0 ; i < 4 ; i++)
    {
        for(j = 0; j < 4 ; j++)
        {
           if(p[i] == 2 && q[j] == 2)
           {
               arr[i][j] = 1;
           }
        }
    }	
	printf("w1\n");
    for(i = 0; i < 4 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }	
	// W2
    for( i = 0; i < 4 ;i++)
    {
        p[i] = 0;
        q[i] = 0;
    }
	for(i = 0; i < 4; i++)
	{
	    for(j = 0; j < 4; j++)
	    {
	       if(arr[i][j] == 1 && i == 1)
	       {
	           q[j] = 2;
	        
	       }

	       if(arr[i][j] == 1 && j == 1)
	       {
	           p[i] = 2;
	       }

	    }
        printf("\n");
	}	
    for(i = 0 ; i < 4 ; i++)
    {
        for(j = 0; j < 4 ; j++)
        {
           if(p[i] == 2 && q[j] == 2)
           {
               arr[i][j] = 1;
           }
        }
    }
	printf("w2\n");
    for(i = 0; i < 4 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
	// W3

   for( i = 0; i < 4 ;i++)
    {
        p[i] = 0;
        q[i] = 0;
    }
	
	for(i = 0; i < 4; i++)
	{
	    for(j = 0; j < 4; j++)
	    {
	       if(arr[i][j] == 1 && i == 2)
	       {
	           q[j] = 2;
	        
	       }

	       if(arr[i][j] == 1 && j == 2)
	       {
	           p[i] = 2;
	       }
	    }
        printf("\n");
	}	
    for(i = 0 ; i < 4 ; i++)
    {
        for(j = 0; j < 4 ; j++)
        {
           if(p[i] == 2 && q[j] == 2)
           {
               arr[i][j] = 1;
           }
        }
    }
		printf("w3\n");
    for(i = 0; i < 4 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    // W4
       for( i = 0; i < 4 ;i++)
    {
        p[i] = 0;
        q[i] = 0;
    }
	
	for(i = 0; i < 4; i++)
	{
	    for(j = 0; j < 4; j++)
	    {
	       if(arr[i][j] == 1 && i == 3)
	       {
	           q[j] = 2;
	        
	       }

	       if(arr[i][j] == 1 && j == 3)
	       {
	           p[i] = 2;
	       }

	    }
        printf("\n");
	}
    for(i = 0 ; i < 4 ; i++)
    {
        for(j = 0; j < 4 ; j++)
        {
           if(p[i] == 2 && q[j] == 2)
           {
               arr[i][j] = 1;
           }
        }
    }
	printf("w4\n");
    for(i = 0; i < 4 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }	
	return 0;
}

