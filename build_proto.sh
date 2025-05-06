#!/bin/env bash

# print commands
set -x

BUILD_TARGETS=$(ls proto)

echo $BUILD_TARGETS

PROTOC_PREFFIX="--proto_path=./proto/"
PROTOL_PREFFIX="--proto-path=./proto/"

PROTOC_INCLUDES=""
PROTOL_INCLUDES=""

for TARGET in $BUILD_TARGETS; do
    echo $TARGET
    PROTOC_INCLUDES="$PROTOC_INCLUDES $PROTOC_PREFFIX$TARGET"
    PROTOL_INCLUDES="$PROTOL_INCLUDES $PROTOL_PREFFIX$TARGET"

    PYOUT_PATH=./protopy/$TARGET
    CPPOUT_PATH=./protocpp/$TARGET
    FILES=$(find proto/$TARGET -name '*.proto')

    for DIR in $PYOUT_PATH $CPPOUT_PATH; do
        mkdir -p $DIR
        rm -rf $DIR/*
    done

    protoc $PROTOC_INCLUDES --python_out=$PYOUT_PATH --mypy_out=$PYOUT_PATH $FILES

    protol \
        --create-package \
        --in-place \
        --python-out $PYOUT_PATH \
        protoc $PROTOL_INCLUDES $FILES

    protoc $PROTOC_INCLUDES --cpp_out=$CPPOUT_PATH $FILES
done
