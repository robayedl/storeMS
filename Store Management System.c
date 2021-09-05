#include<stdio.h>



//Structure
struct store
{
    int code;
    char name[20];
    int price,quantity;
} store[100];



//Add Function
void add()
{
    printf("\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ADD PHONE  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    int i;
    char x;
    for(i=0;i<100;i++)
    {
        if(store[i].code=='\0')
        {
            printf("\n\t\t\t$$$$$$$$$$   Adding New Phone   $$$$$$$$$$\n");
            printf("\n\t\tEnter Phone Code: ");
            scanf("%d",&store[i].code);
            fflush(stdin);
            printf("\n\t\tEnter Phone Name: ");
            gets(store[i].name);
            printf("\n\t\tEnter Phone Price: ");
            scanf("%d",&store[i].price);
            printf("\n\t\tEnter Phone Quantity: ");
            scanf("%d",&store[i].quantity);
            printf("\n\n\t\t&&&&&&  Adding Complete  &&&&&&\n");
            printf("\n\n\t\tAdd more? (Y/N): ");
            fflush(stdin);
            scanf("%c",&x);
            if(x=='n' || x=='N')
            {
                break;
            }
        }
    }
}



//Display Function
void display()
{
    int i,n=0;
    printf("\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  DISPLAY ALL PHONE  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    printf("\t\tNo.\tCode\tName\t\t\t\t\tPrice\t\tQuantity\n\n");
    for(i=0;i<100;i++)
    {
        if(store[i].code!='\0')
        {
            n++;
            printf("\t\t%d.\t%d\t%s\t\t\t\t\t%d\t\t%d\n",n,store[i].code,store[i].name,store[i].price,store[i].quantity);
        }
    }
    printf("\n\n");
}



//Search Function
void search()
{
    int z,i,f;
    char x;
    printf("\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  SEARCH PHONE  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    while(1)
    {
        f=0;
        printf("\n\t\t\t$$$$$$$$$$   Searching Phone   $$$$$$$$$$\n");
        printf("\n\t\tEnter Phone Code: ");
        scanf("%d",&z);
        for(i=0;i<100;i++)
        {
            if(z==store[i].code && z!=0)
            {
                printf("\n\t\tCode\t\tName\t\t\tPrice\t\tQuantity\n\n");
                printf("\t\t%d\t\t%s\t\t\t%d\t\t%d\n",store[i].code,store[i].name,store[i].price,store[i].quantity);
                f++;
            }
        }
        if(f==0)
        {
            printf("\n\t\tInvalid Code\n\n\t\tPlease Try Again\n");
        }
        printf("\n\t\tSearch more?? (Y/N): ");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='n' || x=='N')
        {
            break;
        }
    }

}



//Edit Function
void edit()
{
    int z,i,f;
    char x;
    printf("\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  EDIT PROGRAM  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    while(1)
    {
        f=0;
        printf("\n\t\t\t$$$$$$$$$$   Editing Phone   $$$$$$$$$$\n");
        printf("\n\t\tEnter Phone Code: ");
        fflush(stdin);
        scanf("%d",&z);
        for(i=0;i<100;i++)
        {
            if(z==store[i].code && z!=0)
            {
                printf("\n\t\t\t$$$$$$$$$$   Input New Phone Info   $$$$$$$$$$\n");
                printf("\n\t\tEnter New Phone Code: ");
                scanf("%d",&store[i].code);
                fflush(stdin);
                printf("\n\t\tEnter New Phone Name: ");
                gets(store[i].name);
                printf("\n\t\tEnter New Phone Price: ");
                scanf("%d",&store[i].price);
                printf("\n\t\tEnter New Phone Quantity: ");
                scanf("%d",&store[i].quantity);
                printf("\n\n\t\tThe Phone Has Been Edited\n");
                f++;
            }
        }
        if(f==0)
        {
            printf("\n\t\tInvalid Code\n\n\t\tPlease Try Again\n");
        }
        printf("\n\t\tEdit more? (Y/N): ");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='n' || x=='N')
        {
            break;
        }
    }
}



//Remove Function
void remoove()
{
    int z,i,f;
    char x;
    printf("\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  REMOVE PHONE  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    while(1)
    {
        f=0;
        printf("\n\t\t\t$$$$$$$$$$   Removing New Phone   $$$$$$$$$$\n");
        printf("\n\t\tEnter Phone Code: ");
        scanf("%d",&z);
        for(i=0;i<100;i++)
        {
            if(z==store[i].code && z!=0)
            {
                store[i].code='\0';
                printf("\n\n\t\tThe Phone Has Been Removed\n");
                f++;
            }
        }
        if(f==0)
        {
            printf("\n\t\tInvalid Code\n\n\t\tPlease Try Again\n");
        }
        printf("\n\t\tRemove more? (Y/N): ");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='n' || x=='N')
        {
            break;
        }
    }
}



//Sell Function
void sell()
{
    char x;
    int z,i,f;
    printf("\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  SELL PHONE  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    while(1)
    {
        f=0;
        printf("\n\t\t\t$$$$$$$$$$   Selling Phone   $$$$$$$$$$\n");
        printf("\n\t\tEnter Phone Code: ");
        scanf("%d",&z);
        for(i=0;i<100;i++)
        {
            if(z==store[i].code && z!=0)
            {
                if(store[i].quantity<1)
                {
                    printf("\n\t\tThe Phone Is Not Available\n");
                    f++;
                }
                else
                {
                    printf("\n\t\tNo.\tCode\t\tName\t\t\t\t\tPrice\n\n");
                    printf("\t\t%d.\t%d\t\t%s\t\t\t\t\t%d\n",i+1,store[i].code,store[i].name,store[i].price);
                    printf("\n\t\tThe Phone Has Been Sold\n");
                    store[i].quantity--;
                    f++;
                }
            }
        }
        if(f==0)
        {
            printf("\n\t\tInvalid Code\n\n\t\tPlease Try Again\n");
        }
        printf("\n\t\tSell more? (Y/N): ");
        fflush(stdin);
        scanf("%c",&x);
        if(x=='n' || x=='N')
        {
            break;
        }
    }
}



//Main Function
int main()
{
    char In,close;
    int choice;
    printf("\t\tWelcome To Store Management System\n\n");
    printf("\t\tEnter to the program? (Y/N): ");
    scanf("%c",&In);
    if(In=='y' || In=='Y')
    {
        while(1)
        {
            printf("\n\n#####*****#####*****#####*****#####*****#####****  MOBILE PHONE STORE  ****#####*****#####*****#####*****#####*****#####\n\n\n");
            printf("\t\t\t&&&&&  Main menu &&&&&\n\n");
            printf("\t\t1. Add Phones\n");
            printf("\t\t2. Display All Phones\n");
            printf("\t\t3. Search Phones\n");
            printf("\t\t4. Edit Phones\n");
            printf("\t\t5. Remove Phones\n");
            printf("\t\t6. Sell Phones\n");
            printf("\t\t7. Quit\n");
            printf("\n\n\t\tEnter your choice: ");
            scanf("%d",&choice);
            if(choice==1)
            {
                add();
            }
            else if(choice==2)
            {
                display();
            }
            else if(choice==3)
            {
                search();
            }
            else if(choice==4)
            {
                edit();
            }
            else if(choice==5)
            {
                remoove();
            }
            else if(choice==6)
            {
                sell();
            }
            else if(choice==7)
            {
                printf("\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  QUIT PROGRAM  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
                printf("\t\tDo You Want To Quit The Program? (Y/N): ");
                fflush(stdin);
                scanf("%c",&close);
                if(close=='y' || close=='Y')
                {
                    break;
                }
            }
            else
            {
                printf("\n\n\t\tYour Choice Is Wrong\n\n\t\tPlease Try Again\n\n");
            }
        }
    }
    printf("\n\t\tThe Program Has Made By EWU CSE105 Section-12 group-6");
    printf("\n\n\t\tAll Credit Goes To >===>\n\n");
    printf("\t\t1. Tameem Ur Rahman \t\tID:2018-1-60-007\n");
    printf("\t\t2. Shahida Sultana \t\tID:2018-1-60-117\n");
    printf("\t\t3. Robayed Ashraf \t\tID:2018-1-60-238\n");
    printf("\t\t4. Kamarun Munira Sinthya \tID:2018-1-60-246\n");
    printf("\n\n\t\tThank You\n\n\t\tProgram Closed\n");
}
