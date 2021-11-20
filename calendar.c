#include<stdio.h>
int main()
{
    int i,j,totalDays,year,day;
    char *month[]={"January","February","march","April","May","June","July","August","september","October","November","December"};
    int totalDaysInmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char comment;

    printf("Enter a year : ");
    scanf("%d",&year);

    
         day =(year*365 +((year-1)/4)-((year-1)/100)+((year-1)/400)) % 7;
        

    printf("\n\n                                                       ------------------------------ Welcome to %d -----------------------\n\n",year);
    
    //check If it is Leap year

    if((year%400==0) || (year%100!=0 && year%4==0))
        totalDaysInmonth[1]=29;

    int weekDays,space;

    weekDays= day;

    for(i=0;i<12;i++)
        {
            
        printf("\n\n\n------------------%s-------------------\n\n",month[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");

        

        for(space=1;space<=weekDays;space++)
            {
                printf("      ");
            }

        totalDays=totalDaysInmonth[i];
        for(j=1;j<=totalDays;j++)
            {
                printf("%6d",j);
                weekDays++;
                if(weekDays>6)
                   {
                     
                    weekDays=0;
                    printf("\n") ;
                   
                   }
        }






}
printf("\n\nLeave a comment :  ");
scanf("%c ",&comment);
printf("\n\nThanks for your comment :) \n\n");

}