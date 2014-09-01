//#include "HelloWorldScene.h"
//#include "GlobalDefine.h"
//
//USING_NS_CC;
//
//Scene* HelloWorld::createScene()
//{
//    // 'scene' is an autorelease object
//    auto scene = Scene::createWithPhysics();
//#if (COCOS2D_DEBUG)
//    scene->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);
//#endif
//    scene->getPhysicsWorld()->setGravity(Vect(0.0f,100.0f));
//    // 'layer' is an autorelease object
//    auto layer = HelloWorld::create();
//
//    // add layer as a child to scene
//    scene->addChild(layer);
//
//    // return the scene
//    return scene;
//}
//
//// on "init" you need to initialize your instance
//bool HelloWorld::init()
//{
//    //////////////////////////////
//    // 1. super init first
//    if ( !Layer::init() )
//    {
//        return false;
//    }
//    
//    Size visibleSize = Director::getInstance()->getVisibleSize();
//    Vec2 origin = Director::getInstance()->getVisibleOrigin();
//
//    PhysicsBody* worldBody = nullptr;
//#if (COCOS2D_DEBUG)
//    worldBody = PhysicsBody::createEdgeBox(visibleSize,PHYSICSBODY_MATERIAL_DEFAULT,0);
//#else
//    worldBody = PhysicsBody::createEdgeBox(visibleSize);
//#endif
//    
//    
//    auto node = Node::create();
//    node->setPhysicsBody(worldBody);
//    node->setPosition(visibleSize.width/2, visibleSize.height/2);
//    addChild(node);
//    
//
//    auto floor = Sprite::create("ground.png");
////    floor->setScale(2);
//    auto floorBox = PhysicsBody::createBox(floor->getContentSize());
////    floorBox->set
//    floorBox->setDynamic(false);//静态物体，也就是说，物理世界不会对它起产生影响了，它不会被撞飞，随你怎么撞，它都纹丝不动~
//    floorBox->setCategoryBitmask(1);
////    floorBox->setCollisionBitmask(1);
//    floorBox->setContactTestBitmask(1);
//    floor->setPhysicsBody(floorBox);
//    floor->cocos2d::Node::setPosition(visibleSize.width/2,  floor->getContentSize().height );
//    addChild(floor);
//    
//
//    return true;
//}
//
//
//void HelloWorld::menuCloseCallback(Ref* pSender)
//{
//#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
//	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
//    return;
//#endif
//
//    Director::getInstance()->end();
//
//#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//    exit(0);
//#endif
//}
