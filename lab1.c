#include<stdio.h>

int main()
{
	int i,j,table[8][9] ={0};
	printf("p\tq\tr\t~r\tqVr\tp->(qVr)\t~q\tp^~q\tp^~q -> r\n");
	printf("\n");
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 9; j++)
		{
			// P
			if(j == 0)
			{
				if(i < 4){
					table[i][j] = 1;
				}
				else
				{
					table[i][j] = 0;
				}		
			}
			// Q
			else if(j == 1)
			{
				if(i == 0 || i == 1 || i == 4 || i == 5)
				{
					table[i][j] = 1;
				}
				else
				{
					table[i][j] = 0;
				}
			}
			// R
			else if(j == 2)
			{
				if(i%2 == 0)
				{
					table[i][j] = 1;
				}
				else
				{
					table[i][j] = 0;
				}
			}
			// ~R
			else if(j == 3)
			{
				if(table[i][2] != 0)
				{
					table[i][j] = 0;
				}
				else
				{
					table[i][j] = 1;
				}
			}
			// q V r
			else if(j == 4)
			{
				if(table[i][1] | table[i][2] == 1) 
				{
					table[i][j] = 1;
				}
				else
				{
					table[i][j] = 0;
				}
			}
			// p -> (q v r)
			else if(j == 5)
			{
				if(table[i][0] <= table[i][4])
				{
					table[i][j] = 1;
				}
				else
				{
					table[i][j] = 0;
				}
			}
			// ~q
			else if(j == 6)
			{
				if(table[i][1] != 0) 
				{
					table[i][j] = 0;
				}
				else
				{
					table[i][j] = 1;
				}
			}
			// p ^ ~q
			else if(j == 7)
			{
				if(table[i][0] & table[i][6] == 1)
				{
					table[i][j] = 1;
				}
				else
				{
					table[i][j] = 0;
				}
			}
			// p^~q -> r
			else if(j == 8)
			{
				if(table[i][7] <= table[i][2])
				{
					table[i][j] = 1;	
				}
				else
				{
					table[i][j] = 0;
				}
			}
			printf("%d\t",table[i][j]);
		}
		printf("\n");
	}
	
	// bitwise section
	unsigned int num = 1592;
	int c = 0;
	c = num >> 7;
	unsigned int p = c;
}

