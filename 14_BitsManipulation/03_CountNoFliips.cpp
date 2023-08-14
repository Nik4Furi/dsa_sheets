// https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1

    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int count = 0;
        int xorans=(a^b);
        
        while(xorans){
            if(xorans&1) count++;
            
            xorans >>= 1;
        }
        
        return count;
        
    }