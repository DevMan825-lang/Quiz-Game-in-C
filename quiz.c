#include <stdio.h>
int main(){
    int choose_1;
    int score = 0; 
    printf("Quiz Game \n \n");
    printf("A. What is the capital of France? \n");
    printf("1) Paris \n");
    printf("2) Madrid \n");
    printf("3) Cape Town \n");
    printf("4) New Delhi \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_1);


    switch(choose_1){
        case 1:
        printf("\033[0;32m"); // \033[0;30m >>>>> \033[0;37m
        printf("Your answer is right \n ");
        score = score + 1; 
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 


        case 4:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        default:
        printf("Select an option \n ");
    }




    int choose_2;
    printf("\033[0;37m");
    printf("B. Who wrote 'Romeo and Juliet'? \n");
    printf("1) Charles Dickens \n");
    printf("2) William Shakespeare \n");
    printf("3) Agatha Christie \n");
    printf("4) Edgar Allan Poe \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_2);


    switch(choose_2){
        case 1:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break;

        case 2:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 


        case 4:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_3;
    printf("\033[0;37m");
    printf("C. What is the largest planet in the solar system? \n");
    printf("1) Jupiter \n");
    printf("2) Earth \n");
    printf("3) Mercury \n");
    printf("4) Venus \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_3);


    switch(choose_3){
        case 1:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 


        case 4:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_4;
    printf("\033[0;37m");
    printf("D. What is the hardest substance? \n");
    printf("1) Iron \n");
    printf("2) Gold \n");
    printf("3) Carbon \n");
    printf("4) Diamond \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_4);


    switch(choose_4){
        case 1:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 


        case 4:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_5;
    printf("\033[0;37m");
    printf("E. How many continents are there in the world? \n");
    printf("1) Six \n");
    printf("2) Eight \n");
    printf("3) Seven \n");
    printf("4) Eight \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_5);


    switch(choose_5){
        case 1:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break; 


        case 4:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_6;
    printf("\033[0;37m");
    printf("F. Which year the World War II end? \n");
    printf("1) 1939 \n");
    printf("2) 1945 \n");
    printf("3) 1946 \n");
    printf("4) 1950 \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_6);


    switch(choose_6){
        case 1:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break;

        case 2:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 


        case 4:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_7;
    printf("\033[0;37m");
    printf("G. Who is the king of the Jungle? \n");
    printf("1) Tiger \n");
    printf("2) Elephant \n");
    printf("3) King Cobra \n");
    printf("4) Lion \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_7);


    switch(choose_7){
        case 1:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 


        case 4:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_8;
    printf("\033[0;37m");
    printf("H. Who is the painter of famous 'Mona Lisa' painting? \n");
    printf("1) Leonardo Da Vinci \n");
    printf("2) Salvador Dalli \n");
    printf("3) Vincent Van Gogh \n");
    printf("4) Pablo Picasso \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_8);


    switch(choose_8){
        case 1:
        printf("\033[0;32m");
        score = score + 1; 
        printf("Your answer is right \n ");
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 


        case 4:
        printf("\033[0;31m");
        printf("Your answer is right \n ");
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_9;
    printf("\033[0;37m");
    printf("I. What is the name of the tallest mountain in the Earth? \n");
    printf("1) Himalaya \n");
    printf("2) Alpes Mountain \n");
    printf("3) Mount Everest \n");
    printf("4) Karakoram Mountain Range \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_9);


    switch(choose_9){
        case 1:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break; 


        case 4:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        default:
        printf("Select an option \n ");
    }



    int choose_10;
    printf("\033[0;37m");
    printf("J. What is the chemical symbol for water? \n");
    printf("1) H2 \n");
    printf("2) N2o \n");
    printf("3) O2 \n");
    printf("4) H2O \n");

    printf("Choose your answer: ");
    scanf("%d", &choose_10);


    switch(choose_10){
        case 1:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break;

        case 2:
        printf("\033[0;31m");
        printf("Your answer is wrong \n ");
        break; 

        case 3:
        printf("\033[0;31m");
        printf("Your answer is right \n ");
        break; 


        case 4:
        printf("\033[0;32m");
        printf("Your answer is right \n ");
        score = score + 1; 
        break; 

        default:
        printf("Select an option \n ");
    }
    printf("Total question is 10 \n");
    printf("Your Total Score is: %d", score); 
    printf("\n");

    char restart[10];
    printf("\033[0;37m");
    printf("Press y to play again or n to exit the game: ");
    scanf("%s", &restart);
    if(strcmp(restart, "y") == 0){
        main();
        printf("\033[0;37;m");
    }
    return 0; 
}