#include <stdio.h>
void main()
{
	int ma[3][3],mb[3][3],c[3][3],i,j;
	
	printf("enter the value of the matrix a:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%i",&ma[i][j]);

	printf("enter the vvalues of the matrix b:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%i",&mb[i][j]);

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			c[i][j]=ma[i][j]+mb[i][j];
	printf("the sum of the matrices is:\n");

	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
			printf("%i",c[i][j]);
		printf("\n");
	}
	
}