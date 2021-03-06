//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IQYVipWithHomeTipInfo, NSTimer, UIButton, UILabel;

@interface QYVipWithHomeTipsView : UIView
{
    UIButton *_closeButton;
    UIButton *_btnDetail;
    NSTimer *_timer;
    id _delegate;
    double _timeCount;
    double _showTime;
    UIView *_titleView;
    UILabel *_primaryLabel;
    UILabel *_lesserLabel;
    IQYVipWithHomeTipInfo *_tipInfo;
}

+ (void)hideWithAnimate:(_Bool)arg1;
+ (id)bringToFront;
+ (id)showWithAnimate:(_Bool)arg1 delegate:(id)arg2 data:(id)arg3;
@property(retain, nonatomic) IQYVipWithHomeTipInfo *tipInfo; // @synthesize tipInfo=_tipInfo;
@property(retain, nonatomic) UILabel *lesserLabel; // @synthesize lesserLabel=_lesserLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) double timeCount; // @synthesize timeCount=_timeCount;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *btnDetail; // @synthesize btnDetail=_btnDetail;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)timerEvent:(id)arg1;
- (void)addVip:(id)arg1;
- (void)dissappear:(id)arg1;
- (void)hideWithAnimate:(_Bool)arg1;
- (void)showWithAnimate:(_Bool)arg1;

@end

