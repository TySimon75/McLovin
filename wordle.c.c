/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
    /*Maybe change the whole thing to a giant if else statment that repeats all 
    of this 6 times and on the last time it tells you that you have failed*/
    char word[] = {"plant"};
    //Idk why this is here ^
    char inp1, inp2, inp3, inp4, inp5;
    char c1 = 'p';
    char c2 = 'l';
    char c3 = 'a';
    char c4 = 'n';
    char c5 = 't';
    //Need to change this to a table maybe, designating the word kinda sucks
    
    printf("--------------------------------Rules--------------------------------\n");
    printf("When prompted enter a lowercase 5 letter word\n");
    printf("If the letter is in the correct location you will be told so\n");
    printf("If the letter is in the word, but in the incorrect spot you\n");
    printf("Will be told so, this does not mean that repeats letters are correct\n");
    printf("For example if the word is plant and you enter apple, both p's will say\n");
    printf("that they are in the wrong spot, even though one is not in the final word\n");
    printf("If the word is incorrect you will be told so\n\n");
    printf("Good Luck!\n\n");
    /*We dont have to include this i just thought it would be good if we had rules
    especially for how you need to enter the word*/
    
    
    printf("Enter Word\n");
    scanf("%c%c%c%c%c", &inp1, &inp2, &inp3, &inp4, &inp5);
    //Maybe change this to an array or smn?? I forgot how.
    
    if (inp1 == c1) {
        printf("%c is in the correct spot\n", inp1);} 
    else if (inp1 == c2) {
        printf("%c is in the wrong spot\n", inp1);} 
    else if (inp1 == c3) {
        printf("%c is in the wrong spot\n", inp1);}
    else if (inp1 == c4) {
        printf("%c is in the wrong spot\n", inp1);}
    else if (inp1 == c5) {
        printf("%c is in the wrong spot\n", inp1);}
    else {
        printf("%c is incorrect\n", inp1);}
        
    if (inp2 == c2) {
        printf("%c is in the correct spot\n", inp2);} 
    else if (inp2 == c1) {
        printf("%c is in the wrong spot\n", inp2);} 
    else if (inp2 == c3) {
        printf("%c is in the wrong spot\n", inp2);}
    else if (inp2 == c4) {
        printf("%c is in the wrong spot\n", inp2);}
    else if (inp2 == c5) {
        printf("%c is in the wrong spot\n", inp2);}
    else {
        printf("%c is incorrect\n", inp2);}
        
    if (inp3 == c3) {
        printf("%c is in the correct spot\n", inp3);} 
    else if (inp3 == c1) {
        printf("%c is in the wrong spot\n", inp3);} 
    else if (inp3 == c2) {
        printf("%c is in the wrong spot\n", inp3);}
    else if (inp3 == c4) {
        printf("%c is in the wrong spot\n", inp3);}
    else if (inp3 == c5) {
        printf("%c is in the wrong spot\n", inp3);}
    else {
        printf("%c is incorrect\n", inp3);}
        
    if (inp4 == c4) {
        printf("%c is in the correct spot\n", inp4);} 
    else if (inp4 == c1) {
        printf("%c is in the wrong spot\n", inp4);} 
    else if (inp4 == c2) {
        printf("%c is in the wrong spot\n", inp4);}
    else if (inp4 == c3) {
        printf("%c is in the wrong spot\n", inp4);}
    else if (inp4 == c5) {
        printf("%c is in the wrong spot\n", inp4);}
    else {
        printf("%c is incorrect\n", inp4);}
        
    if (inp5 == c5) {
        printf("%c is in the correct spot\n", inp5);} 
    else if (inp5 == c1) {
        printf("%c is in the wrong spot\n", inp5);} 
    else if (inp5 == c2) {
        printf("%c is in the wrong spot\n", inp5);}
    else if (inp5 == c3) {
        printf("%c is in the wrong spot\n", inp5);}
    else if (inp5 == c4) {
        printf("%c is in the wrong spot\n", inp5);}
    else {
        printf("%c is incorrect\n", inp5);}

    if (inp1 == c1, inp2 == c2, inp3 == c3, inp4 == c4, inp5 == c5) {
        printf("Congratulations You Got The Word Right");}
    /*This might need changed, if you enter a longer word and the first 5 letters
    are plant it still says you are correct, this will be fixed with an array I think*/
    /* here i would put an else statemnt that just copies the hundred lines of code
    above so that it repeats, idk a better way to make it give players another 
    attempt than that */
    /*else {
	printf("You were incorrect try again\n");
        char inp6, inp7, inp8, inp9, inp10;
        char c1 = 'p';
        char c2 = 'l';
        char c3 = 'a';
        char c4 = 'n';
        char c5 = 't';
        printf("Enter Word\n");
        scanf("%c%c%c%c%c", &inp6, &inp7, &inp8, &inp9, &inp10);
    
        if (inp6 == c1) {
            printf("%c is in the correct spot\n", inp6);} 
        else if (inp6 == c2) {
            printf("%c is in the wrong spot\n", inp6);} 
        else if (inp6 == c3) {
            printf("%c is in the wrong spot\n", inp6);}
        else if (inp6 == c4) {
            printf("%c is in the wrong spot\n", inp6);}
        else if (inp6 == c5) {
            printf("%c is in the wrong spot\n", inp6);}
        else {
            printf("%c is incorrect\n", inp6);}
        
        if (inp7 == c2) {
            printf("%c is in the correct spot\n", inp7);} 
        else if (inp7 == c1) {
            printf("%c is in the wrong spot\n", inp7);} 
        else if (inp7 == c3) {
            printf("%c is in the wrong spot\n", inp7);}
        else if (inp7 == c4) {
            printf("%c is in the wrong spot\n", inp7);}
        else if (inp7 == c5) {
            printf("%c is in the wrong spot\n", inp7);}
        else {
            printf("%c is incorrect\n", inp7);}
        
        if (inp8 == c3) {
            printf("%c is in the correct spot\n", inp8);} 
        else if (inp8 == c1) {
            printf("%c is in the wrong spot\n", inp8);} 
        else if (inp8 == c2) {
            printf("%c is in the wrong spot\n", inp8);}
        else if (inp8 == c4) {
            printf("%c is in the wrong spot\n", inp8);}
        else if (inp8 == c5) {
            printf("%c is in the wrong spot\n", inp8);}
        else {
            printf("%c is incorrect\n", inp8);}
        
        if (inp9 == c4) {
            printf("%c is in the correct spot\n", inp9);} 
        else if (inp9 == c1) {
            printf("%c is in the wrong spot\n", inp9);} 
        else if (inp9 == c2) {
            printf("%c is in the wrong spot\n", inp9);}
        else if (inp9 == c3) {
            printf("%c is in the wrong spot\n", inp9);}
        else if (inp9 == c5) {
            printf("%c is in the wrong spot\n", inp9);}
        else {
            printf("%c is incorrect\n", inp9);}
        
        if (inp10 == c5) {
            printf("%c is in the correct spot\n", inp10);} 
        else if (inp10 == c1) {
            printf("%c is in the wrong spot\n", inp10);} 
        else if (inp10 == c2) {
            printf("%c is in the wrong spot\n", inp10);}
        else if (inp10 == c3) {
            printf("%c is in the wrong spot\n", inp10);}
        else if (inp10 == c4) {
            printf("%c is in the wrong spot\n", inp10);}
        else {
            printf("%c is incorrect\n", inp10);}

        if (inp6 == c1, inp7 == c2, inp8 == c3, inp9 == c4, inp10 == c5) {
            printf("Congratulations You Got The Word Right");}
    }*/
    //This doesnt quite work, i will try to fix it later maybe
    return 0;
}