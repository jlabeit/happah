#ifndef COMPONENTCONTAINER_H
#define COMPONENTCONTAINER_H

#include <QListWidget>
#include <QGraphicsScene>

#include "Component.h"

class ComponentContainer: public QListWidget {
	Q_OBJECT

private:
	QGraphicsScene* scene;

public:
	ComponentContainer(QGraphicsScene* scene, QWidget* parent = 0);
	~ComponentContainer();

public slots:
	void addComponent( Component* newComponent );

};

#endif // COMPONENTCONTAINER_H
