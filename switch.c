#include<stdio.h>
main()
{int choice=0;
 printf("enter the choice : ");
 scanf("%d",&choice);
 switch (choice)
 {case 1:
     printf("food item - burger \nprice - 129");
     break;
 case 2:
     printf("food item - pizza \nprice - 239");
  break;
 case 3:
 printf("food item - pasta\nprice - 179");
 break;
 case 4:
 printf("food item - fries \nprice - 99");
 break;
 case 5:
 printf("food item - sandwich \nprice - 149");
 break;
 default: 
 printf("use the default case");
 }
return 0;	
 }
 


