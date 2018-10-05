// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a trie
typedef struct node
{
    bool is_word;
    struct node *children[27];
}

// Represents a trie
node *root;

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize root of trie
    root = malloc(sizeof(node));
    if (root == NULL)
    {
        return false;
    }
    trie->is_word = false;
    for (int i = 0; i < 27; i++)
    {
        trie->children[i] = NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];

    // Insert words into trie
    while (fscanf(file, "%s", word) != EOF)
    {
        // TODO
    }

    // Close file
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
