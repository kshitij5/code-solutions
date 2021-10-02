
//Using DFS Similar approach
// approach : 
// for each index we find the length of largest array array Nesting
// update the value of the largest length 
// return the length
// TC = O(N)
// SC = O(N)

class Solution {
    public int arrayNesting(int[] nums) {
        int longestLength = 0;
        int nextIndex = 0, c = 0;

        boolean visited[] = new boolean[nums.length];

        for (int i = 0; i < nums.length; i++) {
            // if element is already visited
            if (visited[i]) {
                continue;
            }

            nextIndex = i;
            // visit elements until we reach already visited element
            while (!visited[nextIndex]) {
                visited[nextIndex] = true;
                nextIndex = nums[nextIndex];
                c++;
            }

            // store the longest length
            longestLength = Math.max(longestLength, c);
            c = 0;
        }

        return longestLength;
    }
}

// The above method can further be optimized by reducing its Space Complexity
// given we don't use extra space for storing visited elements,
// instead we can simply update the already visited elements to
// Integer.MIN_VALUE,
// since we never need to reuse any elements