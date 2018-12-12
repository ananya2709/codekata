#include <stdio.h>

int main()
{
    int h1,m1,h2,m2,h3,m3;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(m1<60&&m2<60)
    {
        if(h1>h2)
        {
            if(m1>m2)
            {
                m3=m1-m2;
            }
            else
            {
                h1=h1-1;
                m3=(m1+60)-m2;
            }
            h3=h1-h2;
        }
            else
            {
                if(m2>m1)
                {
                    m3=m2-m1;
                }
                else
                {
                  h2=h2-1;
                m3=(m2+60)-m1;  
                }
                h3=h2-h1;
            }
        
        
    }
    printf("%d %d",h3,m3);
    return 0;
}
