class Solution {
public:
    int maxArea(vector<int>& height){
        int r = height.size() - 1;
        int count = r;
        int h, w, s, l = 0;
        if(height[l] < height[r])
            h = height[l];
        else
            h = height[r];
        int result = r * h;
        while (count != 1)
        {
            if(height[l] < height[r])
            {
                l = l + 1;
                if(height[l] < height[r])
                    h = height[l];
                else
                    h = height[r];
            }
            else
            {
                r = r - 1;
                if(height[l] < height[r])
                    h = height[l];
                else
                    h = height[r];
            }
            w = r - l;
            s = w * h;
            if (result < s)
                result = s;
            count -= 1;
        }
        return result;
    }
};