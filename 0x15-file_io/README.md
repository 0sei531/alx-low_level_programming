Every process will contain the program it’s running, as well as 
space for stack and heap data. But it will also need somewhere 
to record where data streams like the Standard Output are 
connected. Each data stream is represented by a file descriptor, 
which, under the surface, is just a number. The process keeps 
everything straight by storing the file descriptors and their data 
streams in a descriptor table
