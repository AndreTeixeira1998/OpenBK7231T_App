#ifndef __TOOL_TEXT_H__
#define __TOOL_TEXT_H__

#include "sim_local.h"
#include "Tool_Base.h"
#include "Coord.h"

class Tool_Text : public Tool_Base {
	class CText *currentTarget;
public:
	Tool_Text();
	virtual const char *getName() const {
		return "Text";
	}
	virtual int drawTextStats(int h);
	virtual void onEnd();
	virtual void drawTool();
	virtual void onMouseDown(const Coord &pos, int button);
	virtual void onMouseUp(const Coord &pos, int button);
};


#endif // __TOOL_TEXT_H__
