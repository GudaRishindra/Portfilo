#include<stdio.h>
int main(){
    int a,b,amount,withdraw,c,count;
    a=80966;
    amount=50000;
    count=3;
    c=amount-withdraw;
    while (count>0){
    printf("Enter Your ATM PIN Below : \n");
    scanf("%d",&b);
    if (a==b){
        printf("Enter The amount : ");
        scanf("%d",&withdraw);
        c=amount-withdraw;
        if (withdraw <= amount){
            printf("Your Transcation is Success \n The Avalible Balance in your Amount is : %d ",c);
        }
        else{
            printf("insuficant Balance ");
        }
        break;
    }   

    else{
        count-=1;
        printf("Remaining chances : %d\n",count);
    }
    if (count==0){
        printf("Please visit the Bank");
    }
}
    return 0;
}
    
