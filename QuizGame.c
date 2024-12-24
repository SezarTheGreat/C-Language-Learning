#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][100] = {"Q1. What year did the C language debut?",
                            "Q2. Who is creditted with creating the C language?",
                            "Q3. What is the predessor of C?"};

    char option[][100] = {"A. 1969","B. 1972","C. 1975","D. 1999",
                          "A. Dennis Ritchie","B. Nikola Tesla","C. John Carmack","D. Doc Brown",
                          "A. Objective C","B. B","C. C++","D. C#"};

    char answers[3] = {'B','A','B'};
    int numberofquestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    char score;

    printf("QUIZ GAME\n");

    for (int i = 0;i < numberofquestions; i++)
    {
        printf("************************\n");
        printf("%s\n",questions[i]);
        printf("************************\n");

        for(int j = (i*4); j < (i*4)+4; j++)
        {
            printf("%s\n",  option[j]);
        }
        
        printf("Guess:");
        scanf("%c",&guess);
        scanf(" %c");   //clear newline charecter from input buffer
        guess = toupper(guess);  //reassigning any lower case character into uppercase

        if(guess == answers[i])
        {
            printf("Correct Answer.\n");
            score++;
        }
        else{
            printf("Incorrect Answer.\n");
        }
    }

    printf("Final Score: %d/%d",score,numberofquestions);

    return 0;
}