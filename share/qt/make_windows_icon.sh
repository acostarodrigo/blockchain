#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/IoP.png
ICON_DST=../../src/qt/res/icons/IoP.ico
convert ${ICON_SRC} -resize 16x16 IoP-16.png
convert ${ICON_SRC} -resize 32x32 IoP-32.png
convert ${ICON_SRC} -resize 48x48 IoP-48.png
convert IoP-16.png IoP-32.png IoP-48.png ${ICON_DST}

