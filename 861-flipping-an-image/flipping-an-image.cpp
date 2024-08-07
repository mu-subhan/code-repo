class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            reverse(row.begin(), row.end());
            for (int& pixel : row) {
                pixel = pixel == 0 ? 1 : 0;
            }
        }
        return image;
    }
}; 
    