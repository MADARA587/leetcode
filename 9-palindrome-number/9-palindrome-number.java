class Solution {
    public boolean isPalindrome(int x) {
        int num , rem = 0 , rev = 0;
        if(x<0){
            return false;
        }
        num=x;
            while(num!=0){
                rem = num%10;
                rev = (rev*10)+rem;
                num = num/10;
            }
            if(x==rev){
                return true;
            }
            else{
                return false;
        }
    }
}