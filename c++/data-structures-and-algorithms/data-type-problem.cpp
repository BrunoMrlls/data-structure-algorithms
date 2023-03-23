#include <iostream>

int main() {
    //3 12345678912345 a 334.23 14049.30493
    int intValue;
    long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    scanf("%d %ld %c %f %lf", &intValue, &longValue, &charValue, &floatValue, &doubleValue);
    printf("%d \n%ld \n%c \n%.3f \n%.9lf \n", intValue, longValue, charValue, floatValue, doubleValue);
    return 0;
}