#version 150
precision highp float;

//Inputs
uniform sampler2D tex;

//Outputs
out vec4 FragColorr;

void main(void) {
	FragColorr = vec4(1.0, 0.0, 1.0, 1.0);
}
