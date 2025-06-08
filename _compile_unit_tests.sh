#!/usr/bin/env bash

cd ext/gerefi/unit_tests/

# This full path of the firmware directory
FDIR=$(cd "$(dirname "$0")"; pwd -P)

MI="../../../meta-info.env"

	if [ -f "$FDIR/$MI" ]; then
		true
		# If the file exists relative to our current directory, get the full path
	elif [ -f "$MI" ]; then
		MI=$(realpath "$MI")
	else
		echo "Could not find $MI"
		exit 1
	fi

source ../firmware/config/boards/common_script_read_meta_env.inc "$MI"

make -j$(nproc)

build/gerefi_test
