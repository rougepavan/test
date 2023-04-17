#include <stdio.h>

int main() {

    int a,b,LCM;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    LCM = (a > b) ? a: b;

    while (1) 
	{
        if ((LCM%a== 0) && (LCM%b == 0)) 
		{
            printf("The LCM of %d and %d is %d.",a,b,LCM);
            break;
    }
        ++LCM;
    }
    return 0;
}
