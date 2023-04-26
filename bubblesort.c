#include <stdio.h>
void Bubble(int a[5], int n)
{
    int passes,comparisons,i,j;
    int temp;
    passes=n-1;
    comparisons=n-1;
    
    for(i=0;i<passes;i++)
    {
        for(j=0;j<comparisons-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
printf("First Element: %d \nLast Element:%d", a[0],a[4]);
}
int main()
{
   int arr[5] = {20,30,140,230,110};
   Bubble(arr,5);
}
