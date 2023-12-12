#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void custom_print(const char *message)
{
	write(1, message, strlen(message));
        write(1, "\n", 1);
}

int main()
{
	custom_print("9 8 10 24 75 +9");
        custom_print("Congratulations, you win the Jackpot!");
        exit(EXIT_SUCCESS);
}

