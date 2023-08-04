int median(vector<vector<int>> &matrix, int R, int C){
        //
        int _min = INT_MAX;
        int _max = INT_MIN;
        //
        for(int i=0; i<R; i++){ //THETA(R)
            _min = min(matrix[i][0], _min);
            _max = max(matrix[i][C-1], _max);
        }
        //
        int medianPos = (R * C + 1)/2;
        //
        while(_min < _max){ // LOG(_max - _min)
            
            //find mid
            int mid = _min + (_max - _min)/2;
            
            //find mid position
            int midPos = 0;
            //
            for(int i=0; i<R; i++){ //O(R * LOG(C))
                //
                int pos = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
                midPos += pos;
            }
            
            //binary search apply
            if(midPos < medianPos){
                _min = mid + 1;
            }
            else{
                _max = mid;
            }
        }
        //
        return _min;
    
    }
// tC O(32*R*logC) sc O(1)
// Link: https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1