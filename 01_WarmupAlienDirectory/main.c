/*
 * Copyright (C) 2022 by Michael Farmbauer
 *
 */
#include <stdio.h>

/*
 * -- %< --------- Place your solution here --------------------
 */


/**
 * @brief test if words are sorted lexicographically in alien language
 *
 * @param words      array of pointers to words in alien language
 * @param wordsSize  number of alien words in words
 * @param order      order of characters in alien language
 * @return 1 if all words are sorted lexicographically
 */
int isAlienSorted(char ** words, int wordsSize, char * order)
{

    // start here


    return 0; // FIXME return 1 if all words are in ascending order
}

/*
 * -- %< -------------------------------------------------------
 */

#define NUM_EXAMPLES 3

/**
 * @brief Datatype for storage of test data and expected results
 *
 * @note Using void* as two dimensional arrays are not well supported in C
 */
struct testcase {
    char *Name;
    int wordsSize;      /**< The number of alien words in words. */
    char **words;       /**< Array of pointers to words in alien language. */
    char *order;        /**< Order of characters in alien language */
    int expectedResult; /**< Expectes result for this example */
} example[NUM_EXAMPLES] = {
    {
	"Example 1",
	2,
	(char *[2]){
	    "hello", "leetcode"
	},
	"hlabcdefgijkmnopqrstuvwxyz",
	1
    },
    {
	"Example 2",
	3,
	(char*[3]){
	    "word", "world", "row"
	},
	"worldabcefghijkmnpqstuvxyz",
	0
    },
    {
	"Example 3",
	2,
	(char *[2]){
	    "apple", "app"
	},
	"worldabcefghijkmnpqstuvxyz",
	0
    },
};

int main()
{

    for (int i=0; i < NUM_EXAMPLES; i++)
    {
	int result = 0;
	printf("Running example: %s ...\n", example[i].Name);
	result = isAlienSorted(example[i].words, example[i].wordsSize, example[i].order);
	if (result == example[i].expectedResult)
	{ // success
	    printf("*** PASSED ***\n");
	}
	else
	{
	    printf("The result: %d is not correct.\n*** BREAK ***\n", result);
	    break;
	}
    }
    return 0;
}
