#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,n,TotalHeadMoment=0,initial;
    printf("Enter the number of request\n");
    scanf("%d",&n);
     printf("Enter the request sequence\n");
     for(i=0;i<n;i++)
     scanf("%d",&RQ[i]);
     printf("Enter the initial head position\n");
     scanf("%d",&initial);
       printf("SEquence of request acess:\n");
        for(i=0;i<n;i++)
    {
        printf("%d ",RQ[i]);
        TotalHeadMoment = TotalHeadMoment + abs(RQ[i]-initial);
        initial = RQ[i];
    }

     printf("\nTotal head moment is %d",TotalHeadMoment);
    return 0;
}
//output
Enter the number of request
7
Enter the request sequence
82
170
43
140
24
16
190
Enter the initial head position
50
SEquence of request acess:
82 170 43 140 24 16 190 
Total head moment is 642
