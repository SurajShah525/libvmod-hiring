AM_CPPFLAGS = @VMOD_INCLUDES@ -Wall -Werror

vmoddir = @VMOD_DIR@
vmod_LTLIBRARIES = libvmod_hiring.la

libvmod_hiring_la_LDFLAGS = -module -export-dynamic -avoid-version -shared

libvmod_hiring_la_SOURCES = \
	vmod_hiring.c

nodist_libvmod_hiring_la_SOURCES = \
	vcc_if.c \
	vcc_if.h

vmod_hiring.lo: vcc_if.c vcc_if.h

vcc_if.c: vcc_if.h

vcc_if.h: @VMODTOOL@ $(top_srcdir)/src/vmod_hiring.vcc
	@VMODTOOL@ $(top_srcdir)/src/vmod_hiring.vcc

VMOD_TESTS = $(top_srcdir)/src/tests/*.vtc
.PHONY: $(VMOD_TESTS)

$(top_srcdir)/src/tests/*.vtc: libvmod_hiring.la
	@VARNISHTEST@ -Dvarnishd=@VARNISHD@ -Dvmod_topbuild=$(abs_top_builddir) $@

check: $(VMOD_TESTS)

EXTRA_DIST = \
	vmod_hiring.vcc \
	$(VMOD_TESTS)

CLEANFILES = \
	$(builddir)/vcc_if.c \
	$(builddir)/vcc_if.h \
	$(builddir)/vmod_hiring.rst \
	$(builddir)/vmod_hiring.man.rst
