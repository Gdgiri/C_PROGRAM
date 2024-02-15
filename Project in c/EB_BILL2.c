#include <stdio.h>

int main()
{

    char name[20];

    int id, dis, read, total, gst, amt, cash, grand;

    printf("--------------------WELCOME TO THE EB OFFICE-------------------- \n");
    printf("100Unit as FREE!!! FREE!!! \n");
    printf("above 100 - below 200 Rs.1 charge \n");
    printf("above 200 - below 400 Rs.2 charge with 5%% GST \n");
    printf("above 400 - below 700 Rs.3 charge with 10%% GST \n");
    printf("above 700 - below 1000 Rs.5 charge with 15%% GST with 5%% DISCOUNT \n");
    printf("above 1000 Rs.7 charge with 20%% GST with 10%% DISCOUNT \n");
    printf("--------------------THANK YOU WELCOME AGAIN!!!-------------------- \n");

    printf("Enter the Customer Name: ");
    scanf("%s", &name);

    printf("Enter the Customer_ID: ");
    scanf("%d", &id);

    printf("Enter the Unit: ");
    scanf("%d", &read);

    printf("CUSTOMER NAME: %s \n", name);
    printf("CUSTOMER_ID: %d \n", id);
    printf("CUrrent Bill Unit: %d \n", read);

    if (read <= 100)
    {
        printf("You have NO CHARGE \n");
    }

    else if (read > 100 && read < 200)
    {
        total = read - 100;
        printf("total: %d \n", total);
        amt = total * 1;

        printf("you have Rs.%d charged for %d unit \n", amt, read);
    }

    else if (read >= 200 && read < 400)
    {
        total = read - 100;
        amt = total * 2;
        gst = (amt * 5) / 100;
        cash = amt + gst;

        printf("you have Rs.%d charged for %d unit \n", cash, read);
    }
    else if (read >= 400 && read < 700)
    {
        total = read - 100;
        amt = total * 3;
        gst = (amt * 10) / 100;
        cash = amt + gst;
        printf("you have Rs.%d charged for %d unit \n", cash, read);
    }

    else if (read >= 700 && read < 1000)
    {
        total = read - 100;
        amt = total * 5;
        gst = (amt * 15) / 100;
        cash = amt + gst;
        dis = (cash * 5) / 100;
        grand = cash - dis;
        printf("you have Rs.%d charged for %d unit \n", grand, read);
    }
    else if (read >= 1000)
    {
        total = read - 100;
        amt = total * 7;
        gst = (amt * 20) / 100;
        cash = amt + gst;
        dis = (cash * 10) / 100;
        grand = cash - dis;
        printf("you have Rs.%d charged for %d unit \n", grand, read);
    }
    else
    {
        printf("you have NO CHARGE");
    }

    printf("!!!THANK YOU FOR PAY!!!");

    return 0;
}