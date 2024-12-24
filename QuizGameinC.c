#include <stdio.h>

int main(){
    int i,j;
    char questions[5][1000] = {
    "Question1. How many elements are there in the periodic table?",
    "Question2. Which animal lays the largest eggs?",
    "Question3. What is the most abundant gas in earth's atmosphere?",
    "Question4. How many bones are there in a human body?",
    "Question5. Which planet in the solar system is hottest?"};

    char options[5][500] = {"A: 116  B: 117  C: 118  D: 119",
    "A: Whale  B: Crocodile  C: Elephant  D: Ostrich",
    "A: Nitrogen  B: Oxygen  C: Carbon-Dioxide  D: Hydrogen",
    "A: 206  B: 207  C: 208  D: 209",
    "A: Mercury  B: Venus  C: Earth  D: Mars"
    };

    char answers[5] = {'C', 'D', 'A', 'A', 'B'};

    char guesses[5];
    int score = 0;
    int questions_num;

    for( i = 0; i < 5; i++){
        printf("\n-----------------------------\n");
        printf("%s\n", questions[i]);
        printf("%s\t", options[i]);
    }
    for(i=0;i<5;i++){
        printf("\nEnter your guess for question %d: ",i+1);
        scanf(" %c",&guesses[i]);
    }
    for(i=0;i<5;i++){
        if(guesses[i] == answers[i]){
            score++;
        }
    }
    printf("\n-----------------------------\n");
    printf("          RESULTS            \n");
    printf("-----------------------------\n");
    
    printf("Correct answers: ");
    for(i=0;i<5;i++){
        printf("%c ",answers[i]);
    }

    printf("Your Guesses: ");
    for(i=0;i<5;i++){
        printf("%c ",guesses[i]);
    }
        
    printf("Your score: ");
    printf("%d",score);

    return 0;
}