bool isUgly(int n){
    //n does not have any other prime factors other than 2,3 and 5

    if(n>0){
        for(int i=2;i<6;i++){
            while(n%i==0){
                //till it is divisible
                //make it divide
                n=n/i;
            }
        }
    }
    //check if it reached to become 1
    return n==1;
    // ex: n=15-> 15%3==0 -> n=5 5%5==0 n=5/5=1
}