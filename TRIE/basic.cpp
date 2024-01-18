#include<bits/stdc++.h>
using namespace std;

// Time complexity: insertion O(length of word);
// Searching : O(length of word);

class TrieNode{
public:
char data;
TrieNode* children[26];
bool isTerminal;
TrieNode(char ch){
    data=ch;
    for(int i=0;i<26;i++)
    children[i]=NULL;
    isTerminal=false;
}
};
class Trie{
    public:

    TrieNode* root;
    Trie(){
        root= new TrieNode('\0');
    }
void insertUtil(TrieNode* root,string word){
//    Base Case
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
    // Assumption, word will be in CAPS
    int index=word[0]-'a';
    TrieNode* child;
    // Present
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        // Absent
        child=new TrieNode(word[0]);
        root->children[index]=child;
    }
insertUtil(child,word.substr(1));
}
    void insertWord(string word){
        insertUtil(root,word);
    }

bool searchUtil(TrieNode* root,string word){
       if(word.length()==0){
        return root->isTerminal;
       }
       int index=word[0]-'a';
       TrieNode* child;
       if(root->children[index]!=NULL){
        // Present go ahead
        child=root->children[index];
       }
       else{
        // absent
        return false;
       }
       return searchUtil(child,word.substr(1));
}
    bool searchWord(string word){
return searchUtil(root,word);
    }
    void deleteWord(TrieNode* root,string word){
            if(word.length()==0){
                root->isTerminal=false;
                return;
            }
             int index=word[0]-'a';
       TrieNode* child;
       if(root->children[index]!=NULL){
        // Present go ahead
        child=root->children[index];
       }
        deleteWord(child,word.substr(1));
    }
    void delWord(string word){
        deleteWord(root,word);
    }
   
   bool Prefix(TrieNode* root, string word){
     if(word.length()==0){
        return true;
       }
       int index=word[0]-'a';
       TrieNode* child;
       if(root->children[index]!=NULL){
        // Present go ahead
        child=root->children[index];
       }
       else{
        // absent
        return false;
       }
       return Prefix(child,word.substr(1));
   }

    bool searchPrefix(string word){
        return Prefix(root,word);
    }
    };
int main(){
    Trie *t=new Trie();
    t->insertWord("abcde");
        t->insertWord("abde");
    t->insertWord("abcb");

cout<<"Present or Not : "<<t->searchWord("abcde")<<endl;
// t->delWord("abcde");t->delWord("abcb");

cout<<"Present or Not : "<<t->searchWord("abcb")<<endl;


cout<<"Present or Not : "<<t->searchPrefix("ab")<<endl;
    return 0;

}