#include<stdio.h>

struct frac
{
    int num;
    int deno;
};

struct fractions
{
    struct frac *in;
    struct frac sum;
    int n;
};
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int findlcm(struct fractions out)
{
    int ans = out.in[0].deno;
    for (int i= 1; i < out.n; i++)
        ans = (((out.in[i].deno * ans)) /(gcd(out.in[i].deno, ans)));

    return ans;
}
struct frac findsum(struct fractions out)
{
    int a,b;
    out.sum.num=0;
    for(int i=0;i<out.n;i++)
    {
        a=findlcm(out);
        b=a/out.in[i].deno;
        out.in[i].num*=b;
        out.sum.num=out.sum.num+out.in[i].num;
    }
    return out.sum;
}


void main()
{
    struct fractions out;
    printf("Enter the value of n");
    scanf("%d",&out.n);
    out.in = (int*) malloc(out.n * sizeof(int));
    printf("Enter fracions");
    for(int i=0;i<out.n;i++)
    {
        scanf("%d%d",&out.in[i].num,&out.in[i].deno);
    }
    out.sum= findsum(out);
    out.sum.deno=findlcm(out);
        printf("SUM= %d/%d",out.sum,out.sum.deno);
}
    
    
