#include "trie.h"
#include <stdio.h>

int main ()
{
	// Input keys (use only 'a' through 'z' and lower case)
	char keys[][8] = {"the", "a", "there", "answer", "any",
										"by", "bye", "their"};

	char output[][32] = {"Not present in trie", "Present in trie"};


	TrieNode *root = create_node();

	// Construct trie
	int i;
	for (i = 0; i < 8; i++)
		insert(root, keys[i]);

	// Search for different keys
	printf("%s --- %s\n", "the", output[search(root, "the")] );
	printf("%s --- %s\n", "these", output[search(root, "these")] );
	printf("%s --- %s\n", "their", output[search(root, "their")] );
	printf("%s --- %s\n", "thaw", output[search(root, "thaw")] );

	return 0;
}