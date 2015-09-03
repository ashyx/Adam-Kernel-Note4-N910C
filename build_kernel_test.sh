#!/bin/bash

echo "make clean"
make clean
echo "export ARCH=arm"
export ARCH=arm
echo "exynos5433-trelte_wanam_defconfig"
make exynos5433-trelte_wanam_defconfig
echo "make -j8 CONFIG_DEBUG_SECTION_MISMATCH=y"
make -j8 CONFIG_DEBUG_SECTION_MISMATCH=y
echo "Done!"

