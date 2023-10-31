#include<stdio.h>
#include<stdlib.h>

main()
{
     int b,num,i,d;
     int a[60];
     scanf("%d",&num);
     for(i=0;i<num;i++)
     {
           scanf("%d",&a[i]);
     }
     for(i=0;i<num;i++)
     {
           int c=2;
           for(b=2;b<a[i];b++)
           {
                if((a[i]%b)==0)
                {
                printf("NO ");
                c=1;
                break;
                }

           }
           if(c!=1)
           {
                printf("YES ");
           }
     }
}

