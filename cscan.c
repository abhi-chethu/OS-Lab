#include<stdio.h>
#include<stdlib.h>

int main()
{
    int RQ[100],i,j,n,TotalHeadMoment=0,initial, size, move;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
        scanf("%d",&RQ[i]);
    printf("Enter the initial head position\n");
    scanf("%d",&initial);
    printf("Enter the total disk size\n");
    scanf("%d",&size);
    printf("Enter the head movement direction for high 1 and for low 0\n");
    scanf("%d",&move);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(RQ[j]>RQ[j+1])
            {
                int temp;
                temp=RQ[j];
                RQ[j]=RQ[j+1];
                RQ[j+1]=temp;
            }
        }
    }
    int index;
    for(i=0;i<n;i++)
    {
        if(initial<RQ[i])
        {
            index=i;
            break;
        }
    }
    if(move==1)
    {
        printf("SEquence of request acess:\n");
        for(i=index;i<n;i++)
    {
        printf("%d ",RQ[i]);
        TotalHeadMoment = TotalHeadMoment + abs(RQ[i]-initial);
        initial = RQ[i];
    }
    TotalHeadMoment = TotalHeadMoment + abs(size-RQ[i-1]-1);
    TotalHeadMoment = TotalHeadMoment + abs(size-1-0);
    initial = 0;
for(i=0; i<index; i++)
    {
        printf("%d ",RQ[i]);
        TotalHeadMoment = TotalHeadMoment + abs(RQ[i]-initial);
        initial = RQ[i];
    }
    }
    else
    {
        printf("Sequence of request access:\n");
        for(i=index-1;i>=0;i--)
        {
            printf("%d ",RQ[i]);
            TotalHeadMoment = TotalHeadMoment + abs(RQ[i]-initial);
            initial = RQ[i];
        }
    }
    printf("\nTotal head moment is %d",TotalHeadMoment);
    return 0;
    }
//output
Enter the number of Requests
7
Enter the Requests sequence
82
170
43
140
24
16
190
Enter the initial head position
50
Enter the total disk size
200
Enter the head movement direction for high 1 and for low 0
1
SEquence of request acess:
82 140 170 190 16 24 43 
Total head moment is 391
