#include <stdio.h>

char tape[100];
char *ptr = &tape[0];

int main() {
	setbuf(stdout, NULL);

	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	while (*ptr) {
		ptr++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		ptr--;
		(*ptr)--;
	}
	ptr++;
	while (*ptr) {
		ptr--;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		ptr++;
		(*ptr)--;
	}
	(*ptr)++;
	ptr--;
	while (*ptr) {
		ptr++;
		(*ptr)--;
		ptr--;
		while (*ptr) {
			ptr++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			ptr--;
			(*ptr)--;
		}
		ptr++;
		while (*ptr) {
			ptr--;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			ptr++;
			(*ptr)--;
		}
		ptr--;
		while (*ptr) {
			ptr++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			ptr--;
			(*ptr)--;
		}
		(*ptr)++;
		ptr++;
		while (*ptr) {
			ptr++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			while (*ptr) {
				ptr++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				ptr--;
				(*ptr)--;
			}
			ptr++;
			(*ptr)++;
			printf("%c", *ptr);
			(*ptr)--;
			printf("%c", *ptr);
			while (*ptr) {
				(*ptr)--;
			}
			ptr--;
			ptr--;
			while (*ptr) {
				(*ptr)--;
			}
			ptr--;
			(*ptr)--;
			ptr++;
		}
		ptr--;
		while (*ptr) {
			ptr++;
			ptr++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			while (*ptr) {
				ptr++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				(*ptr)++;
				ptr--;
				(*ptr)--;
			}
			ptr++;
			printf("%c", *ptr);
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			printf("%c", *ptr);
			while (*ptr) {
				(*ptr)--;
			}
			ptr--;
			ptr--;
			ptr--;
			(*ptr)--;
		}
	}
	ptr++;
	while (*ptr) {
		ptr++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		while (*ptr) {
			ptr++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			(*ptr)++;
			ptr--;
			(*ptr)--;
		}
		ptr++;
		printf("%c", *ptr);
		while (*ptr) {
			(*ptr)--;
		}
		ptr--;
		ptr--;
		(*ptr)--;
	}
	ptr--;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	while (*ptr) {
		ptr++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		ptr++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		ptr++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		(*ptr)++;
		ptr++;
		(*ptr)++;
		ptr--;
		ptr--;
		ptr--;
		ptr--;
		(*ptr)--;
	}
	ptr++;
	(*ptr)--;
	printf("%c", *ptr);
	ptr++;
	(*ptr)--;
	printf("%c", *ptr);
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	printf("%c", *ptr);
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	printf("%c", *ptr);
	ptr--;
	printf("%c", *ptr);
	ptr++;
	ptr++;
	printf("%c", *ptr);
	(*ptr)++;
	(*ptr)++;
	printf("%c", *ptr);
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	(*ptr)++;
	printf("%c", *ptr);
	printf("%c", *ptr);
	ptr--;
	(*ptr)--;
	printf("%c", *ptr);
	ptr++;
	ptr++;
	(*ptr)--;
	printf("%c", *ptr);
	while (*ptr) {
		while (*ptr) {
			(*ptr)--;
		}
		ptr--;
	}

	return 0;
}