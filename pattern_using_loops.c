/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--)
        printf("%d ",j);
        for(j=1;j<=i*2-1;j++)
        printf("%d ",i);
        for(j=i+1;j<=n;j++)
        printf("%d ",j);
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=n;j>i;j--)
        printf("%d ",j);
        for(j=1;j<=2*i-1;j++)
        printf("%d ",i+1);
        for(j=i+1;j<=n;j++)
        printf("%d ",j);
        printf("\n");
    }
    return 0;
}