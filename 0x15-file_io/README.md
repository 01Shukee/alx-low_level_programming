In C programming language, file I/O (input/output) refers to the process of reading from and writing to files on a computer's storage system. Here are the basic steps to perform file I/O operations in C:

1. Open the file: To perform any operation on a file, you must first open it. The `fopen()` function is used to open a file in C. It takes two arguments - the name of the file to be opened and the mode in which the file is to be accessed (read, write, append, etc.).

2. Read from the file: To read data from a file, you can use functions such as `fscanf()` and `fgets()`. The `fscanf()` function is used to read formatted data from a file, while the `fgets()` function is used to read a line of text from a file.

3. Write to the file: To write data to a file, you can use functions such as `fprintf()` and `fputs()`. The `fprintf()` function is used to write formatted data to a file, while the `fputs()` function is used to write a string of text to a file.

4. Close the file: After you have finished reading from or writing to a file, you must close it using the `fclose()` function.

