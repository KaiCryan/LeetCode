class Solution {
    public String truncateSentence(String s, int k) {
        int count = 0;
        String t ="";
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i)==' ') {
                count++;
            }
            if(count==k) {
                i=s.length();
                break;
            }
            t+=s.charAt(i);
        }
        return t;
    }
}