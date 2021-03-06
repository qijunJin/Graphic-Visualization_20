#include "Lambertian.h"

Lambertian::Lambertian(const vec3& color): Material()
{
    diffuse = color;
}

Lambertian::~Lambertian()
{
}

bool Lambertian::scatter(const Ray& r_in, const IntersectionInfo& rec, vec3& color, std::vector<Ray>& r_out) const  {
    vec3 target = rec.p + rec.normal + this->RandomInSphere();
    r_out.push_back( Ray(rec.p, target-rec.p));
    color = diffuse;
    return true;
}

