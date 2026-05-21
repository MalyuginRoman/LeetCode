class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() : root(new TrieNode()) {}

    // Insert all prefixes of a number into the trie
    void insertPrefixes(int num) {
        string numStr = to_string(num);
        TrieNode* current = root;

        for (char digit : numStr)
        {
            if (current->children.find(digit) == current->children.end())
                current->children[digit] = new TrieNode();
            current = current->children[digit];
        }
    }

    // Find the longest prefix of 'num' that exists in the trie
    int findLongestPrefix(int num)
    {
        string numStr = to_string(num);
        TrieNode* current = root;
        int length = 0;

        for (char digit : numStr)
        {
            if (current->children.find(digit) != current->children.end())
            {
                length++;
                current = current->children[digit];
            }
            else
                break; // No matching prefix beyond this point
        }
        return length;
    }
};

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
    Trie trie;
    int maxLength = 0;

    // Step 1: Insert all prefixes from arr1 into the trie
    for (int num : arr1)
        trie.insertPrefixes(num);

    // Step 2: For each number in arr2, find the longest common prefix in the trie
    for (int num : arr2)
    {
        int currentLength = trie.findLongestPrefix(num);
        maxLength = max(maxLength, currentLength);
    }

    return maxLength;
    }
};