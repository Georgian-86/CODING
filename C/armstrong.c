// #include <stdio.h>
// #include <math.h>
// int main()
// {   
//     int num, originalNum, remainder, result = 0;
//     printf("Enter a three-digit integer: ");
//     scanf("%d", &num);
//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += remainder * remainder * remainder;
//         originalNum /= 10;
//     }

//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);

//     return 0;
// }
#include <stdio.h>

int main() {
    int num = 7;
    int result = num > 5 ? num * 2 : num + 1;
    printf("%d", result);
    return 0;
}
