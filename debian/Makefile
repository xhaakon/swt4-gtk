RELEASE=3.6.2
JAVA=swt-gtk-$(RELEASE).jar
CLEANFILES=*.files *.jar *-stamp

JAR=fastjar
JAVAC=javac -classpath .
RM=rm -f

all: $(JAVA)
	$(MAKE) -f make_linux.mak make_atk make_awt make_cairo make_glx \
		make_gnome make_mozilla make_swt make_xpcominit make_xulrunner make_webkit

clean distclean:
	$(RM) $(CLEANFILES)
	$(RM) -r swt-gtk-$(RELEASE)
	-$(MAKE) -f make_linux.mak clean

.PHONY: all clean distclean

swt-gtk-$(RELEASE).files:
	find org -name *.java | sort > $@

%-stamp: %.files
	mkdir -p $*
	for i in `cat $<`; do \
		if [ -e $*/$${i%java}class ]; then \
			echo SKIPPING $$i; \
		else \
			echo $(JAVAC) -d $* $$i; \
			$(JAVAC) -d $* $$i || exit $$?; \
		fi \
	done
	touch $@

%.jar: %-stamp
	$(JAR) -C $* -cf $@ .
