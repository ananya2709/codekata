int main()
{
int count=0,a,b,i,j,prime=0;
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
    for(j=2;j<i/2;j++)
    {
        if(i%j==0)
        {
            prime=1;
            break;
        }
    }if(prime==0)
    {
        count++;
    }
}
printf("%d",count);
    return 0;
}

         
