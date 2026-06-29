#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== Welcome to the Quiz Application =====\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. Which language is used to write C programs?\n");
    printf("1. C\n2. Java\n3. Python\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 364\n3. 366\n4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\n4. Which symbol is used for single-line comments in C?\n");
    printf("1. //\n2. /* */\n3. #\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n5. Who is known as the Father of C Language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n===== Quiz Result =====\n");
    printf("Your Score = %d/5\n", score);

    if (score == 5)
        printf("Excellent! You got all answers correct.\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}