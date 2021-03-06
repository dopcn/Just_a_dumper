//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFlexibleBottomBarCommonItemView.h"

@class UIImageView, UILabel;

@interface WBFlexibleBottomBarItemCollectView : WBFlexibleBottomBarCommonItemView
{
    _Bool _collected;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
}

@property(nonatomic) _Bool collected; // @synthesize collected=_collected;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)logForSubmitCollect:(_Bool)arg1;
- (void)logForLoginCount:(id)arg1;
- (void)logForUnCollect:(id)arg1;
- (void)logForCollect:(id)arg1;
- (void)cancelCollectionNoti:(id)arg1;
- (void)submitCollectionNoti:(id)arg1;
- (void)infoHaveCollectedNoti:(id)arg1;
- (void)collcetInfo:(_Bool)arg1;
- (_Bool)checkCollectedNotSafe:(id)arg1;
- (void)tapClickAction:(id)arg1;
- (void)flexibleBottomBarConfigViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

