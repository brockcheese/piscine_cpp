#include <cstdio>
#include <iostream>

//capitalizes every string passed as an argument

int main(int argc, char ** argv)
{
    int i; //indexer
    int j; //subindexer

    if (argc == 1)
    { //prints default statement if no strings passed
        puts("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    }
    else 
    {
        i = 0; //initialize index to 0
        while (argv[++i]) //for each argument passed
        {
            j = -1; //initialize subindex to -1
            while(argv[i][++j]) //for each letter in string
            { //capitalize each letter in string
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    argv[i][j] -= ' ';
            }
            std::cout << argv[i]; //output current string
        }
        puts(""); //prints newline
    }
    return (0); //end the function
}
