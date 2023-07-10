import java.util.ArrayList;
import java.util.List;

public class GreatestCandiesNumber {

    public static List<Boolean> greatestNumber(int[] candies, int extra) {
        List<Boolean> ans = new ArrayList<>();
        int high = 0;

        for (int i = 0; i < candies.length; i++)
            if (candies[i] > high) high = candies[i];

        for (int i = 0; i < candies.length; i++)
            ans.add(candies[i] + extra >= high ? Boolean.TRUE : Boolean.FALSE);

        return ans;
    }

    public static void main(String[] args) {
    //https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&id=leetcode-75
        System.out.println(greatestNumber(new int[]{2,3,5,1,3}, 3));
    }
}