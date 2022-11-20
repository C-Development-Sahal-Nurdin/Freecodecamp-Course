#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "Sahal";
    int characterAge = 19;
    printf("There was a man names %s\n", characterName);
    printf("He was %d years old\n", characterAge);
    characterAge = 90;
    printf("He really liked the name %s\n", characterName);
    printf("But did not like being %d\n", characterAge);

    return 0;
}
