// Gr@v:f/UX
// Gavin:Zimmerman

// Gravity Flux field
#include "scene.h"


// VERSE
static void buildFlux(GLFWwindow* window);
static void clearFlux(GLFWwindow* window);
VerseInstance MAIN_VERSE = {
    .Name = "Gr@v:f/UX",
    .ClassName = "Verse//11",
    
    .Build = buildFlux,
    .Clean = clearFlux,

    .Jumps = {NULL},
    .Root = {
        .Name = "Root",
        .ClassName = "RootOrigin",

        .Parent = NULL,
        .CanRender = GL_TRUE,
        ._Malloced = GL_FALSE,

        .Parts = {NULL},
        .Lights = {NULL},
        .Origins = {NULL}
    }
};

static VerseInstance* self;
static OriginInstance* root;



// SRC
static void resize(GLFWwindow* window, int width, int height) {
    float asp = (float)width/(float)height;
    mat4x4_perspective(
        self->ProjectionMatrix,
        50*TO_RAD,
        asp,
        NEAR_PROJECTION, FAR_PROJECTION
    );
}


static void step() {
    // Runs every frame
    PartInstance* nwp;
    nwp = OriginFindFirstPart(root, "cube", 255); if (nwp) {
        PartSetRotation(nwp, (vec3){0,glfwGetTime()/2.0, 0 }, EULER_XYZ);
    }
}


static void buildFlux(GLFWwindow* window) {
    // Init
    self = &MAIN_VERSE;
    root = &self->Root;
    mat4x4_identity(root->CFrame);

    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    resize(window, width, height);

    // Connection
    SignalConnect(&PreRender, step);
    SignalConnect(&FrameBufferSize, resize);

    // Scene
    PartInstance* nwp;
    LightInstance* nwl;
    OriginInstance* form = root;
    
    // Light
    nwl = pointLight(0.); {
        nwl->Name="simple_pass";
        LightSetParent(nwl, form);
    }

    // Cube
    nwp = cube(2.); {
        nwp->Name="cube";
        PartSetParent(nwp, form);
    }
}

static void clearFlux(GLFWwindow* window) {
    DestroyOriginInstance(root);
}