#ifndef _KEYTAR_H_
#define _KEYTAR_H_

#ifndef KEYTAR
#define KEYTAR
#endif

#ifdef __cplusplus
extern "C" {
#endif

	KEYTAR char* get_password(const char* str);

	KEYTAR int create_password(const char* service, const char* account, const char* password);

	KEYTAR int delete_password(const char* service, const char* account);

#ifdef __cplusplus
}
#endif

#endif // _KEYTAR_H_