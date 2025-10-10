#include <stdio.h>
#include <string.h>

int main() {
    char date[] = "10/04/2025";  // Input date
    char formattedDate[20];      // Output buffer

    // Extract day and year
    char day[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Format the new date
    sprintf(formattedDate, "%s-Apr-%s", day, year);

    printf("Formatted Date: %s\n", formattedDate);
    return 0;
}
