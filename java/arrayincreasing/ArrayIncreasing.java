package arrayincreasing;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ArrayIncreasing {

    public static void main (String[] args) {
//        System.out.println(makeIncreasing(new int[] {1,5,3,6,7}, new int[] {1,3,2,4})); //output = 1
        System.out.println(makeIncreasing(new int[] {1,5,3,6,7}, new int[] {4,3,1})); //output = 2
    }

    public static int makeIncreasing(int[] arr1, int[] arr2) {
        int answer = 0;
        Arrays.sort(arr2);
        int[] equals = new int[arr1.length];

        for (int i = 0 ; i < arr1.length-1; i++) {
            final int posThatWeWant = arr1[i+1];
            if (arr1[i] > posThatWeWant) {
                int pos2 = 0;
                for (int j = 0; j < arr2.length; j++) {
                    if (arr2[j] > arr1[i-1] && arr2[j] < arr1[i+1]) {
                        answer ++;
                        pos2 = arr2[j];
                        break;
                    }
                }
                equals[i] = pos2;
                continue;
            }
            equals[i] = arr1[i];
        }

        Arrays.sort(equals);
        for (int e: equals) System.out.println(e);

        for (int i = 0; i < equals.length -1; i++) {
            final int posThatWeWant = equals[i+1];
            if (equals[i] == posThatWeWant) {
                //search next greatest number
                int nextGreatest = equals[i];
                for (int ng = nextGreatest; ng < equals.length-1; ng ++) {
                    if (equals[ng] < equals[ng + 1]) {
                        nextGreatest = equals[ng + 1];
                        break;
                    }
                }
                for (int j = 0; j < arr2.length; j++) {
                    if (arr2[j] > equals[i-1] && arr2[j] < nextGreatest) {
                        answer ++;
                        break;
                    }
                }
            }
        }

        return answer == 0 ? -1 : answer;
    }
}
