#include "main.h"
#include <stdlib.h>

// Function prototypes
int word_length(const char *str);
int count_words(const char *str);
char **split_string_into_words(const char *str);

/**
 * word_length - Calculate the length of a word in a string.
 * @str: The string to search.
 * Returns: The length of the word pointed to by str.
 */
int word_length(const char *str)
{
    int length = 0;

    while (*str && *str != ' ')
    {
        length++;
        str++;
    }

    return length;
}

/**
 * count_words - Count the number of words in a string.
 * @str: The string to analyze.
 * Returns: The number of words in str.
 */
int count_words(const char *str)
{
    int words = 0;

    while (*str)
    {
        // Skip spaces
        while (*str && *str == ' ')
            str++;

        if (*str)
        {
            words++;
            str += word_length(str);
        }
    }

    return words;
}

/**
 * split_string_into_words - Split a string into words.
 * @str: The string to split.
 * Returns: An array of strings (words).
 */
char **split_string_into_words(const char *str)
{
    if (str == NULL || str[0] == '\0')
        return NULL;

    int num_words = count_words(str);
    if (num_words == 0)
        return NULL;

    char **words_array = malloc(sizeof(char *) * (num_words + 1));
    if (words_array == NULL)
        return NULL;

    int word_index = 0;

    while (*str)
    {
        // Skip spaces
        while (*str && *str == ' ')
            str++;

        if (*str)
        {
            int word_len = word_length(str);
            words_array[word_index] = malloc(word_len + 1);

            if (words_array[word_index] == NULL)
            {
                for (int i = 0; i < word_index; i++)
                    free(words_array[i]);
                free(words_array);
                return NULL;
            }

            for (int i = 0; i < word_len; i++)
                words_array[word_index][i] = *str++;

            words_array[word_index][word_len] = '\0';
            word_index++;
        }
    }

    words_array[word_index] = NULL;

    return words_array;
}
