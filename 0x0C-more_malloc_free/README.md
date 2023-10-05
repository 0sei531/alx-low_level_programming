#0x0C. C - More malloc, free
The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated  mem‐
       ory.   The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later
       be successfully passed to free().  If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an
       error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly
       sized block of memory would be allocated:
