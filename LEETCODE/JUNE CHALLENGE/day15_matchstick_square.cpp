class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size() < 4) return false;
        
        int perimeter;
        for(int i: matchsticks) {
            perimeter += i;
        }
         
        if (perimeter % 4 != 0) return false;
        
        sort(matchsticks.begin(), matchsticks.end());
        int sides[] = {perimeter/4, perimeter/4, perimeter/4, perimeter/4};
        
        return makesquareHelper(matchsticks, 0, sides);
    }
    
    bool makesquareHelper(vector<int>& matchsticks, int i, int sides[]) {
        if(i == matchsticks.size()) {

            if(sides[0] == 0 && sides[1] == 0 && sides[2] == 0 && sides[3] == 0){
                return true;
            } else{
                return false;
            }
        }


        for (int j = 0; j < 4; j++) {
            if (matchsticks[i] > sides[j]) continue;
            sides[j] -= matchsticks[i];
            if (makesquareHelper(matchsticks, i + 1, sides)) return true;
            sides[j] += matchsticks[i];
        }

        return false;
    }
};