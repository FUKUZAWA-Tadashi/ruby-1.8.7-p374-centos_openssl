/* $Id: sha1ossl.c 11905 2007-02-27 10:38:32Z knu $ */

#include "defs.h"
#include "sha1ossl.h"

void
SHA1_Finish(SHA1_CTX *ctx, char *buf)
{
	SHA1_Final((unsigned char *)buf, ctx);
}
