#ifndef LINE_H
#define LINE_H

// Clears the current line.
void clear_line(void);

/*
 * Adds word to the end of current line.
 * Puts one space before word if it's not the first on the line.
*/
void add_word(const char *word);

// Returns the number of characters left in the current line.
int space_remaining(void);

// Writes the current line with justification
void write_line(void);

// Writes the current line without justification
void flush_line(void);

#endif
