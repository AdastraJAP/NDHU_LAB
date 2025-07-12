#include <stdio.h>
#include <stdlib.h>

#define MAX_BUILDINGS 5000
#define MAX_EVENTS (MAX_BUILDINGS * 2)

typedef struct {
    int x;
    int height;
} Event;

// Max-heap structure to store heights
typedef struct {
    int height;
    int count;
} Height;

Height max_heap[MAX_BUILDINGS];
int heap_size = 0;

void push(int height) {
    max_heap[heap_size].height = height;
    max_heap[heap_size].count = 1;
    int i = heap_size++;
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (max_heap[parent].height >= max_heap[i].height) break;
        Height temp = max_heap[parent];
        max_heap[parent] = max_heap[i];
        max_heap[i] = temp;
        i = parent;
    }
}

void pop() {
    if (heap_size == 0) return;
    max_heap[0] = max_heap[--heap_size];
    int i = 0;
    while (1) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;
        if (left < heap_size && max_heap[left].height > max_heap[largest].height) {
            largest = left;
        }
        if (right < heap_size && max_heap[right].height > max_heap[largest].height) {
            largest = right;
        }
        if (largest == i) break;
        Height temp = max_heap[i];
        max_heap[i] = max_heap[largest];
        max_heap[largest] = temp;
        i = largest;
    }
}

int top() {
    return heap_size > 0 ? max_heap[0].height : 0;
}

void decrease_height(int height) {
    for (int i = 0; i < heap_size; i++) {
        if (max_heap[i].height == height) {
            max_heap[i].count--;
            if (max_heap[i].count == 0) {
                max_heap[i] = max_heap[--heap_size];
                // Re-heapify the max-heap
                for (int j = (heap_size - 1) / 2; j >= 0; j--) {
                    int k = j;
                    while (1) {
                        int left = 2 * k + 1;
                        int right = 2 * k + 2;
                        int largest = k;
                        if (left < heap_size && max_heap[left].height > max_heap[largest].height) {
                            largest = left;
                        }
                        if (right < heap_size && max_heap[right].height > max_heap[largest].height) {
                            largest = right;
                        }
                        if (largest == k) break;
                        Height temp = max_heap[k];
                        max_heap[k] = max_heap[largest];
                        max_heap[largest] = temp;
                        k = largest;
                    }
                }
            }
            return;
        }
    }
}

int compare_events(const void *a, const void *b) {
    Event *event1 = (Event *)a;
    Event *event2 = (Event *)b;
    if (event1->x == event2->x) {
        return event1->height - event2->height;
    }
    return event1->x - event2->x;
}

int main() {
    Event events[MAX_EVENTS];
    int buildings[MAX_BUILDINGS][3];
    int n = 0;

    // Read input
    while (scanf("%d %d %d", &buildings[n][0], &buildings[n][1], &buildings[n][2]) == 3) {
        events[n * 2] = (Event){buildings[n][0], -buildings[n][1]}; // Start of building
        events[n * 2 + 1] = (Event){buildings[n][2], buildings[n][1]}; // End of building
        n++;
    }

    // Sort events
    qsort(events, n * 2, sizeof(Event), compare_events);

    int current_height = 0;
    int result[20000]; // Maximum size for output
    int result_size = 0;

    for (int i = 0; i < n * 2; i++) {
        int x = events[i].x;
        int height = events[i].height;

        if (height < 0) { // Start of a building
            height = -height; // Make height positive
            push(height);
        } else {decrease_height(height);
        }

        int new_height = top();
        if (new_height != current_height) {
            result[result_size++] = x; // x-coordinate
            result[result_size++] = new_height; // new height
            current_height = new_height;
        }
    }

    // Print the result
    for (int i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}