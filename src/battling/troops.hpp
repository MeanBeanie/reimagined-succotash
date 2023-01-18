#pragma once

#include <vector>
#include <cmath>

class baseT{
    public:
        // sets max health and updates currHealth accordingly;
        void setMaxHealth(int val){maxHealth = val; float f = currHealth/maxHealth; currHealth = f*maxHealth;};
        // adds val to curr health, with check for > maxHealth;
        void heal(int val){currHealth += val; if(currHealth>maxHealth){currHealth=maxHealth;}};
        // subtracts val from currHealth, returns true if dead
        bool takeDmg(int val){currHealth -= val; return currHealth <= 0;};
        
        // sets damage value
        void setDMG(int val){dmg = val;};
        // sets fire rate
        void setFR(float val){fireRate = val;};
        // sets range
        void setRange(float val){range = val;};

        template<typename T>
        void shoot(T* target){
            if(fireCool <= 0.0f){
                target->takeDMG(dmg);
                fireCool = fireRate;
            }
        }
        template<typename T>
        void findNearestTarget(std::vector<T>& targets){
            float lowestDist = INFINITY;
            int closestTarget;
            for(int i = 0; i < targets.size(); i++){
                T target = targets.at(i);
                if(calcDistance(target) < lowestDist){
                    lowestDist = calcDistance(target);
                    closestTarget = i;
                }
            }
            if(lowestDist <= range){
                shoot(&targets.at(closestTarget));
            }
        }
        template<typename T>
        float calcDistance(T target){
            // calculate 2d distance using some form of formula(hehehhe)
        }

    protected:
        int maxHealth = 100; // max health (mostly unchanging but not const);
        int currHealth = maxHealth; // current amount of health

        int dmg = 5; // damage per shot
        float range = 20.0f;

        float fireRate = 1.0f; // represents shots per seoncds
        float fireCool = 0.0f; // just the cool down for the firerate
};