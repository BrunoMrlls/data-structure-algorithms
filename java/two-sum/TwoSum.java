public class TwoSum {
    //https://leetcode.com/problems/two-sum/submissions/491991033/
    public static int[] twoSum(int[] nums, int target) {
        if (nums.length == 2 && target > 0) return new int[]{0,1};
        for (int i=0;i<nums.length;i++) {
            for(int j=i+1;j<nums.length;j++) {
                if ((nums[i] + nums[j]) == target) {
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{0,1};
    }

    public static void main(String[]args){
        int[] n = twoSum(new int[]{2, 7, 11, 15}, 9);
        System.out.println(n);
    }
}
