#include "stdio.h"

int main() {
    int current_year;
    int age_years;
    printf("Enter current year\n");
    scanf("%d", &current_year);
    printf("Enter your age in years'\n");
    scanf("%d", &age_years);
    printf("You was born in: %d", current_year - age_years);

    return 0;
}
