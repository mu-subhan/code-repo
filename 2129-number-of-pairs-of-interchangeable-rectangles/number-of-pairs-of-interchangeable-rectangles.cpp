class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
       unordered_map<string, long long> ratioCount; 
        long long count = 0;

        // Loop through each rectangle
        for (auto& rect : rectangles) {
            int w = rect[0];
            int h = rect[1];

            // Calculate the GCD of width and height
            int g = gcd(w, h);
            
            // Reduce the ratio to its simplest form (w/g) / (h/g)
            string ratio = to_string(w / g) + ":" + to_string(h / g);

            // If this ratio has been seen before, add to the count
            if (ratioCount.find(ratio) != ratioCount.end()) {
                count += ratioCount[ratio];
            }

            // Increment the count for the current ratio in the hashmap
            ratioCount[ratio]++;
        }

        return count; 
    }
};