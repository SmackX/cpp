#include "viewexample.hpp"

viewExample::viewExample()
{
  setRenderHint(QPainter::Antialiasing);

  setCacheMode(QGraphicsView::CacheNone);

  setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


  setWindowTitle("viewExample");

  setFrameStyle(0);
  setSceneRect(0, 0, 800, 800);
  setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
  setFixedSize(800, 800);

  mScene.setItemIndexMethod(QGraphicsScene::NoIndex);


  setScene(&mScene);
  _init_view_elements();
}
//------------------------------------------------------------------------------
void viewExample::_init_view_elements()
{
  mBtnA.setPos(50, 50);
  mBtnA.setGeometry(100, 100);

  mBtnB.setPos(150, 150);
  mBtnB.setGeometry(100, 100);

  mBtnC.setPos(250, 250);
  mBtnC.setGeometry(100, 100);

  mScene.addItem(&mBtnA);
  mScene.addItem(&mBtnB);
  mScene.addItem(&mBtnC);
}
