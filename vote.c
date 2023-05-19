#include <stdio.h>

int cnv = 0, cnv1 = 0, cnv2 = 0, cnv3 = 0, cnv4;

void show()
{
    int cn;

    printf("### Please choose your candidate ### \n");
    printf("1 Narendra Modi \n");
    printf("2 Rahul Gandhi \n");
    printf("3 Arvind Kejriwal \n");
    printf("4 Sharad Pawar \n");
    printf("5 none of these \n \n");
    printf("Input Your choice : \n");
    scanf("%d", &cn);
    if (cn == 1)
    {
        cnv = cnv + 1;
        printf("Thanks for vote :\n");
    }
    if (cn == 2)
    {
        cnv1 = cnv1 + 1;
        printf("Thanks for vote :\n");
    }
    if (cn == 3)
    {
        cnv2 = cnv2 + 1;
        printf("Thanks for vote :\n");
    }
    if (cn == 4)
    {
        cnv3 = cnv3 + 1;
        printf("Thanks for vote :\n");
    }
    if (cn == 5)
    {
        cnv4 = cnv4 + 1;
        printf("Thanks for vote :\n");
    }
}
void show1()
{
    printf("##### Voting statics ##### \n");
    printf(" Narendra Modi    : %d\n", cnv);
    printf(" Rahul Gandhi     : %d\n", cnv1);
    printf(" Arvid Kejriwal   : %d\n", cnv2);
    printf(" Sharad Pawar     : %d\n", cnv3);
    printf("Spoiled Votes are : %d\n", cnv4);
}
void show2()
{
    if (cnv > cnv1 && cnv > cnv2 && cnv > cnv3)
    {
        printf(" \n **** Leading Candidate **** is : Naredra Modi");
    }
    else if (cnv1 > cnv && cnv1 > cnv2 && cnv1 > cnv3)
    {
        printf("\n **** Leading Candidate **** is : Rahul Gandhi ");
    }
    else if (cnv2 > cnv && cnv2 > cnv1 && cnv2 > cnv3)
    {
        printf("\n **** Leading Candidate **** is :  Arvind Kejariwal ");
    }
    else if (cnv3 > cnv && cnv3 > cnv1 && cnv3 > cnv2)
    {
        printf(" \n **** Leading Candidate **** is :  Sharad Pawar ");
    }
    else
    {
        printf("\n ###**No Win Situation**## \n");
    }
}
int main()
{

    int ch;

    do
    {
        printf(" \n\n ##### Welcome to Election / Votting 2022 ##### \n\n");

        printf(" 1 Cast the Vote \n");
        printf(" 2 Find the Vote \n");
        printf(" 3 find the leading candidate \n");
        printf(" 0 Exit \n");

        printf(" Please Enter your choice : ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            show();
        }
        if (ch == 2)
        {
            show1();
        }
        if (ch == 3)
        {
            show2();
        }
    } while (ch != 0);

    if (ch == 0)
    {
        printf("####*********Thanks for Visiting*********####");
    }
    return 0;
}