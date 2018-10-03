//
//  States.h
//  probabilistic_reasoning
//
//  Created by Vishal Chopra on 2018-10-03.
//  Copyright © 2018 Vishal Chopra. All rights reserved.
//

#ifndef States_h
#define States_h

#include <string>


class State{
private:
    std::map <string, double> state;
public:
    State(string[] sta, double[] probs, int numStates){
        int sizeOfArray = (sizeof(sta)/sizeof(*sta));
        int sizeOfProbs = (sizeof(probs)/sizeof(*probs));
        if (sizeOfArray != sizeOfProbs){
            std::invalid_argument << "More probabilities than names given" << std::endl;
        }
        if ((numStates - sizeOfArray) > 1){
            std::invalid_argument << "Unable to initialize state. More than one unknown state probability." << std::endl;
        }
        else if ((numStates - sizeOfArray) <= 1){
            double sum_of_probabilities = 0;
            for (int i=0; i<sizeOfArray; i++){
                state.insert(std::pair<string, double>(sta[i], probs[i]));
                sum_of_probabilities += probs[i];
            }
            if (sum_of_probabilities != 1){
                state.insert(std::pair<string, double>("Not " + sta[sizeOfArray - 1], 1-sum_of_probabilities))
            }
        }
    }
    ~State();
};


#endif /* States_h */
