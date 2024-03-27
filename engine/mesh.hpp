#pragma once

#include <memory>
#include <tuple>

#include "common.hpp"
#include "material.hpp"
#include "node.hpp"
#include "shader.hpp"

/**
 * A mesh represents a shape that can be rendered inside a scene.
 */
class LIB_API Mesh : public Node
{
public:
    Mesh();
    ~Mesh();

    void render(const glm::mat4 world_matrix) const override;

    void set_material(const std::shared_ptr<Material> new_material);
    std::shared_ptr<Material> get_material() const;

    void set_shader(const std::shared_ptr<Shader> new_shader);
    std::shared_ptr<Shader> get_shader() const;

    void set_cast_shadows(const bool new_cast_shadows);
    bool get_cast_shadows() const;

    void set_mesh_data(
        const std::vector<glm::vec3>& new_vertices,
        const std::vector<uint32_t>& new_faces,
        const std::vector<glm::vec3>& new_normals,
        const std::vector<glm::vec2>& new_uvs);

private:
    std::shared_ptr<Material> material;
    std::shared_ptr<Shader> shader;
    int number_of_faces;

    unsigned int vbo_vertices;
    unsigned int vbo_normals;
    unsigned int vbo_uvs;
    unsigned int vbo_faces;
    unsigned int vao_id;

    bool cast_shadows;
};
