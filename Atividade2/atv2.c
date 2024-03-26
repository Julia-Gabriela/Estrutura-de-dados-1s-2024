#include <stdio.h>
#include <stdlib.h>

int e_primo(int num)
{
    if (num <= 1)
    {
        return 0; // se for 0 ou 1, não e primo
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // se for divisivel por algum numero, não e primo
        }
    }
    return 1; // se n for divisivil ele e primo
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("valor invalido\n");
        return 1;
    }
    int num = atoi(argv[1]);

    if (e_primo(num))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
