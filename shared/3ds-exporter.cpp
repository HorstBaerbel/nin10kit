#include <memory>
#include <set>
#include <vector>

#include "export_params.hpp"
#include "fileutils.hpp"
#include "image32.hpp"
#include "logger.hpp"
#include "shared.hpp"

void Do3DSExport(const std::vector<Image32Bpp>& images, const std::vector<Image32Bpp>& tilesets, const std::vector<Image32Bpp>& palettes)
{
    // Add images to header and implementation files
    for (const auto& image : images)
    {
        std::shared_ptr<Exportable> image_ptr(new Image32Bpp(image));
        header.Add(image_ptr);
        implementation.Add(image_ptr);
    }
}
