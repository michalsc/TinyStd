#ifndef _SUPPORT_H
#define _SUPPORT_H

#define MEMF_ANY    1
#define MEMF_CLEAR  2

void * AllocMem(int size, int type);
void FreeMem(void *ptr, int size);
void CopyMem(const void *src, void *dst, int size);
void SetMem(void *dst, int size, char fill);

#endif // _SUPPORT_H
