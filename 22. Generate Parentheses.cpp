    class Solution {
    public:
        vector<string> generateParenthesis(int n) 
        {
            vector<string> answer; 
            recurse(answer, "", 0, 0 , n);
            return answer;
        }

    private:
        void recurse(vector<string>& answer, string current, int open_count, int closed_count, int n)
        {
            if(current.size() == 2 * n)
            {
                answer.push_back(current);
                return;

            }
            if(open_count < n)
            {
                recurse(answer, current + '(', open_count + 1, closed_count, n);
            }
            if(closed_count < open_count)
            {
                recurse(answer, current + ')', open_count, closed_count + 1, n);
            }

        }

    };