#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
int word_length(char *str);
void free_words(char **words);
/**
 * strtow - Splits a string into words
 * @str: The string to be split
 * Return: On success, returns a pointer to an array of strings (words)
 * Returns NULL if str is NULL or an empty string,
 * or if memory allocation fails.
 */
char **strtow(char *str)
{
	char **words;
	int num_words, i, j;
	int word_len, index;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (*str == ' ')
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			return (NULL);
	}
	num_words = count_words(str);
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < num_words; i++)
	{
		while (*str == ' ')
			str++;
		word_len = word_length(str);
		words[index] = malloc(sizeof(char) * (word_len + 1));
		if (words[index] == NULL)
		{
			free_words(words);
			return (NULL);
		}
		for (j = 0; j < word_len; j++)
		{
			words[index][j] = *str;
			str++;
		}
		words[index][j] = '\0';
		index++;
	}
	words[index] = NULL;
	return (words);
}
/**
 * count_words - Counts the number of words in a string
 * @str: The string to be counted
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * word_length - Computes the length of a word in a string
 * @str: The string containing the word
 * Return: The length of the word
 */
int word_length(char *str)
{
	int length = 0;

	while (*str && *str != ' ')
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * free_words - Frees the memory allocated for an array of words
 * @words: The array of words
 * Return: None
 */
void free_words(char **words)
{
	int i;

	if (words == NULL)
		return;
	for (i = 0; words[i] != NULL; i++)
		free(words[i]);
	free(words);
}
