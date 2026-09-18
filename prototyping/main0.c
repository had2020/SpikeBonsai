#include <stdint.h>

struct NeuralNode {
    uint64_t weights[64];
    uint8_t thresholds[64]; // 4 working outputs max
    //TODO: perhaps with pointers to other nuerons based on outputs
    uint16_t left_node_ptr;
    uint16_t right_node_ptr;
};

struct NeuralNode new(
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

struct NodeNet {

};

int main() {
    return 0;
}
