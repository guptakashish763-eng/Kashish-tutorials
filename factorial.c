# include<stdio.h>
int main(){
int num;
long long fact=1;
printf("enter a number:");
scanf("%d",&num);
if (num<0){
    printf("factorial is not defined for negative number:,%d");
}else{
    int i=1;
    while(i<= num){
        fact = fact*i;
        i++;
    }
    printf("factorial of %d =%lld\n",num,fact);
}
return 0;
}
