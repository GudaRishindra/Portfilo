#include<stdio.h>
int main(){
    int a,b,count;

    a=2345;
    
    count=3;
    while (count>0){
    printf("Enter Your Password :\n");
    scanf("%d",&b);
    if (a==b){
        printf("Your Password is correct");
        break;
    }
    else  {
        count-=1;
        printf("No.Choices are remaining : %d",count);
    }
    if (count==0){
        printf("Acess denied");
}
}


}