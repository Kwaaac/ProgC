#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void read_file(char *file_name, List *l)
{
	FILE *file = fopen(file_name, "r");
	if (file == NULL)
	{
		printf("Cannot open file %s\n", file_name);
		exit(1);
	}

	char word[4096];
	while (fscanf(file, "%s", word) == 1)
	{
		/* Only insert a word if this word is not already in the list */
		if (search_link(*l, word) == NULL)
		{
			Node *node = create_link(word);
			insert_link(l, node);
		}
	}
	fclose(file);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage : %s <file_name>\n", argv[0]);
		exit(1);
	}

	List list = NULL;

	read_file(argv[1], &list);

	/*printf("All words in the list :\n");
	print_list(list);
	printf("\n\n");*/

	printf("%d different words found in %s\n", size_list(list), argv[1]);

	free_list(&list);

	return 0;
}
