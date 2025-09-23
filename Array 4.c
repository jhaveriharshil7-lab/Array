#include<stdio.h>
#include<conio.h>
void main()
{
    int notes[9]={500,200,100,50,20,10,5,2,1};
    int amount,i,a[9],temp;
    printf("Enter amount");
    scanf("%d",&amount);
    temp=amount;
    for(i=0;i<9;i++){
        a[i]=temp/notes[i];
        temp=temp%notes[i];
    }
    for(i=0;i<9;i++)
    {
    if(a[i]==0){
        continue;
    }
    else{
        printf("%d notes of %d\n",a[i],notes[i]);
    }
    }
    getch();
}
