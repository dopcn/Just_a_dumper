//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseTableViewModule.h"

@class TGReduceFlyDealButtonModuleViewModel, UIButton;

@interface TGReduceFlyDealButtonModule : TGBaseTableViewModule
{
    UIButton *_buttonForGetLottery;
    long long _buttonAction;
}

@property(nonatomic) long long buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) UIButton *buttonForGetLottery; // @synthesize buttonForGetLottery=_buttonForGetLottery;
- (void).cxx_destruct;
- (void)initViews;
- (void)setupModule;
- (_Bool)shouldShow;

// Remaining properties
@property(retain, nonatomic) TGReduceFlyDealButtonModuleViewModel *viewModel; // @dynamic viewModel;

@end

