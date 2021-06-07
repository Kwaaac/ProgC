#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

#define NB_PACK 4096

int hash(char *word)
{
	int i;
	unsigned int hash = 0;
	for (i = 0; i < strlen(word); i++)
	{
		hash += (i + 1) * word[i];
	}
	hash = hash % NB_PACK;
	return hash;
}

void insert_in_hashtable(List hashtable[], int h, char *word)
{
	if (hashtable[h] == NULL)
	{
		Node *node = create_link(word);
		insert_link(&hashtable[h], node);
	}
	else
	{
		List *l = &hashtable[h];
		/* Only insert a word if this word is not already in the list that in the hashtable at the h position */
		if (search_link(*l, word) == NULL)
		{
			Node *node = create_link(word);
			insert_link(l, node);
		}
	}
}

void read_file(char *file_name, List hashtable[])
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
		int h = hash(word);
		/*printf("Hash du mot %s => %d\n", word, h);*/

		insert_in_hashtable(hashtable, h, word);
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

	List hashTable[NB_PACK];

	int i;
	for (i = 0; i < NB_PACK; i++)
	{
		hashTable[i] = NULL;
	}

	read_file(argv[1], hashTable);

	/*printf("\nAll words in the hashtable :\n");
	print_hashtable(hashTable, NB_PACK);
	printf("\n");*/

	printf("%d different words found in %s\n", size_hashtable(hashTable, NB_PACK), argv[1]);

	free_hashtable(hashTable, NB_PACK);

	return 0;
}
