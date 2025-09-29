# include<stdio.h>
int main(){
    int n, first =0, second = 1, next,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("Fibnonacci series:");
    for (i=1; i<=n ;i++){
        printf("%d",first);
        next = first+ second;
        first= second;
        second =next;
    }
    return 0;
}