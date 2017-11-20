/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vmod.vcc and run make instead
 */

#include "config.h"
#include "vcl.h"
#include "vrt.h"
#include "vcc_if.h"
#include "vmod_abi.h"

/* Functions */
typedef VCL_INT td_hiring_count(VRT_CTX, VCL_STRING, VCL_STRING);
struct Vmod_hiring_Func {

	/* Functions */
	td_hiring_count			*count;

	/* Init/Fini */
	vmod_event_f	*_event;
};
/*lint -esym(754, Vmod_hiring_Func::*) */

static const struct Vmod_hiring_Func Vmod_Func = {

	/* Functions */
	vmod_count,

	/* Init/Fini */
	init_function,
};

static const char Vmod_Proto[] =
	"/* Functions */\n"
	"typedef VCL_INT td_hiring_count(VRT_CTX, VCL_STRING,\n"
	"    VCL_STRING);\n"
	"\n"

	"struct Vmod_hiring_Func {\n"
	"\n"
	"	/* Functions */\n"
	"	td_hiring_count			*count;\n"
	"\n"
	"	/* Init/Fini */\n"
	"	vmod_event_f	*_event;\n"
	"};\n"
	"static struct Vmod_hiring_Func Vmod_hiring_Func;";

/*lint -save -e786 -e840 */
static const char * const Vmod_Spec[] = {
	/* Functions */
	"hiring.count\0"
	"Vmod_hiring_Func.count\0"
	    "INT\0"
		"STRING\0"
		"STRING\0"
	"\0",

	/* Init/Fini */
	"$EVENT\0Vmod_hiring_Func._event",
	0
};
/*lint -restore */

/*lint -esym(759, Vmod_hiring_Data) */
const struct vmod_data Vmod_hiring_Data = {
	.vrt_major = VRT_MAJOR_VERSION,
	.vrt_minor = VRT_MINOR_VERSION,
	.name = "hiring",
	.func = &Vmod_Func,
	.func_len = sizeof(Vmod_Func),
	.proto = Vmod_Proto,
	.spec = Vmod_Spec,
	.abi = VMOD_ABI_Version,
	.file_id = "@ZRA@LVFNSDSETLSGHHVIAYVFXGPEIVN",
};
