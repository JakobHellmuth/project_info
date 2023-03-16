#ifndef DEVELOPER_H_2888273536
#define DEVELOPER_H_2888273536

#define NAME_LENGTH (25U)
#define ALIAS_LENGTH (15U)

typedef struct
{
char name[NAME_LENGTH];
char alias[ALIAS_LENGTH];
}
developer;

void developer_init(developer *const dev, const char *name, const char *alias);

#endif
