//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WXSDKInstance, WXThreadSafeCounter, WXTouchGestureRecognizer, WXTransform;
@protocol WXScrollerProtocol;

@interface WXComponent : NSObject <UIGestureRecognizerDelegate>
{
    NSString *_type;
    NSMutableArray *_subcomponents;
    struct wx_css_node *_cssNode;
    _Bool _isLayoutDirty;
    struct CGRect _calculatedFrame;
    struct CGPoint _absolutePosition;
    long long _positionType;
    UIColor *_backgroundColor;
    NSString *_backgroundImage;
    _Bool _clipToBounds;
    UIView *_view;
    double _opacity;
    long long _visibility;
    NSMutableDictionary *_pseudoClassStyles;
    NSMutableDictionary *_updatedPseudoClassStyles;
    _Bool _isListenPseudoTouch;
    _Bool _appearEvent;
    _Bool _disappearEvent;
    UITapGestureRecognizer *_tapGesture;
    NSMutableArray *_swipeGestures;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPanGestureRecognizer *_panGesture;
    _Bool _listenPanStart;
    _Bool _listenPanMove;
    _Bool _listenPanEnd;
    _Bool _listenHorizontalPan;
    _Bool _listenVerticalPan;
    WXTouchGestureRecognizer *_touchGesture;
    CALayer *_layer;
    _Bool _composite;
    _Bool _compositingChild;
    WXThreadSafeCounter *_displayCounter;
    UIColor *_borderTopColor;
    UIColor *_borderRightColor;
    UIColor *_borderLeftColor;
    UIColor *_borderBottomColor;
    double _borderTopWidth;
    double _borderRightWidth;
    double _borderLeftWidth;
    double _borderBottomWidth;
    double _borderTopLeftRadius;
    double _borderTopRightRadius;
    double _borderBottomLeftRadius;
    double _borderBottomRightRadius;
    long long _borderTopStyle;
    long long _borderRightStyle;
    long long _borderBottomStyle;
    long long _borderLeftStyle;
    _Bool _isFixed;
    _Bool _async;
    _Bool _isNeedJoinLayoutSystem;
    _Bool _lazyCreateView;
    WXTransform *_transform;
    NSString *_ref;
    NSMutableDictionary *_styles;
    NSMutableDictionary *_attributes;
    NSMutableArray *_events;
    struct _opaque_pthread_mutex_t _propertyMutex;
    struct _opaque_pthread_mutexattr_t _propertMutexAttr;
    WXComponent *_supercomponent;
    id <WXScrollerProtocol> _ancestorScroller;
    WXSDKInstance *_weexInstance;
    _Bool _isViewFrameSyncWithCalculated;
}

@property(nonatomic) _Bool isViewFrameSyncWithCalculated; // @synthesize isViewFrameSyncWithCalculated=_isViewFrameSyncWithCalculated;
@property(readonly, nonatomic) NSString *ref; // @synthesize ref=_ref;
- (void).cxx_destruct;
- (void)resetStyles:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)readyToRender;
- (void)updateStyles:(id)arg1;
- (void)_updateAttributesOnMainThread:(id)arg1;
- (void)_updateStylesOnMainThread:(id)arg1 resetStyles:(id)arg2;
- (void)_removeEventOnComponentThread:(id)arg1;
- (void)_addEventOnComponentThread:(id)arg1;
- (void)_updateAttributesOnComponentThread:(id)arg1;
- (void)_updateStylesOnComponentThread:(id)arg1 resetStyles:(id)arg2 isUpdateStyles:(_Bool)arg3;
- (id)ancestorScroller;
- (void)_moveToSupercomponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_removeFromSupercomponent;
- (void)_removeSubcomponent:(id)arg1;
- (void)_insertSubcomponent:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) __weak WXComponent *supercomponent;
@property(readonly, nonatomic) NSArray *subcomponents;
@property(readonly, nonatomic) struct wx_css_node *cssNode;
- (struct CGPoint)absolutePosition;
@property(readonly, nonatomic) struct CGRect calculatedFrame;
@property(readonly, nonatomic) CALayer *layer;
- (void)_handleFirstScreenTime;
- (void)_resetNativeBorderRadius;
- (void)_buildViewHierarchyLazily;
@property(readonly, nonatomic) UIView *view;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak WXSDKInstance *weexInstance;
@property(readonly, nonatomic) NSArray *events;
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, nonatomic) NSDictionary *pseudoClassStyles;
@property(readonly, nonatomic) NSDictionary *styles;
- (void)dealloc;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (id)touchResultWithScreenLocation:(struct CGPoint)arg1 pageLocation:(struct CGPoint)arg2 identifier:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)checkRemoveTouchGesture;
- (void)removeTouchCancelEvent;
- (void)removeTouchEndEvent;
- (void)removeTouchMoveEvent;
- (void)removeTouchStartEvent;
- (void)addTouchCancelEvent;
- (void)addTouchEndEvent;
- (void)addTouchMoveEvent;
- (void)addTouchStartEvent;
- (id)touchGesture;
- (void)checkRemovePanGesture;
- (void)removeVerticalPanEvent;
- (void)removeHorizontalPanEvent;
- (void)removePanEndEvent;
- (void)removePanMoveEvent;
- (void)removePanStartEvent;
- (void)onPan:(id)arg1;
- (void)addVerticalPanEvent;
- (void)addHorizontalPanEvent;
- (void)addPanEndEvent;
- (void)addPanMoveEvent;
- (void)addPanStartEvent;
- (void)addPanGesture;
- (void)onLongPress:(id)arg1;
- (void)removeLongPressEvent;
- (void)addLongPressEvent;
- (void)onSwipe:(id)arg1;
- (void)removeSwipeEvent;
- (void)addSwipeEvent;
- (void)onClick:(id)arg1;
- (void)removeClickEvent;
- (void)addClickEvent;
- (void)removePseudoTouchEvent;
- (void)removeDisappearEvent;
- (void)removeAppearEvent;
- (void)addDisappearEvent;
- (void)addAppearEvent;
- (void)_removeAllEvents;
- (void)_removeEventOnMainThread:(id)arg1;
- (void)_addEventOnMainThread:(id)arg1;
- (void)_initPseudoEvents:(_Bool)arg1;
- (void)_initEvents:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)fireEvent:(id)arg1 params:(id)arg2 domChanges:(id)arg3;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (void)_unloadViewWithReusing:(_Bool)arg1;
- (void)_resetStyles:(id)arg1;
- (void)_updateViewStyles:(id)arg1;
- (void)_initViewPropertyWithStyles:(id)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)viewWillLoad;
- (void)moveToSuperview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromSuperview;
- (void)willRemoveSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isViewLoaded;
- (id)loadView;
- (void)_parse:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)setNavigationWithStyles:(id)arg1;
- (void)setNavigationItemWithParam:(id)arg1 position:(long long)arg2;
- (void)setNavigationBackgroundColor:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)_updateNavBarAttributes:(id)arg1;
- (void)_setupNavBarWithStyles:(id)arg1 attributes:(id)arg2;
- (id)navigator;
- (void)_fillAbsolutePositions;
- (void)_resetCSSNode:(id)arg1;
- (void)_fillCSSNode:(id)arg1;
- (double)WXPixelType:(id)arg1;
- (void)_layoutDidFinish;
- (struct CGPoint)_computeNewAbsolutePosition:(struct CGPoint)arg1;
- (struct CGPoint)computeNewAbsolutePosition:(struct CGPoint)arg1;
- (void)_calculateFrameWithSuperAbsolutePosition:(struct CGPoint)arg1 gatherDirtyComponents:(id)arg2;
- (void)_frameDidCalculated:(_Bool)arg1;
- (unsigned long long)_childrenCountForLayout;
- (void)_recomputeCSSNodeChildren;
- (void)_resetCSSNodeStyles:(id)arg1;
- (void)_updateCSSNodeStyles:(id)arg1;
- (void)_initCSSNodeWithStyles:(id)arg1;
- (void)layoutDidFinish;
- (CDUnknownBlockType)measureBlock;
- (_Bool)needsLayout;
- (void)setNeedsLayout;
- (void)recoveryPseudoStyles:(id)arg1;
- (id)getPseudoClassStylesByKeys:(id)arg1;
- (id)getPseudoClassStyles:(id)arg1 level:(long long)arg2;
- (id)getPseudoClassStyles:(id)arg1;
- (id)getPseudoKey:(id)arg1;
- (void)updatePseudoClassStyles:(id)arg1;
- (id)parseStyles:(id)arg1;
- (void)_handleBorders:(id)arg1 isUpdating:(_Bool)arg2;
- (_Bool)_needsDrawBorder;
- (void)_drawBorderWithContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (id)_borderImage;
- (void)_collectDisplayBlocks:(id)arg1 isCancelled:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_compositeDisplayBlock;
- (void)_willDisplayLayer:(id)arg1;
- (CDUnknownBlockType)displayCompletionBlock;
- (CDUnknownBlockType)displayBlock;
- (void)setNeedsDisplay;
- (id)gradientColorImageFromColors:(id)arg1 gradientType:(long long)arg2 imgSize:(struct CGSize)arg3;
- (void)setGradientLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

