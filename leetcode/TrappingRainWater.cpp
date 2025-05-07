class Solution {
public:
    int32_t trap(vector<int32_t>& h) {
        if(h.size()==0) return 0; 
        int32_t l = 0 , r = h.size()-1; 
        int32_t leftMax = h[l], rightMax = h[r]; 
        int32_t res = 0; 
        while(l<r){
            
            if(leftMax<rightMax) 
            {
                l++;
                leftMax = max(leftMax, h[l]); 
                res+= leftMax - h[l]; 
            } 
            else 
            {
                r-=1;
                rightMax = max(rightMax, h[r]); 
                res+= rightMax - h[r]; 
            } 
        }
        return res;   
            
    }
};
