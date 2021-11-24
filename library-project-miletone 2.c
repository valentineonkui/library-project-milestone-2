/*
    project: library-project-milestone 2
    author: valentine
    date:24th November 2021
    compiler: GCC
    language: C99
    license: MIT
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int action;
    action = main ();
    //execute action
    return 0;

    do {
        printf("welcome valentine\n");
        printf("what would you like to do? \n");
        printf("1. view user\n");
        printf("2. add new user\n");
        printf("3. edit user\n");
        printf("4. delete user\n");
        printf("5. change password\n");
        printf("6. logout\n");
        printf("7. exit system\n");
        printf("selected action(1-7):");
        scanf("%d",&action);
        if (action < 1 || action > 7);
    {
     printf("Invalid action. Try again" );
}
    } while  (action < 1 || action > 7);

    return action;
}
