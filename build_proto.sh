#!/bin/env bash

# print commands
set -x

BUILD_TARGETS=$(ls proto)

echo $BUILD_TARGETS

PROTOC_PREFFIX="--proto_path=./proto/"
PROTOL_PREFFIX="--proto-path=./proto/"

PROTOC_INCLUDES=""
PROTOL_INCLUDES=""

# prepend proto/ to each target without sed
for TARGET in $BUILD_TARGETS; do
    echo $TARGET
    PROTOC_INCLUDES="$PROTOC_INCLUDES $PROTOC_PREFFIX$TARGET"
    PROTOL_INCLUDES="$PROTOL_INCLUDES $PROTOL_PREFFIX$TARGET"


done

echo $PROTOC_INCLUDES
echo $PROTOL_INCLUDES

# SSL_PROTO_PATH=./proto/ssl
# SPBU_PROTO_PATH=./proto/spbunited
# PROTOC_INCLUDES="--proto_path=$SSL_PROTO_PATH --proto_path=$SPBU_PROTO_PATH"
# PROTOL_INCLUDES="--proto-path=$SSL_PROTO_PATH --proto-path=$SPBU_PROTO_PATH"
# PROTOC_INCLUDES="--proto_path=./proto"
# PROTOL_INCLUDES="--proto-path=./proto"
PYOUT_PATH=./protopy
CPPOUT_PATH=./protocpp
FILES=$(find proto -name '*.proto')

echo $FILES

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
