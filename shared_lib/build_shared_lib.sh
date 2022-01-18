gcc -o libcrash.so -shared -fPIC ../bbb.c ../ccc.c ../ddd.c ../eee.c ../fff.c ../last.c

gcc -o libcrash_g.so -shared -fPIC -g ../bbb.c ../ccc.c ../ddd.c ../eee.c ../fff.c ../last.c
