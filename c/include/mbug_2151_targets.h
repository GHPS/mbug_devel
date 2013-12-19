#ifndef MBUG_2151_TARGETS_H
#define MBUG_2151_TARGETS_H 1
typedef char** tokenize_state_t;

void parse_target_ab440s(tokenize_state_t *state);
void parse_target_he302eu(tokenize_state_t *state);
void parse_target_dmv7008(tokenize_state_t *state);
void parse_target_ikt201(tokenize_state_t *state);

struct {
	char *name;
	void (*parse_function)(tokenize_state_t *);
} mbug_2151_targets[] = {
	{ "AB440S",  parse_target_ab440s },
	{ "HE302EU", parse_target_he302eu },
	{ "DMV7008", parse_target_dmv7008 },
	{ "GT7008",  parse_target_dmv7008 },
	{ "FIF4280", parse_target_dmv7008 },
	{ "IKT201",  parse_target_ikt201  },
};

#define NUM_MBUG_2151_TARGETS ((sizeof(mbug_2151_targets))/(sizeof(mbug_2151_targets[0])))

#endif
