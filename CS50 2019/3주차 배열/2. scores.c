#include <cs50.h>
#include <stdio.h>

const int N = 3;   // 상수(gloval variable)

int main(void)
{
    // Scores
    int scores[N];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // Print Average
    printf("Average: %i\n", (scores[0] + scores[1] + scores[2]) / N);
}