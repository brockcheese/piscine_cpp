#include <cstdio>
#include <iostream>

int main(int argc, char ** argv)
{
    int i;
    int j; 

    if (argc == 1)
    {
        puts("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    }
    else 
    {
        i = 0;
        while (argv[++i])
        {
            j = -1;
            while(argv[i][++j])
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    argv[i][j] -= ' ';
            }
            std::cout << argv[i];
        }
        puts("");
    }
    return (0);
}