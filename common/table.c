#include "../ui.h"
#include "uipriv.h"
#include "table.h"

void uiFreeTableColumnOrder(uiTableColumnOrder *o)
{
	uiprivFree(o->order);
	uiprivFree(o);
}

