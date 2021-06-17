#ifndef TRIE_NODE_H
	#define TRIE_NODE_H

	#define AZ 26 // english alphabet size
	#define CHAR_TO_INDEX(c) ((short int)c - (short int)'a')

	#include <stdlib.h>
	#include <string.h>
	#include "../bool/bool.h"

	typedef struct STrieNode
	{
		struct STrieNode *children[AZ];

		short int is_leaf;
	} TrieNode;

	// Returns a new TrieNode
	TrieNode* create_node();

	// inserts a new element if not exists
	void insert(TrieNode *root, const char *word);

	// returns 1 if word found otherwise 0
	short int search(TrieNode *root, const char *word);

	// returns the word which can be built one character at a time by other words in the Trie
	char *search_longest_word(TrieNode *root);

#endif