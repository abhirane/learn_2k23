#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void volume_and_surface_area(struct Box* box, float* volume, float* surfaceArea) {
    *volume = box->length * box->width * box->height;
    *surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox = { 2.5, 3.0, 4.0 };
    struct Box* boxPtr = &myBox;
    float volume, surface_area;

    volume_and_surface_area(boxPtr, &volume, &surface_area);

    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surface_area);

    return 0;
}