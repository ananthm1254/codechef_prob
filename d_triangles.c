#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int l, k;
        scanf("%d %d", &l, &k);
        int s = l-k+1;
        int n = s*(s+1)/2;
        printf("Case %d: %d", i, n);
        printf("\n");
    }
    return 0;
}
