#include <stdio.h>
int main() {

    int number;
    int i;
    int sum = 0;
    float average;

    printf("Enter integers, 9999 to stop: ");
    scanf("%d",&number);

    for ( i=0 ;number != 9999; i++ ){
        sum = sum + number;
        printf("Enter integers, 9999 to stop: ");
        scanf("%d",&number);
    }

    average = sum / i;
    printf("Sum is %d\n",sum);
    printf("Average is %.2f",average);

    return 0;
}



