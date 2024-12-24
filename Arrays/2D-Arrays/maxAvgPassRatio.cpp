//https://leetcode.com/problems/maximum-average-pass-ratio/
//Brute force
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int e) {
        vector<double> passRatio;
        //compute the pass ratio of all the classses
        for(auto it: classes){
            int passStud = it[0];
            int total = it[1];
            double ratio = (double)passStud/total;
            passRatio.push_back(ratio);
        }
        while(e > 0){
            e--;
            //updated ratio if extra would add in the class;
            vector<double> upRatio;
            for(auto it: classes)
            {
                int passStud = it[0] + 1;
                int total = it[1] + 1;
                double ratio = (double)passStud/total;
                upRatio.push_back(ratio);

            }
            //look for which class ratio had a positive greater impact
            int bestInd = 0;
            double maxGain = 0.0;
            for(int i=0; i < upRatio.size();i++){
                double gain = upRatio[i] - passRatio[i];
                if(gain > maxGain){
                    bestInd=i;
                    maxGain = gain;
                }
            }
            passRatio[bestInd]=upRatio[bestInd];
            classes[bestInd][0]++;
            classes[bestInd][1]++;
        }
        double totalPass=0.0;
        for(auto it: passRatio){
            totalPass+=it;
        }
        return (double)totalPass/classes.size();

    }
};
//Using MaxHeap
class Solution {
public:
    double calculateGain(int passes, int total) {
        return (double)(passes + 1)/(total + 1) - (double) (passes)/(total);
    }
    double maxAverageRatio(vector<vector<int>>& classes, int eStud) {
        
        priority_queue<pair<double,pair<int,int>>> maxH;
        for(auto it: classes){
            int pass = it[0];
            int total = it[1];
            maxH.push({calculateGain(pass,total),{pass, total}});
        }
        while(eStud > 0){
            eStud--;
            auto [gain, passTotal]=maxH.top();
            maxH.pop();
            int pass = passTotal.first;
            int total = passTotal.second;
            //this is pass and total which gives the max pos impact and we need to add stud in this
            maxH.push({calculateGain(pass + 1,total + 1),{pass + 1, total + 1}});

        }
        //calculate avg pass ratio
        double totalRatio=0.0;

        while(!maxH.empty()){
            auto [_, passTot]=maxH.top();
            maxH.pop();
            int pass=passTot.first;
            int total=passTot.second;
            totalRatio+=(double)pass/total;
        }
        return totalRatio/classes.size();
    }
};