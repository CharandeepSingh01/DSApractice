class Solution {
public:
    bool isHappy(int n) {
        int fast = nextsum(n), slow = n;
        while(fast != 1 && fast != slow){
            slow = nextsum(slow);
            fast = nextsum(nextsum(fast));
        }
        return fast == 1;
    }
    int nextsum(int a){
        int sum = 0;
        while(a){
            int temp = a%10;
            sum += temp * temp;
            a = a/10;
        }
        return sum;
    }
};