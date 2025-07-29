#include <stdio.h>
#include <assert.h>
int color_index_to_pair(i,j){
    return i * 5 + j+1;
}
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", color_index_to_pair(i,j), majorColor[i], minorColor[j]);
        }
    }
    return i * j;
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 16);
    assert(color_index_to_pair(0,0) == 1); 
    assert(color_index_to_pair(4,4) == 25);
    assert(color_index_to_pair(2,3) == 18);
    assert(color_index_to_pair(3,1) == 22);
    assert(color_index_to_pair(1,2) == 8);  
    assert(color_index_to_pair(0,4) == 5);
    assert(color_index_to_pair(4,0) == 21); 
    assert(color_index_to_pair(2,0) == 11);
    printf("All is well (maybe!)\n");
    return 0;
}
