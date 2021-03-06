//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKCell.h"

#import "HTLHomePageHotelTypeSwitchViewType-Protocol.h"

@class UIButton, UILabel, UIView;

@interface HTLHomePageHotelTypeSwitchView_A : SAKCell <HTLHomePageHotelTypeSwitchViewType>
{
    _Bool _hourRoomSelected;
    CDUnknownBlockType _onSelect;
    CDUnknownBlockType _onSelectionChange;
    unsigned long long _accommodationType;
    UIButton *_inlandHotelButton;
    UIButton *_overseaHotelButton;
    UIButton *_hourRoomOrPhoenixButton;
    UIButton *_apartmentButton;
    UIView *_slideView;
    UILabel *_redDotLabel;
    long long _redDotIndex;
}

@property(nonatomic) long long redDotIndex; // @synthesize redDotIndex=_redDotIndex;
@property(retain, nonatomic) UILabel *redDotLabel; // @synthesize redDotLabel=_redDotLabel;
@property(retain, nonatomic) UIView *slideView; // @synthesize slideView=_slideView;
@property(retain, nonatomic) UIButton *apartmentButton; // @synthesize apartmentButton=_apartmentButton;
@property(retain, nonatomic) UIButton *hourRoomOrPhoenixButton; // @synthesize hourRoomOrPhoenixButton=_hourRoomOrPhoenixButton;
@property(retain, nonatomic) UIButton *overseaHotelButton; // @synthesize overseaHotelButton=_overseaHotelButton;
@property(retain, nonatomic) UIButton *inlandHotelButton; // @synthesize inlandHotelButton=_inlandHotelButton;
@property(nonatomic) _Bool hourRoomSelected; // @synthesize hourRoomSelected=_hourRoomSelected;
@property(nonatomic) unsigned long long accommodationType; // @synthesize accommodationType=_accommodationType;
@property(copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(copy, nonatomic) CDUnknownBlockType onSelect; // @synthesize onSelect=_onSelect;
- (void).cxx_destruct;
- (id)buttonWithIndex:(long long)arg1;
- (void)updateSwitchViewApartmentTabTitle:(id)arg1;
- (void)cleanRedDot;
- (void)configWithRedIndex:(long long)arg1 content:(id)arg2;
- (void)didClickTabButtonWithType:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
@property(readonly, nonatomic) long long fontSize;
- (void)setupCorner:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

