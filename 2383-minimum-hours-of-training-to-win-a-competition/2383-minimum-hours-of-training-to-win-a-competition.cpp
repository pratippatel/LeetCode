class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int hrs = 0;
        for(int i=0;i< energy.size();i++){
            if(initialEnergy> energy[i] && initialExperience> experience[i]){
                initialEnergy = initialEnergy- energy[i];
                initialExperience = initialExperience + experience[i];
            }
            else if(initialEnergy <= energy[i]){
                int flag = energy[i] - initialEnergy +1;
                initialEnergy = initialEnergy + flag;
                hrs = hrs + flag;
                i--;
            }
            else if(initialExperience <= experience[i]){
                int extra = experience[i] - initialExperience +1;
                initialExperience = initialExperience + extra;
                hrs = hrs + extra;
                i--;
            }
        }
        return hrs;
    }
};