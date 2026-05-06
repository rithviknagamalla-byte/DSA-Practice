class Solution {
    public int singleNumber(int[] nums) {
        
        HashMap<Integer,Integer>hmp=new HashMap<>();
        int count=0;
        for(int num:nums){
        hmp.put(num,hmp.getOrDefault(num,0)+1);
        }

        for(int num:nums){
            if(hmp.get(num)==1){
                return num;
            }
        }
        return -1;
    }
}