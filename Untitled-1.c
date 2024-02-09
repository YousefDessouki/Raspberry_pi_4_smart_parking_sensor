#include <stdio.h>
int main() {
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    int flag=1;
    int answer;
    for(int i=0;i<=8;i++)
    {
       if(i!=0 || i!=1 || i!=number1||i!=number2 )
       {
        int checker1=number1%i;
       int checker2=number2%i;
       if(!(checker1&&checker2))
       {
        answer=i;
       }

       }
       

        
    }
    printf("%d",answer);
}