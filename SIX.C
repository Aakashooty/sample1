#include<stdio.h>
#include<conio.h>

int get();
int t1,t2,t3,t4,tot,ch,c,d,sml=1;
int ck,pp,sd,i;
int pwd,amount;
int pw;
void main()
{
FILE *f1,*f2,*f3,*f4;
pw=1234;
do
{
clrscr();
printf("\n\t\t***VENDING MACHINE***");
printf("\n\n");
f1=fopen("c:\\users\\my\\desktop\\aakash\\a1.txt","r");
ck=getw(f1);
fclose(f1);
f2=fopen("c:\\users\\my\\desktop\\aakash\\a2.txt","r");
pp=getw(f2);
fclose(f2);
f3=fopen("c:\\users\\my\\desktop\\aakash\\a3.txt","r");
sd=getw(f3);
fclose(f3);

printf("\n\t\tMenu :\n\t\t\t1.coke(%d)\n\t\t\t2.Pepsi(%d)\n\t\t\t3.Soda(%d)\n\t\t\t4.Cancel\n\t\t\t5.Admin",ck,pp,sd);
printf("\n\t\tSelect the item number that you want to drink ! %c !: ",sml);
scanf("%d",&ch);
switch(ch)
{
case 1:
{
if(ck>0){
printf("\n\t\tPay Rupee 25 to get a Coke");
printf("\n");
tot=get();
printf("\n\t\tEnter '1' to confirm the item and '0' to cancel the item: ");
scanf("%d",&c);

if(c==1){
if(tot>=25)
{
tot=tot-25; ck-=1;
f1=fopen("c:\\users\\my\\desktop\\aakash\\a1.txt","w");
putw(ck,f1);
fclose(f1);
printf("\n\t\t\tGet the -> |-COKE-|");
printf("\n");
printf("\n\t\tThe Balance amount= %d",tot);
amount+=25;
f4=fopen("c:\\users\\my\\desktop\\aakash\\a4.txt","w");
putw(amount,f4);
fclose(f4);
}
else
{
printf("\nThe paid amount is insufficient to buy a coke!! please try again ");
printf("%c",sml);
printf("\n");
printf("\n\t\tThe Refund amount= %d",tot);
}
}
else
{
printf("\n\t\tRefund amount= %d",tot);
} }
else
printf("Sorry item not available %c ",sml);
break;
}
case 2:
{   if(pp>0){
printf("\n\t\tPay Rupee 35 to get a Pepsi");
printf("\n");
tot=get();
printf("\n\t\tEnter '1' to confirm the item and '0' to cancel the item: ");
scanf("%d",&c);
if(c==1){
if(tot>=35)
{
tot=tot-35;       pp-=1;
f2=fopen("c:\\users\\my\\desktop\\aakash\\a2.txt","w");
putw(pp,f2);
fclose(f2);
printf("\n\t\t\tGet the -> |-PEPSI-|");
printf("\n");
printf("\n\t\tThe Balance amount= %d",tot);
amount+=35;
f4=fopen("c:\\users\\my\\desktop\\aakash\\a4.txt","w");
putw(amount,f4);
fclose(f4);
}
else
{
printf("\nThe paid amount is insufficient to buy a coke!! please try again ");
printf("%c",sml);
printf("\n");
printf("\n\t\tThe Refund amount= %d",tot);
}
}
else
{
printf("\n\t\tRefund amount= %d",tot);
}            }
else
printf("Sorry item not available %c ",sml);
break;
}
case 3:
{if(sd>0){
printf("\n\t\tPay Rupee 45 to get a Soda");
printf("\n");
tot=get();
printf("\n\t\tEnter '1' to confirm the item and '0' to cancel the item: ");
scanf("%d",&c);
if(c==1){
if(tot>=45)
{
tot=tot-45;  sd-=1;
f3=fopen("c:\\users\\my\\desktop\\aakash\\a3.txt","w");
putw(sd,f3);
fclose(f3);
printf("\n\t\t\tGet the -> |-SODA-|");
printf("\n");
printf("\n\t\tThe Balance amount= %d",tot);
amount+=45;
f4=fopen("c:\\users\\my\\desktop\\aakash\\a4.txt","w");
putw(amount,f4);
fclose(f4);
}
else
{
printf("\nThe paid amount is insufficient to buy a coke!! please try again ");
printf("%c",sml);
printf("\n");
printf("\n\t\tThe Refund amount= %d",tot);
}
}
else
{
printf("\n\t\tRefund amount= %d",tot);
}       }
else
printf("Sorry item not available %c ",sml);
break;
}
case 4:
{
printf("\n");
printf("\n\t\tRequest done!!");
break;
}
case 5:
{
printf("\nEnter Password : ");
scanf("%d",&pwd);
if(pw==pwd)
{
printf("Hello admin %c",sml);
f1=fopen("c:\\users\\my\\desktop\\aakash\\a1.txt","r");
ck=getw(f1);
fclose(f1);
f2=fopen("c:\\users\\my\\desktop\\aakash\\a2.txt","r");
pp=getw(f2);
fclose(f2);
f3=fopen("c:\\users\\my\\desktop\\aakash\\a3.txt","r");
sd=getw(f3);
fclose(f3);
f4=fopen("c:\\users\\my\\desktop\\aakash\\a4.txt","r");
amount=getw(f4);
fclose(f4);


printf("\nNumber of item remaining :");
printf("\nCoke = %d ",ck);
printf("\nPepsi = %d ",pp);
printf("\nSoda = %d ",sd);
printf("\nAvailable amount = %d ",amount);
printf("\nPress 1 to reset 0 to exit : ");
scanf("%d",&i);
if(i==1)
{
printf("\nUpdate folloing values : ");
printf("\nCoke = ");
scanf("%d",&ck);
printf("\nPepsi = ");
scanf("%d",&pp);
printf("\nSoda = ");
scanf("%d",&sd);
f1=fopen("c:\\users\\my\\desktop\\aakash\\a1.txt","w");
putw(ck,f1);
fclose(f1);
f2=fopen("c:\\users\\my\\desktop\\aakash\\a2.txt","w");
putw(pp,f2);
fclose(f2);
f3=fopen("c:\\users\\my\\desktop\\aakash\\a3.txt","w");
putw(sd,f3);
fclose(f3);
amount=0;
f4=fopen("c:\\users\\my\\desktop\\aakash\\a4.txt","w");
putw(amount,f4);
fclose(f4);


}

}
else
printf("Wrong password");
break;
}
}
printf("\n");
printf("\n\t\tThank You!!");
printf("\n");
printf("\n\t\tPress '1' to !RESTART! and '0' to !Exit!! : ");
scanf("%d",&d);
}while(d==1);
getch();
}
int get()
{
printf("\n\t\tCoin types accepted 1,5,10 and 25");
printf("\n");
printf("\n\t\tEnter the no of '1' rupee coin: ");
scanf("%d",&t1);
printf("\n\t\tEnter the no of '5' rupee coin: ");
scanf("%d",&t2);
printf("\n\t\tEnter the no of '10' rupee coin: ");
scanf("%d",&t3);
printf("\n\t\tEnter the no of '25' rupee coin: ");
scanf("%d",&t4);
tot=1*t1+5*t2+10*t3+25*t4;
return tot;
}




