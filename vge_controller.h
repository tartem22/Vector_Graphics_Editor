#ifndef VGE_CONTROLLER_H
#define VGE_CONTROLLER_H

#include <memory>

#include "vge_model.h"
#include "vge_view.h"

class VgeController
{
public:
    VgeController(std::shared_ptr<VgeModel> model,
                  std::shared_ptr<VgeView> view);

private:
    std::shared_ptr<VgeModel> _model = nullptr;
    std::shared_ptr<VgeView> _view = nullptr;
};

#endif // VGE_CONTROLLER_H