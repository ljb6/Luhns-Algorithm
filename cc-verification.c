#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long cn;

    cn = get_long("Enter the card number: ");
    long cc = cn;
    long divider = cn;

    int length = 0;
    while (divider > 0)
    {
        divider = divider / 10;
        length += 1;
    }

    int s = 0;
    int s2 = 0;
    for (int x = 0; x < length; x++)
    {
        if (x % 2 == 0)
        {
            s += (cn % 10);
        }
        else
        {
            int j;
            if (cn % 10 * 2 > 9)
            {
                s2 += ((cn % 10) * 2) % 10 + ((cn % 10) * 2) / 10;
            }
            else
            {
                s2 += (cn % 10 * 2);
            }
        }
        cn = cn / 10;
    }

    long divisor = 10;
    for (int d = 0; d < length - 2; d++)
    {
        divisor = divisor * 10;
    }

    int firstNum = cc / divisor;
    int firstAndSecondNum = cc / (divisor / 10);

    if ((s + s2) % 10 == 0)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
