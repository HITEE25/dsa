class Solution {
    bool rowSum(vector<vector<int>>& grid,int i,int j){
        //check if eacch row sum is 15
        //first i=0 => 0,0
        //seocnd i=1 => 1,0
        //third i=2 => 2,0
        return grid[i][j] + grid[i][j+1] + grid[i][j+2] == 15;
    }

    bool colSum(vector<vector<int>>& grid,int i,int j){
        //check if eacch row sum is 15
        //first j=0 => 0,0
        //seocnd j=1 => 0,1
        //third j=2 => 0,2
        return grid[i][j] + grid[i+1][j] + grid[i+2][j] == 15;
    }

    bool diagonalSum(vector<vector<int>>& grid,int i,int j){
        /*
        1     
           2   
              3
        */
        return grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2] == 15;
    }

    bool crossDiagonalSum(vector<vector<int>>& grid,int i,int j){
        /*
              3   
           2
        1
        */
        return grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j] == 15;
    }

    bool distinctValue(vector<vector<int>>& grid,int i,int j){
        //set will strore unique value
        unordered_set<int> num;
        //check 3*3 matrix
        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){
                //check if matrix contain only 1 to 9 value , 
                //and it does not contain duplicate value
                //num.insert(grid[x][y]).second it would give false if duplicated value is inserted
                if(grid[x][y] < 1 || grid[x][y] > 9 || !num.insert(grid[x][y]).second){
                    return false;
                }
            }
        }
        return true;
    }

    bool checkMagicSquare(vector<vector<int>>& grid,int i,int j){
        //check if eacch row sum is 15, because for 3 * 3 matrix each row,col sum is equal to 15
        //check for each row
        for(int k=0;k<3;k++){
            //0+0 = 0, 1st row => 0,0
            //0+1 = 1, 2nd row => 1,0
            //0+2 = 2, 3rd row => 2,0
            if(!rowSum(grid,i+k,j)){
                return false;
            }
        }

        //check if each col sum is 15
        for(int k=0;k<3;k++){
            //0+0 = 0, 1st col => 0,1
            //0+1 = 1, 2nd col => 0,2
            //0+2 = 2, 3rd col => 0,3
            if(!colSum(grid,i,j+k)){
                return false;
            }
        }

        //check if both diagonal sum is 15
        if(!diagonalSum(grid,i,j) || !crossDiagonalSum(grid,i,j)){
            return false;
        }

        //check if matrix contain distinct value
        if(!distinctValue(grid,i,j)){//if dont cotain distinct value
            return false;
        }
        return true;
    }
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        //compute row size
        int n = grid.size();
        //compute column size
        int m = grid[0].size();
        //n-1,m-1 => so it dont get out of bound because in 3 * 3 matrix i have to find mid element
        //grid[i][j] mid element,it must be 5 
        int count = 0;
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                // checkMagicSquare(grid,-1,j-1) is starting of magic square
                if(grid[i][j] == 5 && checkMagicSquare(grid,i-1,j-1)){
                    count++;//increment count on finding magic square
                }
            }
        }
        return count;
    }
};
