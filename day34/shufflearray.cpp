class Solution {    
public:
    vector<int> original;
    Solution(vector<int>& nums) {
        srand(unsigned(time(0)));
        original = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> temp(original);
        random_shuffle(temp.begin(),temp.end());
        return temp;
    }
    
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
