// A Child is running up the staircase with n steps and can hop either 1 step, 2 steps or 3 step at a time
// implement a method to count how many possible ways the child can run up the stairs

// Brute Force Solution
// countWay(n-1) + countWay(n-2) + countWay(n-3)
int countway(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return countway(n-1)+countway(n-2)+countway(n-3);
    }
}

// time complexity: O(n^3)



// Memorization solution
// Use HashMap<Integer, Integer> for a cache, the key is exactly 1 through n
int countWays(int n)
{
    int[] memo = new int[n+1];
    Array.fill(memo,-1);
    return countWays(n,memo);
}

int countWays(int n,int[] memo)
{
    if(n<0){
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }else
    {
        momo[n] = countWays(n-1,memo) + countWay(n-2,memo) + countWays(n-3,memo);
        return memo[n];
    }
    
}