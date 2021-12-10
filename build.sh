#!/bin/bash

CURR_DIR=$PWD
WASM_NODE=${PWD}/nodes
NODE_NAME=$1

echo "#####################build wasm node"

cd ${WASM_NODE}/${NODE_NAME}

# use WAMR SDK to build out the .wasm binary

rm -rf out
mkdir out

/opt/wasi-sdk/bin/clang++     \
        --target=wasm32-wasi -O3 -z stack-size=4096 -Wl,--initial-memory=65536 \
        --sysroot=/opt/wasi-sdk/share/wasi-sysroot  \
        -I ${CURR_DIR}/lib/include/ \
        -Wl,--strip-all \
        -Wl,--export=main \
        -Wl,--allow-undefined \
        -o out/${NODE_NAME}.wasm `find | grep .cpp` \
        ${CURR_DIR}/lib/src/*/*.cpp



wasm2wat out/${NODE_NAME}.wasm > out/${NODE_NAME}.wat

if [ -f out/${NODE_NAME}.wasm ]; then
        echo "build ${OUT_FILE} success"
else
        echo "build ${OUT_FILE} fail"
fi
echo "####################build wasm apps done"
