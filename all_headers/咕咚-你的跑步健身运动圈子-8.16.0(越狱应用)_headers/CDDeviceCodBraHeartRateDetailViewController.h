//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDViewController.h"

@class UIButton, UILabel;

@interface CDDeviceCodBraHeartRateDetailViewController : CDViewController
{
    unsigned long long _restHeartRate;
    UILabel *_restHeartRateLabel;
    UILabel *_firstHeartRateLabel;
    UILabel *_secondHeartRateLabel;
    UILabel *_thirdHeartRateLabel;
    UILabel *_fourthHeartRateLabel;
    UILabel *_fifthHeartRateLabel;
    UILabel *_sixthHeartRateLabel;
    UIButton *_tryAainButton;
}

+ (id)controller;
@property(nonatomic) __weak UIButton *tryAainButton; // @synthesize tryAainButton=_tryAainButton;
@property(nonatomic) __weak UILabel *sixthHeartRateLabel; // @synthesize sixthHeartRateLabel=_sixthHeartRateLabel;
@property(nonatomic) __weak UILabel *fifthHeartRateLabel; // @synthesize fifthHeartRateLabel=_fifthHeartRateLabel;
@property(nonatomic) __weak UILabel *fourthHeartRateLabel; // @synthesize fourthHeartRateLabel=_fourthHeartRateLabel;
@property(nonatomic) __weak UILabel *thirdHeartRateLabel; // @synthesize thirdHeartRateLabel=_thirdHeartRateLabel;
@property(nonatomic) __weak UILabel *secondHeartRateLabel; // @synthesize secondHeartRateLabel=_secondHeartRateLabel;
@property(nonatomic) __weak UILabel *firstHeartRateLabel; // @synthesize firstHeartRateLabel=_firstHeartRateLabel;
@property(nonatomic) __weak UILabel *restHeartRateLabel; // @synthesize restHeartRateLabel=_restHeartRateLabel;
@property(nonatomic) unsigned long long restHeartRate; // @synthesize restHeartRate=_restHeartRate;
- (void).cxx_destruct;
- (void)completeButtonClicked:(id)arg1;
- (void)detectAgainButtonClicked:(id)arg1;
- (void)viewDidLoad;

@end

