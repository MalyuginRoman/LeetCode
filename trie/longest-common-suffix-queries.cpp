class Solution {
private:
    struct TrieNode {
        TrieNode* children[26] = {};
        int bestIndex = -1;      // index of best string (earliest if tied)
        int minLength = 1e9;  // min length of strings going through this node
    };

    TrieNode* root;

    // Reverse a string
    string reverseStr(const string& s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        return rev;
    }

    // Insert a reversed word into the trie
    void insert(const string& word, int index, int length) {
        TrieNode* node = root;
        
        // Update root (empty prefix)
        if (length < node->minLength) {
            node->minLength = length;
            node->bestIndex = index;
        } else if (length == node->minLength && index < node->bestIndex) {
            node->bestIndex = index;
        }

        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx]) {
                node->children[idx] = new TrieNode();
            }
            node = node->children[idx];

            // Update best index and min length for current node
            if (length < node->minLength) {
                node->minLength = length;
                node->bestIndex = index;
            } else if (length == node->minLength && index < node->bestIndex) {
                node->bestIndex = index;
            }
        }
    }

    // Search for longest prefix match of reversed query
    int search(const string& query) {
        TrieNode* node = root;
        int result = node->bestIndex;  // fallback: empty suffix match

        for (char c : query) {
            int idx = c - 'a';
            if (!node->children[idx]) break;
            node = node->children[idx];
            result = node->bestIndex;  // update to best at current depth
        }
        return result;
    }

public:
    vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
        root = new TrieNode();

        // Insert all reversed words from wordsContainer
        for (int i = 0; i < wordsContainer.size(); ++i) {
            string revWord = reverseStr(wordsContainer[i]);
            insert(revWord, i, wordsContainer[i].length());
        }

        vector<int> ans;
        // Process each query
        for (const string& q : wordsQuery) {
            string revQ = reverseStr(q);
            int bestIdx = search(revQ);
            ans.push_back(bestIdx);
        }

        return ans;
    }
};