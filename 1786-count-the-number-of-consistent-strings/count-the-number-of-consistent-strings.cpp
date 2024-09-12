class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        // Create a set of allowed characters for fast lookup
        unordered_set<char> allowedSet(allowed.begin(), allowed.end());

        // Iterate through each word
        for (const string& word : words) {
            bool isConsistent = true;

            // Check if every character in the word is in the allowed set
            for (char c : word) {
                if (allowedSet.find(c) == allowedSet.end()) {
                    isConsistent = false;
                    break;
                }
            }

            // If the word is consistent, increment the count
            if (isConsistent) {
                count++;
            }
        }

        return count;
    }
};
