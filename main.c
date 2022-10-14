#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int nor=0,noc=0,nob=0,amount=0,count=0;

int Menu();
void Showdetails();
void Delete();
void rikshaw();
void car();
void bike();

void main()
{
while(1){


switch(Menu()){
case 1:
    rikshaw();
    break;
case 2:
    car();
    break;
case 3:
    bike();
    break;
case 4:
    Showdetails();
    break;
case 5:
    Delete();
    break;
case 6:
    exit(0);
default:
    printf("Invalid Choice");
    }
}
getch();
}


int Menu(){
    int i;
printf("\n \n");
printf("\n 1. Enter Rikshaw");
printf("\n 2. Enter Car");
printf("\n 3. Enter Bike");
printf("\n 4. Show Status");
printf("\n 5. Clear Data");
printf("\n 6. Exit Now");
printf("\n \n Enter Your Choice ->");
scanf("%d",&i);

return (i);
}
void Showdetails(){
    printf("\n Number Of Bike= %d",nob);
    printf("\n Number Of Car= %d",noc);
    printf("\n Number Of Rikshaw= %d",nor);
    printf("\n Total Vehicles= %d",count);
    printf("\n Total Amount Gained =%d",amount);
}
void Delete(){
    nob=0;
    noc=0;
    nor=0;
    count=0;
    amount=0;
}
void rikshaw(){
    printf("--------------------Entry Successful--------------------");
nor++;
amount=amount+50;
count++;

}
void car(){
    printf("--------------------Entry Successful--------------------");
    noc++;
    amount=amount+70;
    count++;
}
void bike(){
    printf("--------------------Entry Successful--------------------");
    nob++;
    amount=amount+20;
    count++;
}
