class Trie {
    struct TrieNode{
        TrieNode* child[26];
        bool isEnd;
        TrieNode(){
            isEnd = false;
            for(int i=0; i<26; i++)child[i] = NULL;
        }
    };
public:
    Trie() {
    }
    TrieNode* root = new TrieNode();
    void insert(string word){
        TrieNode* curr = root;
        for(int i=0; i < word.size(); i++){
            int index = word[i] - 'a';
            if(curr->child[index] == NULL)
                curr->child[index] = new TrieNode();
            curr = curr->child[index];
        }
        curr->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(int i=0; i < word.size(); i++){
            int index = word[i] - 'a';
            if(curr->child[index] == NULL)return false;
            curr = curr->child[index];
        }
        return curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(int i=0; i<prefix.size(); i++){
            int index = prefix[i] - 'a';
            if(curr->child[index] == NULL)return false;
            curr = curr->child[index];
        }
        return true;
    }
};
