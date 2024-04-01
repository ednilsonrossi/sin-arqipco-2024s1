#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, media;

    scanf("%f", &a);
    scanf("%f", &b);

    media = (a * 3.5 + b * 7.5) / (3.5 + 7.5);

    printf("MEDIA = %.5f\n", media);

    return 0;
}
