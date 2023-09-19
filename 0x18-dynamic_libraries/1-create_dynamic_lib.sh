# #!/bin/bash
# gcc -Wall -fPIC -c *.c
# gcc -shared -o liball.so *.o


#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc
