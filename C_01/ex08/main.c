#include <unistd.h>

int main(void)
{
    int x;
    int ar[4];

    x = 0;
    ar[0] = 4;
    ar[1] = 7;
    ar[2] = 2;
    ar[3] = 9;

    ft_sort_int_tab(*ar, 4);

    while (x <= 3)
    {
        ar[x] = ar[x] + 48;
        write (1, &ar[x], 1);
        x++;
    }
    return 0;
}