#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];

        // WE must intialize all the children array with null pointer intially
        // beacuse for now it has no children
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        // always intializing the root with this character
        root = new TrieNode('\0');
    }

    void Insert(string word, TrieNode *root)
    {

        // Base case
        if (word.size() == 0)
        {
            root->isTerminal = true;
            // *********** remember to write return
            return;
        }

        // small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            TrieNode *childNode = new TrieNode(word[0]);
            root->children[index] = childNode;
            child = childNode;
        }

        // recursion

        Insert(word.substr(1), child);
    }
    // 1. INSERT WORD
    // Only contain small alphabets

    void insert(string word)
    {
        return Insert(word, root);
    }

    // 2 . SEARCH WORD

    // helper function for search
    bool searchword(TrieNode *root, string word)
    {

        // Base Case
        if (word.size() == 0)
        {
            if (root->isTerminal == true)
                return true;
            else
                return false;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
            // Recursion
        }
        else
            return false;
        return searchword(child, word.substr(1));
    }
    bool search(string word)
    {
        // Write your code here
        return searchword(root, word);
    }

    // 3. REMOVE WORD

void removeWord(TrieNode *root, string word)
{
    // Base Case
    if (word.size() == 0)
    {
        root->isTerminal = false; // Mark the end of the word
        return;
    }

    // Small Calculation
    int index = word[0] - 'a';
    TrieNode *child = root->children[index];

    // If the child node is NULL, the word does not exist in the trie
    if (child == NULL)
        return;

    removeWord(child, word.substr(1));

    // If the child node is not a prefix of any other word and not an endpoint, delete it
    if (!child->isTerminal)
    {
        for (int i = 0; i < 26; i++)
        {
            if (child->children[i] != NULL)
                return;
        }
        delete child;
        root->children[index] = NULL;
    }
}

    void remove(string word)
    {
        // Write your code here
        removeWord(root, word);
    }
};

int main()
{
    Trie t;
    t.insert("and");
    t.insert("are");
    t.insert("irtel");
    t.insert("dot");

    cout << " and present ?: " << t.search("and") << endl;
    cout << " dot present ?: " << t.search("dot") << endl;
    cout << " are present ?: " << t.search("are") << endl;
    cout << " irtel present ?: " << t.search("irtel") << endl;
    t.remove("and");
    t.remove("dot");

    cout << " and present ?: " << t.search("and") << endl;
    cout << " dot present ?: " << t.search("dot") << endl;
    cout << " are present ?: " << t.search("are") << endl;
    cout << " irtel present ?: " << t.search("irtel") << endl;
}