#include <stdio.h>
#include <math.h>

//Declaration of the functions i will be using in the program
float area_circle(float radius);
float circumference_circle(float radius);

float area_rectangle(float length, float width);
float perimeter_rectangle(float length, float width);

float area_triangle(float a, float b, float c);
float perimeter_triangle(float a, float b, float c);

// the main function
int main() {
    int choice;
    float a, b, c;

    do {
        // The menu
        printf("\nChoose a shape:\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%f", &a);
                if (a <= 0) {
                    printf("Invalid radius!\n");
                    break;
                }
                printf("Area of Circle = %.2f\n", area_circle(a));
                printf("Circumference of Circle = %.2f\n", circumference_circle(a));
                break;

            case 2:
                printf("Enter the length and width of the rectangle: ");
                scanf("%f %f", &a, &b);
                if (a <= 0 || b <= 0) {
                    printf("Invalid dimensions!\n");
                    break;
                }
                printf("Area of Rectangle = %.2f\n", area_rectangle(a, b));
                printf("Perimeter of Rectangle = %.2f\n", perimeter_rectangle(a, b));
                break;

            case 3:
                printf("Enter the three sides of the triangle: ");
                scanf("%f %f %f", &a, &b, &c);
                if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
                    printf("Invalid triangle sides!\n");
                    break;
                }
                printf("Area of Triangle = %.2f\n", area_triangle(a, b, c));
                printf("Perimeter of Triangle = %.2f\n", perimeter_triangle(a, b, c));
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 0);

    return 0;
}

// Function for circle
float area_circle(float radius) {
    return 3.14 * radius * radius;
}
float circumference_circle(float radius) {
    return 2 * 3.14 * radius;
}

// Function for rectangle
float area_rectangle(float length, float width) {
    return length * width;
}
float perimeter_rectangle(float length, float width) {
    return 2 * (length + width);
}

// Function for triangle
float area_triangle(float a, float b, float c) {
    float s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c)); 
}
float perimeter_triangle(float a, float b, float c) {
    return a + b + c;
}
