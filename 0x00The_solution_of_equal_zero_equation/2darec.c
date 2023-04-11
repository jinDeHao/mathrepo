#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        double dilta;

        dilta = atoi(argv[2]) * atoi(argv[2]) - (4 * atoi(argv[1]) * atoi(argv[3]));
        if (dilta < 0)
        {
            printf("the equation has no solution in the rael numbers");
            return (1);
        }
        else
        {
            double x1, x2, b = atoi(argv[2]), a = atoi(argv[1]);

            x1 = (-b + sqrt(dilta)) / (2 * a);
            x2 = (-b - sqrt(dilta)) / (2 * a);
            printf("x1 = %f\n x2 = %f", x1, x2);
            return (0);
        }
    }
    else
    {
        printf("Error\n\tthe equation should look like this:\n\tax² +bx -c\n\t-ax² +bx +c\n\tax² -bx +c");
        return (1);
    }
}