#include<stdio.h>
int main()
{
   int balance,pin;
   char Continue;
    printf("Enter your balance:\n");
    scanf("%d",&balance);
    printf("Enter your 4 digit pin:\n");
    scanf("%d",&pin);
    int choice;
    do
   {
    printf(" Welcome to Mobile Banking NOCASH\n\n");
    printf("1. Send Money\n");
    printf("2. Add Money\n");
    printf("3. Check Balance\n");
    printf("4. Mobile Recharge\n");
    printf("5. Cash Out\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
  switch (choice)
     {
   case 1:
    printf("\nSend Money\n\n");
    printf("Enter Account Number:\n\n");
    int accountnum;
    scanf("%d",&accountnum);
    int amount;
    printf("\nEnter Amount:\n");
    scanf("%d",&amount);
    if (balance>=amount)
    {
    int pin1;
    printf("\nEnter Your PIN:\n\n");
    scanf("%d", &pin1);
    if(pin1>= 1000 && pin1<=9999 && pin==pin1 )
       {
            printf("\n%d was send to %d \n\n",amount,accountnum);
            balance=balance-amount;
       }
    else if (pin1>= 1000 && pin1<=9999 )
    {
        printf("\nWrong pin number.Please try again\n");
    }
    else
    {
        printf("\nPin number should be 4 digit");
    }
    }
    else
    {
        printf("\nYou Don't Have Sufficient Amount\n");
    }
    break;
   case 2:
    printf("\nAdd Money\n\n");
    printf("\nEnter Amount:\n");
    int add;
    scanf("%d",&add);
     printf("\nEnter Your PIN:\n\n");
    int pin1;
    scanf("%d", &pin1);
    if(pin1>= 1000 && pin1<=9999 && pin==pin1 )
    {
       printf("Do you want to credit %d to your account?\n type 1 for yes\n type 2 for no\n\n",add);
       int option;
       scanf("%d",&option);
       if (option==1)
    {
        printf("\n%d was credited to your account\n\n",add);
        balance=balance+add;
    }
    else if(option==2)
       {
       printf("\nEnd of the process\n\n");
       }
    else
    {
        printf("\nInvalid Operation\n\n");
    }

    }
    else
    {
        printf("\nPin number should be 4 digit");
    }

    break;
   case 3:
    printf("\nCheck Balance\n\n");
    printf("\nEnter Your PIN:\n\n");
    scanf("%d", &pin1);
    if(pin1>= 1000 && pin1<=9999 && pin==pin1 )
       {
             printf("\nYour Balance is %d \n\n",balance);
       }
    else if (pin1>= 1000 && pin1<=9999 )
    {
        printf("\nWrong pin number.Please try again\n");
    }
    else
    {
        printf("\nPin number should be 4 digit");
    }
    break;
   case 4:
    printf("\nMobile Recharge\n\n");
    printf("Enter Phone Number:\n\n");
    int phnnum,mr;
    scanf("%d",&phnnum);
    printf("\nEnter the Amount:\n\n");
    scanf("%d", &mr);
    if (mr<=balance){
    printf("\nEnter Your PIN:\n\n");
    scanf("%d", &pin1);
    if(pin1>= 1000 && pin1<=9999 && pin1==pin)
       {
           printf("\nDo you want to recharge %d with %d Tk?\ntype 1 for yes\ntype 2 for no\n\n\n",phnnum,mr);
           int option;
           scanf("%d",&option);
           if (option==1)
        {
           printf("\n%d bdt was recharged to %d\n\n",mr,phnnum);
           balance=balance-mr;
        }
           else if(option==2)
           printf("\nEnd of the process\n\n");
    else if (pin1>= 1000 && pin1<=9999 )
        {
           printf("\nWrong pin number.Please try again\n");
        }
        }
    else
     {
      printf("\nPin number should be 4 digit");
     }}
     else{printf("\n Sorry You don't have sufficient balance");}
    break;
   case 5:

     printf("\n:Cash Out\n\n");
     printf("Enter Account Number:\n\n");
     scanf("%d",&accountnum);
     int Amount;
     printf("\nEnter Amount:\n\n");
     scanf("%d",&Amount);
     if(Amount<=balance){
     if(Amount<=10000)
     {
     printf("\nEnter Your PIN:\n\n");
     int pin1;
     scanf("%d", &pin1);
       if(pin1>= 1000 & pin1<=9999 && pin==pin1)
       {
           printf("\nYou have successfully withdrawn %d bdt\n",amount);
           balance=balance-amount;
       }
       else if (pin1>= 1000 && pin1<=9999 )
        {
           printf("\nWrong pin number.Please try again\n");
        }

       else
       {
           printf("Pin number should be 4 digit");
       }
     }
     else
     {
         printf("Your withdrawn amount reached the limit of money transaction.Please contact to the bank for your transaction");
     }}
     else{printf("\n Sorry You don't have sufficient balance");}
     break;
    case 6:
        printf("\nExiting NOCASH... \nThank you for using our service!\n");
        return 0;
    default:
    printf("\nInvalid choice! Please try again.\n");
    break;
     }
    printf("\nDo you want to perform another transaction?\n Type 'y' or 'n':\n ");
    scanf(" %c",&Continue);
    }
    while (Continue=='y'||Continue=='Y');
    printf("\nThank you for using the mobile banking system!\n");

    return 0;
}
