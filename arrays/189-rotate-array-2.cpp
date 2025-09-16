class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int count = 0;

        for (int i=0; count<n; i++) {
            int current = i;
            int prevNum = nums[i];

            do {
                int next = (current + k) % n;
                int temp = nums[next];

                nums[next] = prevNum;
                prevNum = temp;
                current = next;
                count++;
             } while (i != current);
        }
    }
};
