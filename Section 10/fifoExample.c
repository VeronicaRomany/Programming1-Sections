//
// Created by veror on 12/20/2024.
//
#include <stdio.h>

#define MAX_FRAMES 3  // Number of frames in memory

int frames[MAX_FRAMES];
int rear = 0;  // End of the queue
int pageFaults = 0;


void displayFrames() {
    for (int i = 0; i < rear; i++) {
        printf("%d ", frames[i]);
    }
    printf("\n");
}

void insert(int page) {
    for(int i = 0 ; i < rear; i++){
        if(frames[i] == page){
            printf("page is already loaded in a frame %d \n",i);
            return;
        }
    }

    if (rear == MAX_FRAMES) {
        // Memory is full, remove the first page
        for (int i = 0; i < rear; i++) {
            frames[i] = frames[i + 1];
        }
        pageFaults++;
        frames[rear-1] = page;  // Add new page at the end
    } else {
        // Add new page to the queue
        frames[rear] = page;
        rear++;
    }
    displayFrames();
}

int main() {
    int requests[] = {1, 2, 3, 4, 1, 2, 5, 1, 2, 3, 4, 5};
    int n = sizeof(requests) / sizeof(requests[0]);
    for (int i = 0; i < n; i++) {
        insert(requests[i]);
    }
    printf("Total page faults: %d\n", pageFaults);
    return 0;
}