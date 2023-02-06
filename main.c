#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    
    int user_counter, com_counter = 0;
    
        
    while (1) {    
        char user_option[10];
        printf("rock, paper, scissor: ");
        scanf("%s", user_option);
        
        if (strcmp(user_option, "rock") != 0 && strcmp(user_option, "paper") != 0 && strcmp(user_option, "scissor") != 0 && strcmp(user_option, "q") != 0) {
            printf("\nInvalid option. Try again.\n\n");
            continue;
        }
        
        if (strcmp(user_option, "q") == 0) {
            printf("\nDo you want to quit? (Yes or No): ");
            char user_quit[10];
            scanf("%s", user_quit);
            
            if (strcmp(user_quit, "yes") == 0) {
                printf("\nExiting the game...\n");
                break;
            } else if (strcmp(user_quit, "no") == 0) {
                printf("\nContinuing the game...\n\n");
                continue;
            } else {
                printf("\nInvalid input. Try again.\n\n");
                continue;
            }
        }
                
        char *com_option[] = {"rock", "scissor", "paper"};
        srand(time(NULL));  
        int count = sizeof(com_option) / sizeof(com_option[0]);  
        int index = rand() % count;  
        printf("enemy: %s\n", com_option[index]);
        
        if (strcmp(user_option, com_option[index]) == 0) {
            printf("draw\n\n");
        } else if (strcmp(user_option, "rock") == 0 && strcmp(com_option[index], "scissor") == 0) {
            printf("you win\n\n");
            user_counter++;
        } else if (strcmp(user_option, "paper") == 0 && strcmp(com_option[index], "rock") == 0) {
            printf("you win\n\n");
            user_counter++;
        } else if (strcmp(user_option, "scissor") == 0 && strcmp(com_option[index], "paper") == 0) {
            printf("you win\n\n");
            user_counter++;
        } else {
            printf("you lose\n\n");
            com_counter++;
        }
        
        printf("you - enemy\n %d\t%d\n\n", user_counter, com_counter);
        

    }
    return 0;
}
