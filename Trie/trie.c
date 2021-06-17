#include "trie.h"

TrieNode* create_node()
{
	TrieNode *new_node = (TrieNode *) calloc(1, sizeof(TrieNode));;

	for (int i = 0; i < AZ; i++)
		new_node->children[i] = NULL;

	new_node->is_leaf = FALSE;

	return new_node;
}

void insert(TrieNode *root, const char *word)
{
	short int index;
	TrieNode *pT = root;

	for (int i = 0; i < strlen(word); i++)
	{
		index = CHAR_TO_INDEX(word[i]);
		if (!pT->children[index])
			pT->children[index] = create_node();

		pT = pT->children[index];
	}

	// last node is a lief
	pT->is_leaf = TRUE;
}

short int search(TrieNode *root, const char *word)
{
	short int index;
	TrieNode *pT = root;

	for (int i = 0; i < strlen(word); i++)
	{
		index = CHAR_TO_INDEX(word[i]);
		if(!pT->children[index]) return FALSE;

		pT = pT->children[index];
	}

	return (pT != NULL && pT->is_leaf != FALSE);
}
