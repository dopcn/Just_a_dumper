//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SOHUVideoPlayerController, SVBarrageItemLabelView, SVBarrageViewController, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol SVBarrageLabelStorageDelegate;

@interface SVBarrageLabelStorage : NSObject <UIGestureRecognizerDelegate>
{
    SVBarrageViewController *_barrageVC;
    NSMutableArray *_fromRightArray;
    NSMutableSet *_itemLabelCachePool;
    id <SVBarrageLabelStorageDelegate> _delegate;
    SOHUVideoPlayerController *_playerVC;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableSet *_likedBarrageSet;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SVBarrageItemLabelView *_longPressCurrentView;
    struct CGRect _barrageFrame;
}

+ (id)barrageLabelStorage:(id)arg1;
@property(retain, nonatomic) SVBarrageItemLabelView *longPressCurrentView; // @synthesize longPressCurrentView=_longPressCurrentView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSMutableSet *likedBarrageSet; // @synthesize likedBarrageSet=_likedBarrageSet;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak SOHUVideoPlayerController *playerVC; // @synthesize playerVC=_playerVC;
@property(nonatomic) __weak id <SVBarrageLabelStorageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *itemLabelCachePool; // @synthesize itemLabelCachePool=_itemLabelCachePool;
@property(retain, nonatomic) NSMutableArray *fromRightArray; // @synthesize fromRightArray=_fromRightArray;
@property(nonatomic) struct CGRect barrageFrame; // @synthesize barrageFrame=_barrageFrame;
@property(nonatomic) __weak SVBarrageViewController *barrageVC; // @synthesize barrageVC=_barrageVC;
- (void).cxx_destruct;
- (_Bool)isLikeActionValid:(id)arg1;
- (void)likeAction:(id)arg1 withTouchLocation:(struct CGPoint)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)longPressGestureStateEnded;
- (void)longPressGestureAction:(id)arg1;
- (void)singleTapHandle:(id)arg1;
- (void)removeSingleTapGesture;
- (void)addSingleTapGesture;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)pause;
- (void)resetBarrageOpacity:(double)arg1;
- (void)removeOffScreenItems;
- (void)clearAllBarrageItems;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 forRow:(long long)arg2 andType:(long long)arg3;
- (long long)locationForType:(long long)arg1 barrageItem:(id)arg2;
- (void)trimToLength:(long long)arg1;
- (void)updateWithFrame:(struct CGRect)arg1 frameType:(unsigned long long)arg2;
- (id)itemLabelForCachePool;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

