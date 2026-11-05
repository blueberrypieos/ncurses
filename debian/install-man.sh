#!/bin/sh
# SPDX-License-Identifier: BSD-2-Clause
# Copyright (c) 2026 The Blueberry Pie OS Authors
set -eu
man=$1/ncurses/man
work=$2/man
dest=$3/usr/share/man
rm -rf "$work"
mkdir -p "$work" "$dest/man1" "$dest/man3" "$dest/man5" "$dest/man7"
(cd "$work" && sh "$man/MKterminfo.sh" "$man/terminfo.head" "$1/ncurses/include/Caps" \
	"$man/terminfo.tail") > "$work/terminfo.5"
printf '%s\n' s,@DATADIR@,/usr/share,g s,@TERMINFO@,/usr/share/terminfo,g \
	s,@TERMINFO_DIRS@,/usr/share/terminfo,g s,@NCURSES_MAJOR@,6,g s,@NCURSES_MINOR@,0,g \
	s,@NCURSES_PATCH@,20150808,g s,@NCURSES_OSPEED@,short,g s,@CAPTOINFO@,captoinfo,g \
	s,@CLEAR@,clear,g s,@INFOCMP@,infocmp,g s,@INFOTOCAP@,infotocap,g \
	s,@TIC@,tic,g s,@TOE@,toe,g s,@TPUT@,tput,g s,@TSET@,tset,g > "$work/subst.sed"
pages=
for page in "$man"/*.[1357]* "$work/terminfo.5"; do
	base=${page##*/}
	case $base in tabs.1|*-config.1|adacurses*) continue ;; esac
	suffix=${base##*.}
	out=$dest/man$(printf %.1s "$suffix")/$base
	sed -f "$work/subst.sed" "$page" > "$out"
	pages="$pages $out"
done
for out in $pages; do
	suffix=${out##*.}
	for alias in $(sed -f "$man/manlinks.sed" "$out" | sort -u); do
		[ -e "${out%/*}/$alias.$suffix" ] || ln "$out" "${out%/*}/$alias.$suffix"
	done
done
ln "$dest/man3/curs_termcap.3x" "$dest/man3/termcap.3"
