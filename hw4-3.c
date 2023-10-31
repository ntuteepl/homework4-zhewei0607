#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,b,c,d,e,f,num,s1,s2;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    num=3;
    if(a>=c)
    {
        if(a>=c>=e)
        {
            s1=1;
           if(f<=c)
           {
               num=num-1;
               s2=1;
           }
           if(d<=a)
           {
               num=num-1;
               s2=2;
           }
           if(f<=a && f>c && d>a)
           {
               num=num-1;
               s2=3;
           }
        }
        else if(a>=e>=c)
        {
            s1=2;
           if(d<=e)
           {
               num=num-1;
               s2=4;
           }
           if(f<=a)
           {
               num=num-1;
               s2=5;
           }
           if(d<=a && d>e && f>a)
           {
               num=num-1;
               s2=6;
           }
        }
        else
        {
            s1=3;
           if(d<=a)
           {
               num=num-1;
               s2=7;
           }
           if(b<=e)
           {

               num=num-1;
               s2=8;
           }
           if(d<=e && d>a && b>e)
           {
              num=num-1;
              s2=9;
           }
        }
    }
    else
    {
        if(c>=a>=e)
        {
            s1=4;
           if(f<=a)
           {
               num=num-1;
               s2=10;
           }
           if(b<=c)
           {
               num=num-1;
               s2=11;
           }
           if(f<=c && f>a && b>c)
           {
               num=num-1;
               s2=12;
           }
        }
        else if(c>=e>=a)
        {
            s1=5;
           if(b<=e)
           {
               num=num-1;
               s2=13;
           }
           if(f<=c)
           {
               num=num-1;
               s2=14;
           }
           if(b<=d && b>e && f>c)
           {
               num=num-1;
               s2=15;
           }
        }
        else
        {
            s1=6;
           if(b<=c)
           {
               num=num-1;
               s2=16;
           }
           if(d<=e)
           {
               num=num-1;
               s2=17;
           }
           if(b<=e && b>c && d>e)
           {
               num=num-1;
               s2=18;
           }
        }
    }
    printf("%d\n",num);
    if(num==3)
    {
        printf("Driver 1's schedule is %d %d\n",a,b);
        printf("Driver 2's schedule is %d %d\n",c,d);
        printf("Driver 3's schedule is %d %d",e,f);
    }
    if(num==2)
    {
        if(s2==1)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",e,f,c,d);
        printf("Driver 2's schedule is %d %d\n",a,b);
        }
        if(s2==2)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",c,d,a,b);
        printf("Driver 2's schedule is %d %d\n",e,f);
        }
        if(s2==3)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",e,f,a,b);
        printf("Driver 2's schedule is %d %d\n",c,d);
        }
        if(s2==4)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",c,d,e,f);
        printf("Driver 2's schedule is %d %d\n",a,b);
        }
        if(s2==5)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",e,f,a,b);
        printf("Driver 2's schedule is %d %d\n",c,d);
        }
        if(s2==6)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",c,d,a,b);
        printf("Driver 2's schedule is %d %d\n",e,f);
        }
       if(s2==7)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",c,d,a,b);
        printf("Driver 2's schedule is %d %d\n",e,f);
        }
        if(s2==8)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",a,b,e,f);
        printf("Driver 2's schedule is %d %d\n",c,d);
        }
        if(s2==9)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",c,d,e,f);
        printf("Driver 2's schedule is %d %d\n",a,b);
        }
        if(s2==10)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",e,d,a,b);
        printf("Driver 2's schedule is %d %d\n",c,d);
        }
        if(s2==11)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",a,b,c,d);
        printf("Driver 2's schedule is %d %d\n",e,f);
        }
        if(s2==12)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",e,f,c,d);
        printf("Driver 2's schedule is %d %d\n",a,b);
        }if(s2==13)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",a,b,e,f);
        printf("Driver 2's schedule is %d %d\n",c,d);
        }
        if(s2==14)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",e,f,c,d);
        printf("Driver 2's schedule is %d %d\n",a,b);
        }
        if(s2==15)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",a,b,c,d);
        printf("Driver 2's schedule is %d %d\n",e,f);
        }if(s2==16)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",a,b,c,d);
        printf("Driver 2's schedule is %d %d\n",e,f);
        }
        if(s2==17)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",c,d,e,f);
        printf("Driver 2's schedule is %d %d\n",a,b);
        }
        if(s2==18)
        {
        printf("Driver 1's schedule is %d %d %d %d\n",a,b,e,f);
        printf("Driver 2's schedule is %d %d\n",c,d);
        }
    }
    if(num==1)
    {
        if(s1==1)
        {
        printf("Driver 1's schedule is %d %d %d %d %d %d\n",e,f,c,d,a,b);
        }
        if(s1==2)
        {
        printf("Driver 1's schedule is %d %d %d %d %d %d\n",c,d,e,f,a,b);
        }
        if(s1==3)
        {
        printf("Driver 1's schedule is %d %d %d %d %d %d\n",c,d,a,b,e,f);
        }
        if(s1==4)
        {
        printf("Driver 1's schedule is %d %d %d %d %d %d\n",e,f,a,b,c,d);
        }
        if(s1==5)
        {
        printf("Driver 1's schedule is %d %d %d %d %d %d\n",a,b,e,f,c,d);
        }
        if(s1==6)
        {
        printf("Driver 1's schedule is %d %d %d %d %d %d\n",a,b,c,d,e,f);
        }
    }
}


