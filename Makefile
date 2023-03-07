 CC= gcc -std=c11 -D_GNU_SOURCE
WWW= -Wall -Wextra -Werror
CAT= math.c math.h

all: math

math:
	$(CC) $(WWW) $(CAT) -o math

style:
	clang-format --style=google -n *.c *.h

leaks:
	CK_FORK=no leaks --atExit -- ./s21_cat

clean:
	rm -rf s21_cat
