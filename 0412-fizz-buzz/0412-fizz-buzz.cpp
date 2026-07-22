class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n+1);
        for(int i=1; i<=n; i++) {
            if(i%3==0 && i%5==0) {
                answer[i] = "FizzBuzz";
            } else if (i%3==0) {
                answer[i] = "Fizz";
            } else if (i%5==0) {
                answer[i] = "Buzz";
            } else {
                answer[i] = to_string(i);
            }
        }
        return vector<string>(answer.begin()+1, answer.end());
    }
};