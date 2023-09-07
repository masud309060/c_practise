#include <stdio.h>
#include <math.h>



int add(int c, int d);
double findCircleArea(int r);

int main() {
    int arr[] = {100, 23, 34, 122, 344, 233, 323, 124, -220, -6};
    int n = 10;
    int max, min;
    double circleArea;

    max = findMax(arr, n);
    min = findMin(arr, n);
    circleArea = findCircleArea(max);


    printf("Biggest Number: %d \n", max);
    printf("Lowest Number: %d \n", min);

    printf("Circle Area: %0.2lf \n", circleArea);

    return 0;
};

int findMax(int arr[], int n) {
    int max = arr[0], i;

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int findMin(int arr[], int n) {
    int min = arr[0], i;

    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

double findCircleArea(int r) {
    double area;

    area = M_PI * r * r;
    return area;
}
