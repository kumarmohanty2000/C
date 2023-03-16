#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<windows.h>

struct student
{
    char na[30];
    char cl[10];
    int rl;
} s;

long si = sizeof(s);

///Student function call
void addmissionStd();
//void display();
void displayStudentList();
void search();
void searchByRoll();
void searchByName();
void modify();
void del();
void sort();
void sortByRoll();
void sortByName();
void adMin();
void checkStudent();
void entryStudent();
void adminPage();

FILE *fp;

void main()
{
    system("color 47");

    char uname[32],user[]= {"saroj"};
    char pass[32],password[]= {"1234"};
    printf("\n\t\t    *Student Management System *");
    printf("\n\t=============================================================\n\n");
    printf("\t\tProject  Name: Student Management System\n\n");
    printf("\t=============================================================\n\n");
    printf("\n\t\t\t\tLogin Page\n\n");
    printf("\t\t\tUser Name: ");
    scanf("%s",&uname);
    printf("\t\t\tPassword : ");
    scanf("%s",&pass);
    printf("\n");
    if(strcmp(uname,user)==0)
    {
        if(strcmp(pass,password)==0)
        {
            adminPage();
        }
        else
        {
            int ch;
            printf("\n\t===========================================================\n\n");
            printf("\n\t=>=>=>=>\tYour Password was incorrect\t<=<=<=<=\n");
            printf("\t=============================================================\n\n");
            printf("\n\t\t 1 For Trying again");
            printf("\t 0 To Exit\n ");
            printf("\t_________\n\n");
            printf("\tSelect Option:");
            scanf("%d",&ch);
            switch(ch)
            {
            case 0:
                exit(0);
            case 1:
                main();
                break;
            default:
                printf("\n\tInvalid choice..");
            }
        }
    }
    else
    {
        int ch;
        printf("\n\t===========================================================\n\n");
        printf("\n\t=>=>=>=>\tYour Password was incorrect\t<=<=<=<=\n");
        printf("\t=============================================================\n\n");
        printf("\n\t\t1 For Trying again");
        printf("\t0 To Exit\n ");
        printf("\t_________\n\n");
        printf("\tSelect Option:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 0:
            exit(0);
        case 1:
            main();
            break;
        default:
            printf("\n\tInvalid choice..");
        }
    }
    getch();
}

void adminPage()
{
    system("color 70");

    int ch;
    char pass[32],password[]= {"5678"};
    while(1)
    {
        system("cls");
        printf("\n\t\t\t** Student Management System **\n");
        printf("\t________\n\n");
        printf("\t\tPress 1 For Admin ");
        printf("\t\tPress 2 For Student");
        printf("\tPress 0 To Exit\n");
        printf("\t________\n\n");
        printf("\tSelect option :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 0:
            exit(0);
        case 1:
            printf("\n\t_________\n\n");
            printf("\tEnter Password : ");
            scanf("%s",&pass);
            printf("\n");
            if(strcmp(pass,password)==0)
            {
                adMin();
            }
            else
            {
                int ch;
                printf("\n\t===========================================================\n\n");
                printf("\n\t=>=>=>=>\tYour Password was incorrect\t<=<=<=<=\n");
                printf("\t=============================================================\n\n");
                printf("\n\t\t1 For Trying again");
                printf("\t0 To Exit\n ");
                printf("\t_________\n\n");
                printf("\tSelect Option:");
                scanf("%d",&ch);
                switch(ch)
                {
                case 0:
                    exit(0);
                case 1:
                    adminPage();
                    break;
                default:
                    printf("\n\tInvalid choice..");
                }
            }

            break;
        case 2:
            checkStudent();
            break;
        default:
            printf("\n\tInvalid choice..");
        }
    }
}

void checkStudent()
{

    int ch;
    while(1)
    {
        system("cls");
        printf("\n\t\t\t** Student's Details **\n");
        printf("\t________\n\n");
        printf("\n\t\t1.Student List");
        printf("\t\t2.Search By Roll\n\n");
        printf("\t\t3.Search By Name");
        printf("\t4.Home\n\n");
        printf("\t\t0.Exit\n");
        printf("\n\t________\n\n");
        printf("\n\tSelect option :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 0:
            exit(0);
        case 1:
            displayStudentList();
            break;
        case 2:
            searchByRoll();
            break;
        case 3:
            searchByName();
            break;
        case 4:
            adminPage();
            break;
        default:
            printf("\nInvalid choice...");
        }
        getch();
    }
}
void adMin()
{

    int ch;
    while(1)
    {
        system("cls");
        printf("\n\t\t\t** Admin Portal **\n");
        printf("\t________\n\n");
        printf("\tPress 1 For Student\n\n\n\n\n\n");
        printf("\t\tPress 2 Home");
        printf("\t\tPress 0 To Exit\n");
        printf("\n\t________\n\n");
        printf("\n\tSelect option :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            entryStudent();
        case 2:
            adminPage();
            break;
        default:
            printf("\n\tInvalid choice...");
        }
        getch();
    }
}

void entryStudent()
{

    int ch;
    while(1)
    {
        system("cls");
        printf("\n\t\t\t** Student Portal **\n");
        printf("\t________\n\n");
        printf("\t\t1.Take Admission\t");
        printf("2.Student Information\n\n");
        printf("\t\t3.Search\t");
        printf("\t4.Modify\n\n");
        printf("\t\t5.Delete\t");
        printf("\t6.Sort\n\n");
        printf("\t\t7.Home");
        printf("\t\t\t0.Exit\n");
        printf("\t________\n\n");
        printf("\tEnter Your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 0:
            exit(0);
        case 1:
            addmissionStd();
            break;
        case 2:
            displayStudentList();
            break;
        case 3:
            search();
            break;
        case 4:
            modify();
            break;
        case 5:
            del();
            break;
        case 6:
            sort();
            break;
        case 7:
            adminPage();
            break;
        default:
            printf("Invalid Choice");
        }
        getch();
    }
}

void addmissionStd()
{
    system("cls");
    printf("\n\t\t\t** Student's Admission Portal **\n");
    printf("\t*********\n");
    fp = fopen("st.txt","ab");
    printf("\tEnter Student Name: ");
    fflush(stdin);
    gets(s.na);
    printf("\tEnter Class: ");
    scanf("%s",s.cl);
    printf("\tEnter Roll: ");
    scanf("%d",&s.rl);
    fwrite(&s, sizeof(s),1,fp);
    printf("\n\tRecord Saved Successfully...\n");
    fclose(fp);
}

void displayStudentList()
{
    system("cls");
    printf("\n\t\t\t** Student Information **\n");
    printf("\t________\n");
    printf("\tName\t\t\t|  Class\t\t|  Roll");
    printf("\n\t________\n");
    fp = fopen("st.txt","rb");
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        printf("\t%s ",s.na);
        printf("\t\t\t   %s ",s.cl);
        printf("\t\t\t   %d\n",s.rl);
    }
    printf("\t________\n\n");
    fclose(fp);
    printf("\n\tPress any key to continue...");
    getch();
}

void search()
{
    int ch;

    while(1)
    {
        system("cls");
        printf("\n\t\t\t** Student's Search Portal **\n");
        printf("\t________\n\n");
        printf("\t\t1.Search By Roll");
        printf("\t2.Search By Name\n\n");
        printf("\t\t0.Back To Main Menu\n");
        printf("\t________\n\n");
        printf("\tEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 0:
            adminPage();
            break;

        case 1:
            searchByRoll();
            break;

        case 2:
            searchByName();
            break;

        default:
            printf("Invalid Choice");

        }
        getch();
    }
}

void searchByRoll()
{
    system("cls");
    int rl,f=0;
    printf("\n\tEnter Roll to search: ");
    scanf("%d",&rl);
    printf("\n\t\t\t*Students Search by Roll *\n");
    printf("\t________\n");
    printf("\n\tName\t\t|Class\t\t|Roll");
    printf("\n\t________\n");
    fp=fopen("st.txt","rb");
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        if(rl == s.rl)
        {
            f=1;
            printf("\t%s",s.na);
            printf("\t\t%s",s.cl);
            printf("\t\t%d\n",s.rl);
            printf("\t________\n");
            break;
        }
    }

    fclose(fp);
    if(f==0)
        printf("\n\tRecord Not Found...");
    else
        printf("\n\tRecord Found Successfully...");
    printf("\n\n\tPress any Key...");

}

void searchByName()
{
    system("cls");
    char na[30];
    int f=0;
    printf("\n\tEnter Name to search: ");
    fflush(stdin);
    gets(na);
    printf("\n\t\t\t*Students Search by Name *\n");
    printf("\t________\n");
    printf("\tName\t\tClass\t\tRoll\n");
    printf("\t________\n\n");
    fp=fopen("st.txt","rb");
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        if(strcmpi(na,s.na)==0)
        {
            f=1;
            printf("\t%s",s.na);
            printf("\t\t%s",s.cl);
            printf("\t\t%d\n",s.rl);
            printf("\t________\n");
            break;
        }
    }
    fclose(fp);
    if(f==0)
        printf("\n\tRecord Not Found...");
    else
        printf("\n\tRecord Found Successfully...");
    printf("\n\n\tPress any Key...");
}

void modify()
{
    system("cls");
    int rl, f=0;
    printf("\n\tEnter Roll To Modifiy: ");
    scanf("%d",&rl);
    fp=fopen("st.txt","rb+");
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        if(rl == s.rl)
        {
            f=1;
            printf("\tEnter New Name: ");
            fflush(stdin);
            gets(s.na);
            printf("\tEnter Class: ");
            scanf("%s",s.cl);
            printf("\tEnter New Roll: ");
            scanf("%d",&s.rl);
            fseek(fp,-si,1);
            fwrite(&s,sizeof(s),1,fp);
            fclose(fp);
            break;
        }
    }
    if(f==0)
        printf("\n\tRecord Not Found...\n");
    else
        printf("\n\tModified Successfully...\n");
}

void del()
{
    system("cls");
    int rl, f=0;
    printf("\n\tEnter roll to delete: ");
    scanf("%d",&rl);

    FILE *ft;
    fp = fopen("st.txt","rb");
    ft = fopen("temp.txt","ab");

    while(fread(&s,sizeof(s),1,fp)==1)
    {
        if(rl == s.rl)
        {
            f=1;
        }
        else
        {
            fwrite(&s,sizeof(s),1,ft);
        }
    }
    fclose(fp);
    fclose(ft);
    remove("st.txt");
    rename("temp.txt","st.txt");

    if(f==0)
        printf("\n\tRecord Not Found...\n");
    else
        printf("\n\tRecord Deleted Successfully...\n");

}

void sort()
{
    int ch;

    while(1)
    {
        system("cls");

        printf("\n\t\t\t** Student's Sort Portal **\n");
        printf("\t________\n\n");
        printf("\t\t1.Sort By Roll");
        printf("\t\t2.Sort By Name\n\n");
        printf("\t\t0.Back To Main Menu\n");
        printf("\t________\n");
        printf("\n\tEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 0:
            adminPage();
            break;

        case 1:
            sortByRoll();
            break;

        case 2:
            sortByName();
            break;

        default:
            printf("Invalid Choice");

        }
        getch();
    }

}

void sortByRoll()
{
    system("cls");
    int c=0, i, j;
    struct student s1[50],t;

    printf("\n\t\t** Student's Sorting By Roll No **\n");
    printf("\t________\n");
    fp = fopen("st.txt","rb");
    while(fread(&s,sizeof(s),1,fp)==1)
        s1[c++]=s;

    for(i=0; i<c-1; i++)
    {
        for(j=i+1; j<c; j++)
        {
            if(s1[i].rl >s1[j].rl)
            {
                t = s1[i];
                s1[i]=s1[j];
                s1[j]=t;
            }
        }
    }

    printf("\tName\t\t| Class\t\t| Roll\n");
    printf("\t________\n\n");

    for(i=0; i<c; i++)
    {
        printf("\t%s",s1[i].na);
        printf("\t\t  %s",s1[i].cl);
        printf(" \t\t  %d\n",s1[i].rl);
    }
    printf("\t________\n\n");
    printf("\n\tPress any key..");
}

void sortByName()
{
    system("cls");
    int c=0, i, j;
    struct student s1[50],t;
    printf("\n\t\t** Student's Sorting By Name **\n");
    printf("\t________\n");
    fp = fopen("st.txt","rb");
    while(fread(&s,sizeof(s),1,fp)==1)
        s1[c++]=s;

    for(i=0; i<c-1; i++)
    {
        for(j=i+1; j<c; j++)
        {
            if(strcmpi(s1[i].na, s1[j].na)>1)
            {
                t = s1[i];
                s1[i]=s1[j];
                s1[j]=t;
            }
        }
    }

    printf("\n\tName\t\t|  Class\t\t|  Roll\n");
    printf("\t________\n");
    for(i=0; i<c; i++)
    {
        printf("\t%s",s1[i].na);
        printf("\t\t  %s",s1[i].cl);
        printf("\t\t  %d\n",s1[i].rl);
    }
    printf("\t________\n");
    printf("\n\tPress any key..");
}
