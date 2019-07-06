#include <stdio.h>
int main()
{
    int n,i,m,w=0,hap=0,cnt=0,j;
    int a[100][100];
    double avg[1000];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &m);
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
            hap+=a[i][j];
        }
        avg[cnt++]=(double)hap/m;
        for(j=0; j<m; j++)
        {
            if(avg[cnt-1]<a[i][j])
                w++;
        }
        avg[cnt-1]=(double)w*100/m;
        printf("%d %d %d\n", hap, w, m);
        hap=0;
        w=0;
    }
    for(i=0; i<cnt; i++)
        printf("%.3lf%%\n", avg[i]);
}
