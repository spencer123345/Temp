#include <stdio.h>
void main()
{
    int tmp;

    printf("Enter weather temperature : ");
    scanf("%d" ,&tmp);
    if(tmp<0)
            printf("The weather is too cold.\n");
    else if(tmp<10)
            printf("The weather is very cold.\n");
    else if(tmp<20)
            printf("It's cold today.\n");
    else if(tmp<30)
             printf("The weather temperature is normal.\n");
    else if(tmp<40)
              printf("The weather is hot.\n");
    else
              printf("The weather is very hot.\n");


}
