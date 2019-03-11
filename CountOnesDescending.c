#include <stdio.h>

int main()
{
    int arr[5] = {6,14,7,4,1};
    int finalarr[5][5];
    int i,n,onecount=0,temp1,temp2,j,k;
    
    for(i=0;i<5;i++)
    {
        n = arr[i];
        j=0;
        while(n!=0)
        {
            
            if(n%2==1)
            {
                onecount = onecount + 1;
            }
            n=n/2;
        }
        finalarr[i][j] = arr[i];
        j=j+1;
        finalarr[i][j] = onecount;
        onecount = 0;
    }
    for(i=0;i<4;i++)
    {
        for(j=1;j<2;j++)
        {
            if(finalarr[i][j] < finalarr[i+1][j])
            {
                
                temp1 = finalarr[i][j];
                finalarr[i][j] = finalarr[i+1][j];
                finalarr[i+1][j] = temp1;
                temp2 = finalarr[i][j-1];
                finalarr[i][j-1] = finalarr[i+1][j-1];
                finalarr[i+1][j-1] = temp2;
            }
             else if(finalarr[i][j] == finalarr[i+1][j])
            {
                if(finalarr[i][j] > finalarr[i+1][j])
                {
                temp2 = finalarr[i][j-1];
                finalarr[i][j-1] = finalarr[i+1][j-1];
                finalarr[i+1][j-1] = temp2;
                }
            }
           
        }
        
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",finalarr[i][j]);
        }
         printf("\n");
    }

    return 0;
}
