bool isHappy(int n){
    int fast=n, slow=n;

    while(fast!=1 && sum_sq_digit(fast)!=1){
        slow=sum_sq_digit(slow);
        fast=sum_sq_digit(sum_sq_digit(fast));

        if(slow==fast){
            //meet at cycle not equal to 1
            return false;
        }
    }
    return true;
}