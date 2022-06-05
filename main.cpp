#include "vge_controller.h"
#include "vge_model.h"
#include "vge_view.h"

void onCreateButtonClick();
void onImportButtonClick();
void onExportButtonClick();

void onCreatePrimitiveButtonClick();
void onDeletePrimetiveButtonClick();

void onMouseUpClick();
void onMouseDownClick();

int main()
{
    std::shared_ptr<VgeModel> model(new VgeModel());
    std::shared_ptr<VgeView> view(new VgeView());

    std::shared_ptr<VgeController> controller(
        new VgeController(model, view));


    return 0;
}