#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker - checks if a given char is number or not
 * @a: character
 * Return: 1, if its a number, else 0
 **/
int num_checker(char *a)
{
        int i, num, len;

        i = 0;
        num = 0;
        len = strlen(a);
        while (i < len)
        {
                if (a[i] < '0' || a[i] > '9')
                {
                        return (-1);
                }
                else
                        num = num * 10 + (a[i] - '0');
                i++;
        }
        return (num);
}
/**
 * main - adds positive numbers
 * @argc: arguement count
 * @argv: argument string
 * Return: result of addition
 **/
int main(int argc, char **argv)
{
        int i, num, sum;

        sum = 0;
        for (i = 1; i < argc; i++)
        {
                num = num_checker(argv[i]);
                if (num == -1)
                {
                        printf("Error\n");
                        return (1);
                }
                sum += num;
        }
        printf("%d\n", sum);
        return (0);
}

