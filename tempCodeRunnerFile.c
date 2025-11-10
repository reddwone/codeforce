#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arry[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arry[i]);

}
int min_index=0,max_index=0;
for (int i = 1; i < n; i++)
{
    if (arry[i]<arry[min_index])
    {
        min_index=i;
    }
    if (arry[i>arry[max_index]])
    {
        max_index=i;
    }
    
}

int temp=arry[max_index];
arry[max_index]=arry[min_index];
arry[min_index]=temp;
for (int i = 0; i < n; i++)
{
    printf("%d ",arry[i]);
}



}