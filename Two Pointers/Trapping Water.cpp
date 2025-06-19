class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size()-1;

        int lmax = height[left] , rmax = height[right];
        int area = 0;
        while(left < right){
            if(height[left] < height[right]){
                left++;
                lmax = max(lmax , height[left]);
                area += lmax - height[left];
            }
            else {
                right--;
                rmax = max(rmax , height[right]);
                area += rmax - height[right];
            }
        }
        return area;

    }
};
