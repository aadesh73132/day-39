#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the number of friends\n");
    scanf("%d",&n);
    pintf("enter the number of left shoes friend have");
    scanf("%d",&m);

    if(m==0){
        printf("friend has to buy n number of left and right shoes");
    }
    else if(m!=0){
        if(m>n){
            printf("chef need to buy n number of shoes of right leg");
        }
    
    else if (m<n)
    {
            printf("the number of left shoess need to buy is n-m");
    }
    
    else{
        printf("invalid output");
    }
    }
    return 0;
}
