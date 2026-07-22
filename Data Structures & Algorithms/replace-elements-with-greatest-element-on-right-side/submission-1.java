class Solution {
    public int[] replaceElements(int[] arr) {
        int size=arr.length;
        for(int i=0;i<size;i++){
            int temp=Integer.MIN_VALUE;
            for(int j=i+1;j<size;j++){
                if(temp<arr[j]){
                    temp=arr[j];
                }
            }
            arr[i]=temp;
        }

        arr[size-1]=-1;
        return arr;
    }
}