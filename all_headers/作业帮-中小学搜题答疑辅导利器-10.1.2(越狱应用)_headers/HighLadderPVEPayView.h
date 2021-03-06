//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, RACSignal, UIButton, UIImageView, UILabel;

@interface HighLadderPVEPayView : UIView
{
    double _alertHeight;
    NSMutableArray *_eventSignals;
    RACSignal *_touchInSideSignal;
    UIImageView *_iconImageView;
    UILabel *_contentLable;
    UIButton *_downButton;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *downButton; // @synthesize downButton=_downButton;
@property(retain, nonatomic) UILabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) RACSignal *touchInSideSignal; // @synthesize touchInSideSignal=_touchInSideSignal;
@property(retain, nonatomic) NSMutableArray *eventSignals; // @synthesize eventSignals=_eventSignals;
@property(nonatomic) double alertHeight; // @synthesize alertHeight=_alertHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissAlert;
- (void)customView;
- (void)customUnlockView;
- (id)initWithType:(long long)arg1;

@end

