#ifndef DEVELOPER_GROUP_H_8680918198
#define DEVELOPER_GROUP_H_8680918198

#include "developer.h"
#include <stdio.h>

#define LOGO_LENGTH (3000U)
#define DEV_1 (75U)
#define DEV_2 (75U)

typedef struct
{
	developer dev1[DEV_1];
	developer dev2[DEV_2];
	char logo[LOGO_LENGTH];
} developer_group;

void developer_group_init(developer_group* d_g, const developer* dev1, const developer* dev2, const char* logo);

#endif
