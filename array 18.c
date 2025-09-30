#include<stdio.h>
#include<conio.h>

int main()
{
    int i,a,x[10],n;
    printf("Enter any 10 values");
    for(i=0;i<10;i++){
    scanf("%d",&x[i]);
    }
printf("Enter the position u want to delete");
scanf("%d",&n);
i=0;a=n-1;

for(i=a;i<9;i++)
{
x[i]=x[i+1];

}
     for(i=0;i<9;i++){
    printf("%d ",x[i]);
    }


}
