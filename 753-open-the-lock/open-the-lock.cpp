class Solution {
public:
char clockwise(char c)
{
    if(c=='9')
    return '0';

    return c+1;
}
char anticlockwise(char c)
{
    if(c=='0')
    return '9';

    return c-1;
} 

    int openLock(vector<string>& deadends, string target) {

        set<string>dead(deadends.begin(),deadends.end());
// HERE WE USED .count() FUNCTION --> IT RETURNS THE NUMBER OF TIMES THE STRINF IS PRESENT IN THE SET.
        if(dead.count("0000"))
        return -1;

        set<string>vis;
        queue<string>q;
        q.push("0000");
        vis.insert("0000");

        int steps=0;

        while(!q.empty()){

            int n = q.size();

            while(n--)
            {
                string curr = q.front();
                q.pop();

                if(curr==target)
                return steps;

                for(int i=0;i<4;i++)
                {
                    string next = curr;
                    next[i]=clockwise(curr[i]);

                    // if(next==target)
                    // return steps;

                    if(!dead.count(next) && !vis.count(next) )
                    {
                        q.push(next);
                        vis.insert(next);
                    }

                    next = curr;
                    next[i]=anticlockwise(curr[i]);
                    // if(next==target)
                    //  return steps;
                     
                     if(!dead.count(next) && !vis.count(next))
                     {
                        q.push(next);
                        vis.insert(next);
                     }
                }
            }
            steps++;
        }
        return -1;
    }
};