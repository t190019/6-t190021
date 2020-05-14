all: kadai6-1 kadai6-2 kadai6-3
kadai6-1: kadai6-1.c
	clang -o kadai6-1 kadai6-1.c
kadai6-2: kadai6-2.c
	clang -lm -o kadai6-2 kadai6-2.c
kadai6-3: kadai6-3.c
	clang -o kadai6-3 kadai6-3.c