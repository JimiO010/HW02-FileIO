/* PLEASE EDIT THIS FILE */

#include "filechar.h"

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

/* BEGIN STUDENT ANSWER HELPER FUNCTIONS */

static inline int char_to_index(char character) {
  // turn both [a-z] and [A-Z] into the index used to increment their spots in
  // the array.
  if (!isalpha((unsigned char)character)) {
    return -1;
  }
  char lower = (char)tolower((unsigned char)character);
  return (int)(lower - 'a');  // 'a' -> 0, ..., 'z' -> 25
}

static inline char index_to_char(int index) {
  // turn the index into [a-z] or ' '
  if (index == ALPHABET_SIZE) {  // special slot for no partner
    return ' ';
  }
  return (char)('a' + index);
}

/* END STUDENT ANSWER HELPER FUNCTIONS */

bool countChar(char *filename, int counts[][ALPHABET_SIZE_W_SPACE]) {
  /* BEGIN STUDENT ANSWER */

  // complete as described in the README

  /* END STUDENT ANSWER */
}

void printCounts(int counts[][ALPHABET_SIZE_W_SPACE]) {
  /* BEGIN STUDENT ANSWER */

  // complete as described in the README

  /* END STUDENT ANSWER */
}
