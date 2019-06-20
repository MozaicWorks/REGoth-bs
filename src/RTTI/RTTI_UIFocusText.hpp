#include "RTTIUtil.hpp"
#include <components/UIFocusText.hpp>

namespace REGoth
{
  class RTTI_UIFocusText : public bs::RTTIType<UIFocusText, bs::Component, RTTI_UIFocusText>
  {
    BS_BEGIN_RTTI_MEMBERS
    // TODO: Fill RTTI Members
    BS_END_RTTI_MEMBERS

  public:
    RTTI_UIFocusText()
    {
    }

    REGOTH_IMPLEMENT_RTTI_CLASS_FOR_COMPONENT(UIFocusText)
  };
}  // namespace REGoth
