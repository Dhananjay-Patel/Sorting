#include <stdio.h>
#include <conio.h>

void bubble_sort(int A[], int N)
{
    int j, i, temp;
    for (j = 0; j <= N - 1; j++)
    {
        for (i = 0; i <= N - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int no;
    printf("Enter no that you want to enter:");
    scanf("%d", &no);
    int A[no];
    printf("\nEnter no:\n");
    for (int i = 0; i < no; i++)
    {
        scanf("%d", &A[i]);
    }
    bubble_sort(A, no);

    //Print after sorting
    for (int i = 0; i < no; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
