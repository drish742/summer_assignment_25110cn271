#include <stdio.h>

int main()
{
    int a[100], b[100], uni[200];
    int n1, n2, i, j, k = 0;
    int found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        uni[k++] = a[i];      // Copy first array
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Add only unique elements from second array
    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < k; j++)
        {
            if(b[i] == uni[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            uni[k++] = b[i];
        }
    }

    printf("\nUnion of Arrays:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", uni[i]);
    }

    return 0;
}