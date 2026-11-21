#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int next = 0;
int count = 0;

// Function to insert a new sample
void insertSample(int value)
{
    buffer[next] = value;

    next = (next + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE)
    {
        count++;
    }
}

// Function to print all stored samples
void printSamples(void)
{
    int i;
    int oldest;

    if (count == 0)
    {
        printf("No samples stored.\n");
        return;
    }

    oldest = (next - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("\nStored samples (oldest to newest): ");

    for (i = 0; i < count; i++)
    {
        printf("%d ", buffer[(oldest + i) % BUFFER_SIZE]);
    }

    printf("\n");
}

// Main function
int main(void)
{
    int value;

    printf("CIRCULAR DATA LOGGER\n");
    printf("Enter integer values.\n");
    printf("Enter -1 to stop input.\n\n");

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &value);

        if (value == -1)
        {
            break;
        }

        insertSample(value);
    }

    printSamples();

    return 0;
}
