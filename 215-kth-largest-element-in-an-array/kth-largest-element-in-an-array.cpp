class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // done by making Min-Heap
        priority_queue<int, vector<int>, greater<int>>pq;
        for(auto x: nums)
        {
            pq.push(x);
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();

        // done by making Max-Heap
        // priority_queue<int>pq(nums.begin(),nums.end());
        // int ans=0;
        // while(k--)
        // {
        //     ans=pq.top();
        //     pq.pop();
        // }
        // return ans;
    }
};