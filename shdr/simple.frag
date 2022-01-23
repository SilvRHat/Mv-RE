// Multi_verse:RE (Rendering Engine)
// Gavin Zimmerman
// Simple Color Node

#version 410 core

// INPUTS
layout(location = 0) in vec4 i_Color;
layout(location = 1) in vec3 i_LightOffset;
layout(location = 2) in vec3 i_Norm;
layout(location = 3) in vec3 i_ViewPos;
layout(location = 4) in float i_Emission;
layout(location = 5) in float i_Shiny;
layout(location = 6) in vec2 i_UVMap;
layout(location = 7) in vec4 i_Vert;

uniform mat4 u_ViewMat;
uniform mat4 u_ProjectionMat;
uniform vec4 u_ClipPlane;
uniform vec2 u_Resolution;
uniform vec2 u_Mouse;
uniform float u_Time;

uniform int l_Enum;
uniform float l_Falloff;
uniform vec4 l_Color;
uniform vec4 l_Color1;
uniform float l_Radius;
uniform float l_Angle0;
uniform float l_Angle1;



// OUTPUTS
layout (location=0) out vec4 o_Color;


// SOURCE
void main() {
    o_Color = i_Color;
}