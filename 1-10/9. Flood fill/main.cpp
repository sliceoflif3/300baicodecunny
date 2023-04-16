class Solution
{
public:
    void helper(vector<vector<int>> &image, int sr, int sc,
                int n, int m, int curColor, int color)
    {
        if (sr < 0 || sr >= n || sc < 0 || sc >= m)
            return;
        if (image[sr][sc] == color)
            return;

        if (image[sr][sc] == curColor)
        {
            image[sr][sc] = color;
            helper(image, sr - 1, sc, n, m, curColor, color);
            helper(image, sr, sc - 1, n, m, curColor, color);
            helper(image, sr + 1, sc, n, m, curColor, color);
            helper(image, sr, sc + 1, n, m, curColor, color);
        }

        return;
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();
        int curColor = image[sr][sc];
        helper(image, sr, sc, n, m, curColor, color);
        return image;
    }
};