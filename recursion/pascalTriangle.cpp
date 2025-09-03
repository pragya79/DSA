vector<int> pascal(int rowIndex){
    vector<int> pascalTriangle;
    for(int i=0;i<rowIndex+1;i++){
        vector<int> temp(i+1,1);
        for(int col=1;col<i;col++){
            temp[col]=pascalTriangle[col-1]+pascalTriangle[col];
        }
        pascalTriangle=temp;
    }
    return pascalTriangle;
}