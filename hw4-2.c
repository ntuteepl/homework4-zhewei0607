#include<stdio.h>
#include<stdlib.h>>

main()
{
    int account,key,i,num,position[6][3];
    position[0][0]=123;    //±b¸¹1
    position[0][1]=456;    //±K½X1
    position[0][2]=9000;   //¾lÃB1
    position[1][0]=456;    //±b¸¹2
    position[1][1]=789;    //±K½X2
    position[1][2]=5000;   //¾lÃB2
    position[2][0]=789;    //±b¸¹3
    position[2][1]=888;    //±K½X3
    position[2][2]=6000;   //¾lÃB3
    position[3][0]=336;    //±b¸¹4
    position[3][1]=558;    //±K½X4
    position[3][2]=10000;  //¾lÃB4
    position[4][0]=775;    //±b¸¹5
    position[4][1]=666;    //±K½X5
    position[4][2]=12000;  //¾lÃB5
    position[5][0]=566;    //±b¸¹6
    position[5][1]=221;    //±K½X6
    position[5][2]=7000;   //¾lÃB6
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
         scanf("%d%d",&account,&key);
         if(account==123)
         {
             if(key==456)
             {
             printf("9000\n");
             }
             else
             printf("error\n");
         }
         if(account==456)
         {
              if(key==789)
             {
             printf("5000\n");
             }
             else
             printf("error\n");
         }
         if(account==789)
         {
              if(key==888)
             {
             printf("6000\n");
             }
             else
             printf("error\n");
         }
         if(account==336)
         {
              if(key==558)
             {
             printf("10000\n");
             }
             else
             printf("error\n");
         }
         if(account==775)
         {
              if(key==666)
             {
             printf("12000\n");
             }
             else
             printf("error\n");
         }
         if(account==566)
         {
              if(key==221)
             {
             printf("7000\n");
             }
             else
             printf("error\n");
         }
    }

}

