class Solution {
    public int countSeniors(String[] details) {
int ans=0;
int val=0;
        for(int i=0;i<details.length;i++){
            String str=details[i];
            
            String s=str.charAt(11)+""+str.charAt(12);
            ans= Integer.parseInt(s)+0;
            if(ans>60) val++;
        }
        return val;
    }
}