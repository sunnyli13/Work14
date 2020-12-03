#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *cmd[5];

char **parse_args (char *line) {
	char **a = cmd;
	char *token;
	char *p;
	int count = 0;
	p = line;

	while (p) {
		token = strsep(&p, " "); 
		a[count] = token;
		count++;
	}
	
	a[count] = NULL;
	return a;
}

int main() {
	char line[] = "ls -a -l";
	char **args = parse_args(line);
	execvp(args[0], args);
	return 0;
}