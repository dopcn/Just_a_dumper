//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCBaseComponent.h"

#import "DCRPHomeRouteBottomViewDelegate-Protocol.h"

@class DCRPHomeModel, DCRPHomeRouteBottomView, DCRPRoleSwitchView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface DCRPHomeRouteCom : DCBaseComponent <DCRPHomeRouteBottomViewDelegate>
{
    UIView *_view;
    UIView *_mapWrapView;
    DCRPHomeModel *_model;
    UILabel *_priceView;
    UIImageView *_priceIcon;
    UIButton *_priceBtn;
    DCRPRoleSwitchView *_roleSwitchView;
    DCRPHomeRouteBottomView *_bottomView;
    UIButton *_mapBtn;
}

@property(retain, nonatomic) UIButton *mapBtn; // @synthesize mapBtn=_mapBtn;
@property(retain, nonatomic) DCRPHomeRouteBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) DCRPRoleSwitchView *roleSwitchView; // @synthesize roleSwitchView=_roleSwitchView;
@property(retain, nonatomic) UIButton *priceBtn; // @synthesize priceBtn=_priceBtn;
@property(retain, nonatomic) UIImageView *priceIcon; // @synthesize priceIcon=_priceIcon;
@property(retain, nonatomic) UILabel *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) DCRPHomeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *mapWrapView; // @synthesize mapWrapView=_mapWrapView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)onMapBtnClick;
- (void)onPriceBtnClick;
- (void)bottomViewExpandChanged;
- (void)refreshPrice:(long long)arg1;
- (long long)selectedRole;
- (void)setModel:(id)arg1 role:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

