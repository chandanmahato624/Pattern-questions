#include <stdio.h>
int main()
{
     int a[3][5],i,j,c=0;
     printf("Enter Elements for Matrix of Size 3*5:\n\n");
     for(j=0;j<=2;j++) // j is used for rows
          for(i=0;i<=4;i++) // i is used for columns
          {
               scanf("%d",&a[j][i]);
          }
     /*Printing Matrix of Size 3*5*/
     printf("\nMatrix of Size 3*5: \n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=4;j++)
          {
               printf("%3d ",a[i][j]);
          }
          printf("\n");
     }
     /* Count the total number of zeros in matrix 3*5 */
     for(j=0;j<=2;j++)
          for(i=0;i<=4;i++)
               if(a[j][i]!=0)
                     c++;
     printf(" Non Zeros present in Above Matrix: %d",c);
     return 0;
}