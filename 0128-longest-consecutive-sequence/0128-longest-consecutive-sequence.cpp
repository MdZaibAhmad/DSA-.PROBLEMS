class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        // Put all numbers in set
        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        for (int num : st) {

            // Only start if num is the first number
            if (st.find(num - 1) == st.end()) {

                int current = num;
                int count = 1;

                // Find consecutive numbers
                while (st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};