#include <stdio.h>

int sort(int *array,int n)
{
    for(int i=0;i<(n-2);i++)
    {
        for(int j=(i+1);j<n;j++)
        {
            if (array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

int main(void)
{
    int n=3;
    int array[n];

    for(int i=0;i<n;i++)
    {
        int l;
        printf("Enter a number: ");
        scanf("%d",&l);
        array[i]=l;
    }

     sort(array, n);

     printf("The second largest number among the entered numbers is : %d ",array[1] );
}


