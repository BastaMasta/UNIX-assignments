#include "library.h"

#include <stdio.h>
#include <string.h>

void hello(void)
{
    printf("Hello, World!\n");
}
void search(char query[], char search_param[]) {
    printf("Searching...\n");
    int found_flag = 0, i = 0, j = 0;
    for(i = 0; i < strlen(query); i++) {
        for (j = 0; j < strlen(search_param); j++) {
            if (query[i] == search_param[j]) {
                found_flag = 1;
                break;
            }
        }
        if (found_flag == 1) break;
    }
    if (found_flag == 0) printf("Not found\n");
    else printf("Found at position: %d \n", i);
}