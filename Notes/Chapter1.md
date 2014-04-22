To tell the compiler that library useful.h is in /usr/local/
   gcc -I/usr/local/include use_useful.c -o use_useful -L/usr/local/lib -luseful

Library order matters. 

To find libraries: 
   pkg-config --libs gsl libxml-2.0
returns
-lgsl -lgslcblas -lm -lxml2
  (--libs gets depends
  --cflags gets location)

Backticks example of using pkg-config to find stuff for you:
gcc `pkg-config --cflags --libs gsl libxml-2.0` -o specific specific.c

Runtime Libraries
