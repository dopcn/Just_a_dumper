//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCMainBaseWidget.h"

#import "DCMainBaseTitleDelegate-Protocol.h"

@class DCMainShopMallItemControl, NSString;

@interface DCMainShopMallWidget : DCMainBaseWidget <DCMainBaseTitleDelegate>
{
    DCMainShopMallItemControl *_leftItem;
    DCMainShopMallItemControl *_rightItem;
}

+ (double)expectHeight:(id)arg1;
@property(retain, nonatomic) DCMainShopMallItemControl *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) DCMainShopMallItemControl *leftItem; // @synthesize leftItem=_leftItem;
- (void).cxx_destruct;
- (void)reloadWidget;
- (void)itemTapped:(id)arg1;
- (void)makeConstraints;
- (void)setTitle:(id)arg1;
- (void)setData:(id)arg1;
- (double)realHeight;
- (void)refreshData;
- (void)titleControlHasTapped;
- (id)descColor;
- (id)descFont;
- (id)titleColor;
- (id)titleFont;
- (void)initViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

