#include <stdio.h>
#include <conio.h>

int min(int A[], int k, int N)
{
    int LOC, MIN;
    MIN = A[k];
    LOC = k;

    //find location of minimum value in array
    for (int j = k + 1; j <= N - 1; j++)
    {
        if (MIN > A[j])
        {
            MIN = A[j];
            LOC = j;
        }
    }
    //return location on minimum value
    return LOC;
}

int main()
{

    int no;
    printf("Enter no that you want to enter:");
    scanf("%d", &no);
    int A[no];
    printf("\nEnter no:\n");

    //get value from user
    for (int i = 0; i < no; i++)
    {
        scanf("%d", &A[i]);
    }

    //start sorting

    int k, temp;

    for (k = 0; k <= no - 1; k++)
    {
        int LOC = min(A, k, no);
        temp = A[k];
        A[k] = A[LOC];
        A[LOC] = temp;
    }

    //Print after sorting
    for (int i = 0; i < no; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}