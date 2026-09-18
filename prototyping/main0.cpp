#include <cstdint>
#include <ios>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

/*
struct NeuralNode {
    uint64_t weights[64];
    uint8_t thresholds[64]; // 4 working outputs max
    //TODO: perhaps with pointers to other nuerons based on outputs
    uint16_t left_node_ptr;
    uint16_t right_node_ptr;
};

struct NeuralNode init (
    uint64_t weights_init_value,
    uint8_t thresholds_init_value
) {
    struct NeuralNode r = {};
    for (uint64_t i = 0; i < 64; i++) {
        r.weights[i] = weights_init_value;
        r.thresholds[i] = thresholds_init_value;
    }
    return r;
}

/*
struct NodeNet {
    uint64_t node_t;
    ;
    };*/

void forward(
    std::vector<uint64_t> weights,
    std::vector<uint8_t> thresholds,
    std::vector<uint32_t> left_node_ptr,
    std::vector<uint32_t> right_node_ptr
) {

}

int main() {
    //uint64_t *st_ptr;
    //uint64_t node_count = 8;
    //st_ptr = malloc(sizeof(struct NeuralNode) << node_count);

    //uint8_t test = 5 << 2;
    //uint64_t test = sizeof(struct NeuralNode);
    //printf("%d", test);

    std::vector<uint64_t> weights = {};
    std::vector<uint8_t> thresholds = {};
    // per 64
    std::vector<uint32_t> left_node_ptr = {};
    std::vector<uint32_t> right_node_ptr = {};

    size_t amt = 128;
    inputs.reserve(amt); // TODO
    weights.reserve(amt * 64);
    thresholds.reserve(amt * 64);
    left_node_ptr.reserve(amt);
    right_node_ptr.reserve(amt);

    // RAII
    for (uint32_t i = 128; i > 0; i--) {
        //printf("i: %d, ", i);
        weights.push_back(0);
        thresholds.push_back(0);
        if ((i % 64) == 0) {
            //printf("per 64: %d\n", i);
            left_node_ptr.push_back(0);
            right_node_ptr.push_back(0);
        }
    }

    printf("Total: allocated memory: %d bytes\n", (
        weights.capacity() + thresholds.capacity() + left_node_ptr.capacity() + right_node_ptr.capacity()
    ));



    return 0;
}
