#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
   if (input == 5 || input >= 10 || input < 0)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
