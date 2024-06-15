import QtQuick
import QtQuick3D

Node {
    id: node

    // Resources
    PrincipledMaterial {
        id: material_001_material
        objectName: "Material.001"
        baseColor: "#ff004acc"
        indexOfRefraction: 1.4500000476837158
    }

    // Nodes:
    Node {
        id: test_obj
        objectName: "test.obj"
        Model {
            id: cube
            objectName: "Cube"
            source: "meshes/cube_mesh.mesh"
            materials: [
                material_001_material
            ]
        }
    }

    // Animations:
}
