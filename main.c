#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
	int option, i, j, k, l, inf=0;
	char v[3][3] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'}, aux;
		
	printf("\t\tTic Tac Toe\n");
	printf("\n1.Play\n");
    printf("0.Exit\n");
    printf("\nOption: ");
 	scanf("%d", &option);
 	while ((getchar()) != '\n');
 	
 	switch(option)
    {
        
        case 1:
        	printf("\n\n\n\n");
        	for(k=0;k<3;k++)
        	{
        		for(l=0;l<3;l++)
        		{
        			printf("| %c |", v[k][l]);
				}
				printf("\n---------------");
				printf("\n");
			}
			
			printf("\n");
			
			while(inf==0)
			{
			printf("Player-X\n");
			printf("Choose a position:\n");
			aux = tolower(getchar());
			while ((getchar()) != '\n');
			
			for(k=0;k<3;k++)
			{
				for(l=0;l<3;l++)
				{
					if(aux==v[k][l])
					{
						v[k][l]='X';
					}
				}
			}
			i++;
			if(v[0][0]==v[1][1] && v[0][0]==v[2][2]
			 ||v[0][0]==v[0][1] && v[0][0]==v[0][2]
			 ||v[1][0]==v[1][1] && v[1][0]==v[1][2]
			 ||v[2][0]==v[2][1] && v[2][0]==v[2][2]
			 ||v[0][0]==v[1][0] && v[0][0]==v[2][0]
			 ||v[0][1]==v[1][1] && v[0][1]==v[2][1]
			 ||v[0][2]==v[1][2] && v[0][2]==v[2][2]
			 ||v[0][2]==v[1][1] && v[0][2]==v[2][0])
			 {
			 	for(k=0;k<3;k++)
        		{
        			for(l=0;l<3;l++)
        			{
        				printf("| %c |", v[k][l]);
					}
					printf("\n---------------");
					printf("\n");
				}
			 	printf("Player-1 Won!");
			 	exit(1);
			 }else if(i==9)
			 {
			 	printf("Cat's Game!\n");
			 	exit(1);
			 }
			
			for(k=0;k<3;k++)
        	{
        		for(l=0;l<3;l++)
        		{
        			printf("| %c |", v[k][l]);
				}
				printf("\n---------------");
				printf("\n");
			}
			printf("\n\n\n");
			
			printf("Player-O\n");
			printf("Choose a position: ");
			aux = tolower(getchar());
			while ((getchar()) != '\n');
			
			for(k=0;k<3;k++)
			{
				for(l=0;l<3;l++)
				{
					if(aux==v[k][l])
					{
						v[k][l]='O';
					}
				}
			}
			
			if(v[0][0]==v[1][1] && v[0][0]==v[2][2]
			 ||v[0][0]==v[0][1] && v[0][0]==v[0][2]
			 ||v[1][0]==v[1][1] && v[1][0]==v[1][2]
			 ||v[2][0]==v[2][1] && v[2][0]==v[2][2]
			 ||v[0][0]==v[1][0] && v[0][0]==v[2][0]
			 ||v[0][1]==v[1][1] && v[0][1]==v[2][1]
			 ||v[0][2]==v[1][2] && v[0][2]==v[2][2]
			 ||v[0][2]==v[1][1] && v[0][2]==v[2][0])
			 {
			 	for(k=0;k<3;k++)
        		{
        			for(l=0;l<3;l++)
        			{
        				printf("| %c |", v[k][l]);
					}
					printf("\n---------------");
					printf("\n");
				}
			 	printf("Player-2 Won!");
			 	exit(1);
			 }
			
			for(k=0;k<3;k++)
        	{
        		for(l=0;l<3;l++)
        		{
        			printf("| %c |", v[k][l]);
				}
				printf("\n---------------");
				printf("\n");
			}
			printf("\n\n\n");
			i++;
			}
        	break;
        	
    	case 0:
    		exit(1);
        	break;
		
		default:
			printf("Invalid Option!");
        	break;
    }
    
	return 0;
}
