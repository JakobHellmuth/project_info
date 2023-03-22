#ifndef DEVELOPER_H_2888273536
#define DEVELOPER_H_2888273536

//defining length
#define NAME_LENGTH (25U)
#define ALIAS_LENGTH (15U)

typedef struct
{
char name[NAME_LENGTH];
char alias[ALIAS_LENGTH];
}
developer;

//making developer funktions
void developer_init(developer *const dev, const char *name);
void developer_add_alias(developer *const dev, const char *alias);
#endif
