// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h> // Required for strcmp

// Define the enum for TrafficLight
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

int main() {
    char input_color[10]; // To store the input color as a string
    TrafficLight light;

    // Read the input color
    scanf("%s", input_color);

    // Convert string input to enum value
    if (strcmp(input_color, "RED") == 0) {
        light = RED;
    } else if (strcmp(input_color, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input_color, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid traffic light color.\n");
        return 1; // Indicate an error
    }

    // Print the action based on the enum value
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}