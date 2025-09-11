class Solution {
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            int n = nums.get(i);
            int x=Integer.bitCount(i);
            if(x==k)
            s+=n;
        }
        return s;
    }
}