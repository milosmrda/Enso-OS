# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nick/work/Enso-OS/panther_launcher

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nick/work/Enso-OS/panther_launcher/build

# Utility rule file for i18n.

# Include the progress variables for this target.
include po/CMakeFiles/i18n.dir/progress.make

i18n: po/CMakeFiles/i18n.dir/build.make
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ky.mo /home/nick/work/Enso-OS/panther_launcher/po/ky.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/zh_CN.mo /home/nick/work/Enso-OS/panther_launcher/po/zh_CN.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ms.mo /home/nick/work/Enso-OS/panther_launcher/po/ms.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ro.mo /home/nick/work/Enso-OS/panther_launcher/po/ro.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/nl.mo /home/nick/work/Enso-OS/panther_launcher/po/nl.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/lv.mo /home/nick/work/Enso-OS/panther_launcher/po/lv.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/lt.mo /home/nick/work/Enso-OS/panther_launcher/po/lt.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/en_CA.mo /home/nick/work/Enso-OS/panther_launcher/po/en_CA.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/te.mo /home/nick/work/Enso-OS/panther_launcher/po/te.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/lo.mo /home/nick/work/Enso-OS/panther_launcher/po/lo.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/pt_BR.mo /home/nick/work/Enso-OS/panther_launcher/po/pt_BR.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/af.mo /home/nick/work/Enso-OS/panther_launcher/po/af.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ka.mo /home/nick/work/Enso-OS/panther_launcher/po/ka.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ko.mo /home/nick/work/Enso-OS/panther_launcher/po/ko.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ast.mo /home/nick/work/Enso-OS/panther_launcher/po/ast.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/lb.mo /home/nick/work/Enso-OS/panther_launcher/po/lb.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/it.mo /home/nick/work/Enso-OS/panther_launcher/po/it.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/en_GB.mo /home/nick/work/Enso-OS/panther_launcher/po/en_GB.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sma.mo /home/nick/work/Enso-OS/panther_launcher/po/sma.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sv.mo /home/nick/work/Enso-OS/panther_launcher/po/sv.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/fa.mo /home/nick/work/Enso-OS/panther_launcher/po/fa.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/zh_TW.mo /home/nick/work/Enso-OS/panther_launcher/po/zh_TW.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/da.mo /home/nick/work/Enso-OS/panther_launcher/po/da.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/fi.mo /home/nick/work/Enso-OS/panther_launcher/po/fi.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/fr.mo /home/nick/work/Enso-OS/panther_launcher/po/fr.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/am.mo /home/nick/work/Enso-OS/panther_launcher/po/am.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ta.mo /home/nick/work/Enso-OS/panther_launcher/po/ta.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sr.mo /home/nick/work/Enso-OS/panther_launcher/po/sr.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/pt.mo /home/nick/work/Enso-OS/panther_launcher/po/pt.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ru.mo /home/nick/work/Enso-OS/panther_launcher/po/ru.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/bg.mo /home/nick/work/Enso-OS/panther_launcher/po/bg.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/el.mo /home/nick/work/Enso-OS/panther_launcher/po/el.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/hr.mo /home/nick/work/Enso-OS/panther_launcher/po/hr.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ja.mo /home/nick/work/Enso-OS/panther_launcher/po/ja.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/cs.mo /home/nick/work/Enso-OS/panther_launcher/po/cs.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/eu.mo /home/nick/work/Enso-OS/panther_launcher/po/eu.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/hu.mo /home/nick/work/Enso-OS/panther_launcher/po/hu.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sr@latin.mo /home/nick/work/Enso-OS/panther_launcher/po/sr@latin.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/nn.mo /home/nick/work/Enso-OS/panther_launcher/po/nn.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ml.mo /home/nick/work/Enso-OS/panther_launcher/po/ml.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/es.mo /home/nick/work/Enso-OS/panther_launcher/po/es.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sk.mo /home/nick/work/Enso-OS/panther_launcher/po/sk.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/de.mo /home/nick/work/Enso-OS/panther_launcher/po/de.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/en_AU.mo /home/nick/work/Enso-OS/panther_launcher/po/en_AU.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ca.mo /home/nick/work/Enso-OS/panther_launcher/po/ca.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/gl.mo /home/nick/work/Enso-OS/panther_launcher/po/gl.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/pl.mo /home/nick/work/Enso-OS/panther_launcher/po/pl.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/mr.mo /home/nick/work/Enso-OS/panther_launcher/po/mr.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/he.mo /home/nick/work/Enso-OS/panther_launcher/po/he.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ckb.mo /home/nick/work/Enso-OS/panther_launcher/po/ckb.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/nb.mo /home/nick/work/Enso-OS/panther_launcher/po/nb.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sl.mo /home/nick/work/Enso-OS/panther_launcher/po/sl.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/my.mo /home/nick/work/Enso-OS/panther_launcher/po/my.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/az.mo /home/nick/work/Enso-OS/panther_launcher/po/az.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/et.mo /home/nick/work/Enso-OS/panther_launcher/po/et.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/eo.mo /home/nick/work/Enso-OS/panther_launcher/po/eo.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/zh_HK.mo /home/nick/work/Enso-OS/panther_launcher/po/zh_HK.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sw.mo /home/nick/work/Enso-OS/panther_launcher/po/sw.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/fr_CA.mo /home/nick/work/Enso-OS/panther_launcher/po/fr_CA.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/bn.mo /home/nick/work/Enso-OS/panther_launcher/po/bn.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/is.mo /home/nick/work/Enso-OS/panther_launcher/po/is.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/uk.mo /home/nick/work/Enso-OS/panther_launcher/po/uk.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/tr.mo /home/nick/work/Enso-OS/panther_launcher/po/tr.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/th.mo /home/nick/work/Enso-OS/panther_launcher/po/th.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/ar.mo /home/nick/work/Enso-OS/panther_launcher/po/ar.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/rue.mo /home/nick/work/Enso-OS/panther_launcher/po/rue.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/sq.mo /home/nick/work/Enso-OS/panther_launcher/po/sq.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/be.mo /home/nick/work/Enso-OS/panther_launcher/po/be.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/id.mo /home/nick/work/Enso-OS/panther_launcher/po/id.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/hi.mo /home/nick/work/Enso-OS/panther_launcher/po/hi.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/si.mo /home/nick/work/Enso-OS/panther_launcher/po/si.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/bs.mo /home/nick/work/Enso-OS/panther_launcher/po/bs.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/hy.mo /home/nick/work/Enso-OS/panther_launcher/po/hy.po
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && /usr/bin/msgfmt -o /home/nick/work/Enso-OS/panther_launcher/build/po/vi.mo /home/nick/work/Enso-OS/panther_launcher/po/vi.po
.PHONY : i18n

# Rule to build all files generated by this target.
po/CMakeFiles/i18n.dir/build: i18n

.PHONY : po/CMakeFiles/i18n.dir/build

po/CMakeFiles/i18n.dir/clean:
	cd /home/nick/work/Enso-OS/panther_launcher/build/po && $(CMAKE_COMMAND) -P CMakeFiles/i18n.dir/cmake_clean.cmake
.PHONY : po/CMakeFiles/i18n.dir/clean

po/CMakeFiles/i18n.dir/depend:
	cd /home/nick/work/Enso-OS/panther_launcher/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nick/work/Enso-OS/panther_launcher /home/nick/work/Enso-OS/panther_launcher/po /home/nick/work/Enso-OS/panther_launcher/build /home/nick/work/Enso-OS/panther_launcher/build/po /home/nick/work/Enso-OS/panther_launcher/build/po/CMakeFiles/i18n.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : po/CMakeFiles/i18n.dir/depend

