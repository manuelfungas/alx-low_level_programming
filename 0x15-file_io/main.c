#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, char **argv)
{
    int result;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s filename text\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    result = append_text_to_file(argv[1], argv[2]);

    if (result == 1)
    {
        printf("Text appended successfully.\n");
        return EXIT_SUCCESS;
    }
    else
    {
        fprintf(stderr, "Error appending text to the file.\n");
        return EXIT_FAILURE;
    }
}
  
