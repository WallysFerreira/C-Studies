#ifndef WORD_H
#define WORD_H

/*
 * Reads the next word from input and stores it in word.
 * Makes word empty if no word could be read.
 * Truncates the word if its length exceeds len.
 * Returns length of read word.
*/
int read_word(char *word, int len);
#endif
