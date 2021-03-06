#include "Component.h"

Component::Component(const QString *name) :
		QListWidgetItem() {
	if (name != 0) {
		setText(*name);
	} else {
		setText("Empty item");
	}
}

Component::~Component() {
}

QRectF Component::getBoundingRect() const {
	return QRectF(0, 0, 0, 0);
}

void Component::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
		QWidget *widget) {
}
