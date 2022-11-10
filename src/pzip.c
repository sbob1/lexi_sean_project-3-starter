#include <pthread.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pzip.h"

int char_frequency[26] = {0};


/**
 * pzip() - zip an array of characters in parallel
 *
 * Inputs:
 * @n_threads:		   The number of threads to use in pzip
 * @input_chars:		   The input characters (a-z) to be zipped
 * @input_chars_size:	   The number of characaters in the input file
 *
 * Outputs:
 * @zipped_chars:       The array of zipped_char structs
 * @zipped_chars_count:   The total count of inserted elements into the zippedChars array.
 * @char_frequency[26]: Total number of occurences
 *
 * NOTE: All outputs are already allocated. DO NOT MALLOC or REASSIGN THEM !!!
 *
 */
struct inputs {
	char *chars;
	int input_size, num_threads, *char_count;
}

void pzip(int n_threads, char *input_chars, int input_chars_size,
	  struct zipped_char *zipped_chars, int *zipped_chars_count,
	  int *char_frequency)
{
	pthread_t tid[n_threads];
	int chars_in_thread = input_chars_size / n_threads;
	int size = malloc(sizeof(int) * n_threads);
	int counter = 0;
	while(counter < n_threads) {
		struct inputs *args = (struct inputs *)malloc(sizeof(struct inputs));
	}

	printf ("TODO: Start from here!\n");
	exit(1);
}
