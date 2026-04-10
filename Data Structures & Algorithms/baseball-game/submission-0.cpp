class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        stack<int> score;
        int prev1, prev2;
        int total = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                prev1 = score.top();
                score.pop(); 
                prev2 = score.top();
                score.push(prev1);

                score.push(prev1 + prev2);

            } else if (operations[i] == "D") {
                score.push((score.top() * 2));

            } else if (operations[i] == "C") {
                score.pop();
            } else {
                score.push(stoi(operations[i]));
            }
        }

        int scoresize = score.size(); 
        for (int i = 0; i < scoresize; i++) {
            total = total + score.top();
            score.pop(); 
        }
        return total;
    }
};