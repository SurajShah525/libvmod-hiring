#include <stdio.h>
#include <stdlib.h>

#include "vcl.h"
#include "vrt.h"
#include "cache/cache.h"
#include "vcc_if.h"

int
init_function(const struct vrt_ctx *ctx, struct vmod_priv *priv,
    enum vcl_event_e e)
{
	if (e != VCL_EVENT_LOAD)
		return (0);

	/* init what you need */
	return (0);
}

VCL_INT
vmod_count(VRT_CTX, VCL_STRING haystack, VCL_STRING needle)
{
    VSLb(ctx->vsl, SLT_VCL_Log,
      "hiring input haystack=%s needle=%s",haystack, needle);
    if (strlen(haystack) == 0 || strlen(needle) == 0)
    {
    VSLb(ctx->vsl, SLT_VCL_Log,
      "hiring output count=0");
      return 0;
    }
    int i = 0;
    const char *temp_hs = haystack;
    while((temp_hs=strstr(temp_hs, needle))!=NULL)
    {
       i++;
       temp_hs++;
    }
    VSLb(ctx->vsl, SLT_VCL_Log,
      "hiring output count=%d",i);
    return i;

}
