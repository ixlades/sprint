#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    if (name == NULL) {
        return NULL;
        }
        
    t_agent *agent = malloc(16);
    if (newAgent == NULL) {
        return NULL;
    }
    
    agent->name = mx_strdup(name);
    if (agent->name == NULL) {
        free(agent);
        return NULL;
    }
    
    agent->power = power;
    agent->strength = strength;
    return agent;
}

