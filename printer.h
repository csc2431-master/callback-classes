//
// Created by Arias Arevalo, Carlos on 5/22/20.
//

#ifndef CALLBACK_CLASSES_PRINTER_H
#define CALLBACK_CLASSES_PRINTER_H

#include "object.h"
#include "callback.h"


class Printer : public Callback {
public:
	virtual void DoSomething(const Object *object) const;
};


#endif //CALLBACK_CLASSES_PRINTER_H
