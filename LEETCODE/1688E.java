class Solution {
    public int numberOfMatches(int n) {
        int totalMatches = 0;
        
        while(n>1){
            int noOfMatches = 0;
            int noOfTeamAdvanced = 0;
            
            if(n%2 == 0){
                //its even
                noOfMatches = n/2;
                noOfTeamAdvanced = noOfMatches;
            }else{
                //if its odd
                noOfMatches = (n-1)/2;
                noOfTeamAdvanced = noOfMatches + 1 ;
            }
            totalMatches += noOfMatches;
            n = noOfTeamAdvanced;
        }
        return totalMatches;
    }
}