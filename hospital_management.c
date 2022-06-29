/Hospital Management Mini Project C Language
#include<stdio.h>
#include<string.h>
struct ad
{
int roomnum,phone,age;
char patientname[30];
char disease[30];
} x[100];
int n,i,j=0,sum=0,num;
void add();
void edit();
void del();
int main()
{
int c,i;
printf("\n");
printf("*******--Hospital Management Mini Poject--******\n");
printf("\n");
while(c!=4)
{
printf("\t\t --Make Your Choice-- \t\n\n");
printf("1)Add Information\n");
printf("2)Edit Information\n");
printf("3)Delete Information\n\n");
printf("Your choice of operation =");
scanf("%d",&c);//user gets to select operation what they want to perform
if(c==1)//goes to add
{
add();
continue;
}
else if(c==2)//goes to edit
{
edit();
continue;
}
else if(c==3)//goes to delete
{
del();
continue;
}
else
{
printf("\n\nYour Choice is Invalid. Try again!!");
continue;
}
printf("\n\n");
}
}
void add()
{
printf("\n\n");
printf("The database already has %d inputs of data as of now.\n",num);//how many inputs
printf("How many entry do you want to add ?\n");
scanf(" %d",&n);
sum=n+num;
for(i=num,j=0; i<sum; i++)
{
printf("\n");
printf("Enter Patient's Name = ");
scanf("%s",x[i].patientname);
printf("Enter Disease/Ailment = ");
scanf("%s",x[i].disease);
printf("Enter the Age = ");
scanf("%d",&x[i].age);
printf("Enter Room Number no = ");
scanf("%d",&x[i].roomnum);
printf("Enter Phone Number = ");
scanf("%d",&x[i].phone);
printf("\n");
j++;
num++;
}
}
void edit()
{
int q,p;
printf("What do you want to edit ?\n");
printf("Enter your option\n");
printf("1)Patient Name\n2)Disease/Ailment\n3)Age\n4)Room Number\n5)Phone Number\n");
printf("Your choice of operation =");
scanf("%d",&q);//option
if(q<=5)
{
printf("Enter the Serial No of the Patient= (1 - %d)=",num);
scanf("%d",&p);//serial number
if(p<num)
{
if(q==1)
{
printf("Enter the New Patient Name=");
scanf("%s",x[p].patientname);
printf("This change has been saved to the database\n");
}
else if(q==2)
{
printf("Enter the New Disease=");
scanf("%s",x[p].disease);
printf("This change has been saved to the database\n");
}
else if(q==3)
{
printf("Enter the New Age=");
scanf("%d",&x[p].age);
printf("This change has been saved to the database\n");
}
else if(q==4)
{
printf("Enter the new Room Number=");
scanf("%d",&x[p].roomnum);
printf("This change has been saved to the database\n");
}
else if(q==5)
{
printf("Enter the new Phone number =");
scanf("%d",&x[p].phone);
printf("This change has been saved to the database\n");
}
}
else
{
printf("\n\nInvalid Serial Number \n!! Try Again !!\n\n");
}
}
else
{
printf("\n\nInvalid Choice \nTry Again!!\n\n");
}
}
void del()
{
int f,h;
printf("Enter the Serial Number of the Patient whose information is to be deleted = ");
scanf("%d",&f);
if(f<=num)
{
printf("1)Remove Name\n2)Remove Disease\n3)Remove age\n4)Remove Room
Number\n5)Remove phone number\nYour choice = ");
scanf("%d",&h);
if(h<=5)
{
printf("Cleared\n");
}
else printf("Your Choice is Invalid\n");
}
else
printf("\nPlease enter a valid Serial Number\n");
       }
