#include "only_smiths.h"

t_agent** mx_only_smiths(t_agent** agents, int strength) {
    if (agents == NULL) {
        return NULL;
    }
    int count = 0;

    for (int i = 0; agents[i] != NULL; ++i) {
        if (strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength) {
            ++count;
        }
    }
    t_agent** filteredArray = (t_agent**)malloc((count + 1) * sizeof(t_agent*));
    if (filteredArray == NULL) {
        return NULL;
    }
    int j = 0;

    for (int i = 0; agents[i] != NULL; ++i) {
        if (strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength) {
            // Use mx_create_agent to create a new t_agent structure for the filtered array
            filteredArray[j] = mx_create_agent(agents[i]->name, agents[i]->power, agents[i]->strength);
            if (filteredArray[j] == NULL) {
                mx_exterminate_agents(&filteredArray);
                return NULL;
            }

            ++j;
        }
    }
    filteredArray[count] = NULL;

    return filteredArray;
}

