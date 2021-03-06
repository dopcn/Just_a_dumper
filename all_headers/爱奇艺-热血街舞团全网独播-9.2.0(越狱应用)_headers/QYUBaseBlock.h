//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYMessageCenterDelegate-Protocol.h"
#import "QYUBlockProtocol-Protocol.h"

@class NSMutableDictionary, NSString, QYUBlockDataV3, UIImageView;
@protocol QYUCardEventDelegate;

@interface QYUBaseBlock : UIView <QYMessageCenterDelegate, QYUBlockProtocol>
{
    _Bool _useCascadingUpdate;
    _Bool _isLastBlock;
    QYUBlockDataV3 *_data;
    UIImageView *_bgimgView;
    NSString *_width;
    NSString *_height;
    UIView *_parent;
    id <QYUCardEventDelegate> _delegate;
    NSMutableDictionary *_eventMap;
    long long _row;
}

+ (double)getHeightByData:(id)arg1 rowWidth:(double)arg2;
+ (Class)getBlockClass:(long long)arg1;
+ (id)p_registeredSubClassNameDict;
+ (void)registerBlock:(long long)arg1;
+ (void)pp_prepareLayout:(id)arg1;
@property(nonatomic) _Bool isLastBlock; // @synthesize isLastBlock=_isLastBlock;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(retain, nonatomic) NSMutableDictionary *eventMap; // @synthesize eventMap=_eventMap;
@property(nonatomic) __weak id <QYUCardEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSString *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *width; // @synthesize width=_width;
@property(retain, nonatomic) UIImageView *bgimgView; // @synthesize bgimgView=_bgimgView;
@property(nonatomic) _Bool useCascadingUpdate; // @synthesize useCascadingUpdate=_useCascadingUpdate;
@property(retain, nonatomic) QYUBlockDataV3 *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)setDebugCSS:(id)arg1;
- (void)qyReceiveMessage:(id)arg1 messageId:(id)arg2;
- (_Bool)isDefaultData:(id)arg1;
- (void)AddSubControlLayout:(id)arg1 control:(id)arg2 size:(struct CGSize)arg3 margin:(struct UIEdgeInsets)arg4;
- (void)alignLayout:(id)arg1;
- (void)onReceiveEventProcessResult:(id)arg1;
- (void)processEventInternal:(id)arg1;
- (void)processEvent:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateBlock:(id)arg1;
- (void)handleBorder;
- (void)postReset;
- (void)reset;
- (id)getParentViewController;
- (id)parentViewController;
- (struct CGSize)parseControlSize:(id)arg1;
- (void)getSize:(struct CGSize *)arg1;
- (void)buildEventMap;
- (void)initSubControls;
- (void)applyData;
- (void)didMoveToSuperview;
- (void)dealloc;
- (float)pt2px:(float)arg1 unit:(id)arg2;
- (float)pt2px:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;
- (void)setParentBkColor;
- (void)updatePlayerBlockByClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

