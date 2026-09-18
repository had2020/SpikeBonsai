#include <cstdint>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

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

int main() {
    uint64_t *st_ptr;
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
    weights.reserve(amt);
    thresholds.reserve(amt);

    for (uint32_t i = 0; i > 0; i++) {
        weights[i] = 0;
        thresholds[i] = 0;
    }

    return 0;
}
