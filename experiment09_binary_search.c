#include <stdio.h>

int main()
{
    int n, i, key, low, high, mid, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int roll[n];

    printf("Enter roll numbers in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &roll[i]);
    }

    printf("Enter roll number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(roll[mid] == key)
        {
            found = 1;
            break;
        }
        else if(roll[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found)
    {
        printf("Student with roll number %d found at position %d.", key, mid + 1);
    }
    else
    {
        printf("Student with roll number %d not found.", key);
    }

    return 0;
}
