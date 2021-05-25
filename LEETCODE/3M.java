// class Solution {
//     public int lengthOfLongestSubstring(String s) {
//         int longest = 0;

//         for (int i = 0; i < s.length(); i++) {
//             Set<Character> set = new HashSet<>();
//             boolean visited[] = new boolean[26];
//             for (int j = i; j < s.length(); j++) {
//                 //checks if all the elements are distinct 
//                 char c = s.charAt(j);
                
//                     if(set.contains(c)){
//                         break;
//                     }else{
//                         set.add(c);
//                         longest = Math.max(longest, j-i+1);
//                     }
//             }
//             set.remove(s.charAt(i));
//         }
//         return longest;
//     }
// }

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int longest = 0;
        Set<Character> set = new HashSet<>();
        int i = 0, j = 0;
        int n = s.length();

        while(i<n && j<n) {

            if(set.contains(s.charAt(j))){
                set.remove(s.charAt(i++));
            }else{
                set.add(s.charAt(j++));
                longest = Math.max(longest, j-i);
            }
        }
        return longest;
    }
}