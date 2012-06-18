RELEASE=$(strip $(shell dpkg-parsechangelog | grep Version: | cut -d: -f2 | cut -d- -f1 | cut -d~ -f1))
JAVA=swt-gtk-$(RELEASE).jar
CLEANFILES=*.files *.jar *-stamp

JAR=fastjar
JAVAC=javac -classpath .
RM=rm -f

all: $(JAVA)
	$(MAKE) -f make_linux.mak make_atk make_awt make_cairo make_glx \
		make_gnome make_swt make_webkit

clean distclean:
	$(RM) $(CLEANFILES)
	$(RM) -r swt-gtk-$(RELEASE)
	-$(MAKE) -f make_linux.mak clean

.PHONY: all clean distclean

swt-gtk-$(RELEASE).files:
	find org -name *.java -o -name *.properties | sort > $@

%-stamp: %.files
	mkdir -p $*
	grep \.java $< | xargs -r $(JAVAC) -d $*
	grep \.properties $< | xargs -r cp --parents -t $*
	touch $@

%.jar: %-stamp
	$(JAR) -C $* -cf $@ .
