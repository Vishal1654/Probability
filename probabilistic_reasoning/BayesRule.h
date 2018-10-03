//
//  BayesRule.h
//  probabilistic_reasoning
//
//  Created by Vishal Chopra on 2018-10-03.
//  Copyright © 2018 Vishal Chopra. All rights reserved.
//

#include <string>
#include "States.h"

#ifndef BayesRule_h
#define BayesRule_h

class BayesRule{
private:
    bool independence;
public:
    BayesRule(bool i){
        independence = i;
    }
    ~BayesRule();
    double getProbability(States[] s, string_required_output){
        //Should create a 'States' header file that takes in the states
        //For each class get the number of states
        //For each state get/guess the probability (can only guess if there is one missing)
        //Get the map of the probability matrix
        //After the entire probability matrix is known then use Bayes Theorem to calculate probability
        //For Bayes Theorem get the state that you need to calculate (take array of numbers that relate to the 'map' to get the states that are required.
        if (double_sz < classes_sz){
            
        }
        else if(double_sz > classes_sz){
            std::cout << "Not possible to calculate. More probabilities than classes given." << std::endl;
        }
    }
};


#endif /* BayesRule_h */
