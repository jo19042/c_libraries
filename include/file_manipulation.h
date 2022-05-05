#ifndef FILE_MANIPULATION_H
#define FILE_MANIPULATION_H

/**
 * @brief Reads integers from file and places into an input buffer.
 * 
 * @param buf buffer to hold integers
 * @param buf_size size of buffer
 * @param inputFileName name of file to be read from
 */
void read_numbers_from_file(int * buf, int buf_size, char * inputFileName);

/**
 * @brief Tests reading numbers from file function.
 * 
 */
void test_read_numbers_from_file();

#endif