class Solution {
public:
    int countOdds(int low, int high) {
        int diff = high-low;
        if(low%2 || high%2)
        {
            return (high-low)/2 +1;

        }
        else 
            return (high-low)/2;
       
    }
};
