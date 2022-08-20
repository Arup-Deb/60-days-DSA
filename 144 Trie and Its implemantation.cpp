#include<iostream>
//#include<iostream>
using namespace std;

class TrieNode {
    public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data =ch;
        for(int i=0;i<26;i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    public:
    TrieNode* root;
void insertUntil(TrieNode* root,string word) 
{
    //base case
    if(word.length() == 0) {
        root->isTerminal = true; 
    }

    //assumption, word will be in CAPS
    int index = word[0]-'A';
    TrieNode* child;

    //present
    if(root -> children[index] != NULL ){
        child = root->children[index];
    }
    else
    {
        //absent
        child = new TrieNode(word[0]);
        root->children[index] = child;
    }

    //RECURSION
    insertUntil(child,word.substr(1));
}

bool searchUntil(TrieNode* root,string word) {
//base case
if(word.length() ==0)
{
    return root->isTerminal;
}

int index = word[0]-'A';
TrieNode* child;

//present
if(root-> children[index] != NULL) {
    child = root->children[index]; 
}
else
{
    //absent
    return false;
}
}

bool search(string word) {
    return sear
    chUntil(root, word);
}

    void insertWord(string word) {
        insertUntil(root,word);
    }
}

int main()
{


    return 0;
}