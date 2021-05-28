#include <stdio.h> //files from cs50
#include <cs50.h> //library data
#include <math.h> //math data from cs50

int main(void)
{
    float dollar;
    do
    {
    dollar = get_float("Enter your change in dollars:\n");
}
while (dollar >= 0);

int cents = round(dollar*100);
int coins = 0;

while(cents >= 25)
{
    cents = cents - 25;
    coins++;
}
while(cents >= 10)
{
    cents = cents - 10;
    coins++;
}
while(cents >= 5)
{
    cents = cents - 5;
    coins++;
}
while(cents >= 1)
{
    cents = cents - 1;
    coins++;
}
 printf("You will need atleast %i coins.\n", coins);
}
