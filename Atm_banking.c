#include<stdio.h>
#include<string.h>
#include<time.h>
int main()
{
                int pin=1234,entered_pin,count=0,option,amount=1;
                float balance=1000;
                int continue_transaction=1,otp=1020;

                time_t now;
                time(&now);
                printf("\t\t\t\t\t\t          %s\n",ctime(&now));
                printf("\t\t\t\t=======================  ***Welcome to AYM BANKING***  ========================\n");
                while(pin!=entered_pin)
                {
                                printf("\nEnter your pin: ");
                                scanf("%d",&entered_pin);
                                if(entered_pin!=pin)
                                {
                                                printf("\nInvalid pin!\a\n");
                                }
                                count++;

                                if((count == 3) && (entered_pin!=pin))
                                {
                                                printf("\nSession time out since you eneterd Invalid pin more than 3 time..\n");
                                                break;
                                }
                }
                if(count!=3)
                {
                                while(continue_transaction!=0)
                                {

                                                printf("\t\t\t==========================  ***Available Transaction service***  =============================\n");
                                                printf("\n1.Withdrawl\n\n2.Cash Deposite\n\n3.Check Balance\n\n4.Pin change\n");
                                                printf("\nPlease Select the option: ");
                                                scanf("%d",&option);

                                                switch (option)
                                                {
                                                                case 1:
                                                                                while(amount % 500 != 0)
                                                                                {
                                                                                                printf("\nEnter the amount: ");
                                                                                                scanf("%d",&amount);
                                                                                                if(amount % 500 != 0)
                                                                                                {
                                                                                                                printf("\nPlease enter the amount in multiple of 500 or 100\n");
                                                                                                }
                                                                                }
                                                                                if(balance<amount)
                                                                                {
                                                                                                printf("\nInsufficient balance!..\n");
                                                                                                amount=1;
                                                                                                break;
                                                                                }
                                                                                else
                                                                                {
                                                                                                balance-=amount;
                                                                                                printf("\nyou have withdrawl Rs.%d your new balance is Rs.%.2f\n",amount,balance);
                                                                                                printf("\n\t\t\t\t\t============= ***Thankyou for ATM banking *** ===============\n");
                                                                                                amount=1;
                                                                                                break;
                                                                                }
                                                                case 2:
                                                                                printf("\nPlease enter the amount: ");
                                                                                scanf("%d",&amount);
                                                                                balance+=amount;
                                                                                printf("\nYou have deposited Rs.%d your new balance if Rs.%.2f\n",amount,balance);
                                                                                printf("\n\t\t\t\t\t============= ***Thankyou for ATM banking *** ===============\n");
                                                                                amount=1;
                                                                                break;
                                                                case 3:
                                                                                printf("\nYour balance is Rs.%.2f\n",balance);
                                                                                printf("\n\t\t\t\t\t============= ***Thankyou for ATM banking *** ===============\n");
                                                                                break;
                                                                case 4:
                                                                                {
                                                                                                int new_pin,comfirmed_pin;
                                                                                                int entered_otp;
                                                                                                printf("\nEnter the new pin : ");
                                                                                                scanf("%d",&new_pin);
                                                                                                printf("\nEnter the confirmed pin :");
                                                                                                scanf("%d",&comfirmed_pin);
                                                                                                if(comfirmed_pin==new_pin)
                                                                                                {
                                                                                                                printf("\nEnter the otp : ");
                                                                                                                scanf("%d",&entered_otp);
                                                                                                                if(otp==entered_otp)
                                                                                                                {
                                                                                                                                printf("\nPin changed successfullt..\n");
                                                                                                                                printf("\n\t\t\t\t\t============= ***Thankyou for ATM banking *** ===============\n");
                                                                                                                                break;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                                printf("\nInvalid..you need to enter the valid otp\n");
                                                                                                                                printf("\nsession out\n");
                                                                                                printf("\n\t\t\t\t\t============= ***Thankyou for ATM banking *** ===============\n");
                                                                                                                                break;
                                                                                                                }
                                                                                                                }

                                                                                                else
                                                                                                {
                                                                                                                printf("\nInvalid..you need to enter the valid pin\n");
                                                                                                                                printf("\nSession out\n");
                                                                                                printf("\n\t\t\t\t\t============= ***Thankyou for ATM banking *** ===============\n");
                                                                                                                                break;
                                                                                                }

                                                                                }
                                                                        break;
                                                                default :
                                                                                printf("\nInavlide option!,please select valid option.\a\n");
                                                }
                                                printf("\nDo you wish to continue.if yes press[1],No press[0] : ");
                                                scanf("%d",&continue_transaction);
                                                printf("\n\n\n\n\n");
                                }
                }
}