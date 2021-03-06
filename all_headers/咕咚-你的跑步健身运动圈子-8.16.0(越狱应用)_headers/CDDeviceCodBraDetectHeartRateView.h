//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSMutableArray, NSTimer, UIImageView, UILabel;
@protocol CDDeviceCodBraDetectHeartRateViewDelegate;

@interface CDDeviceCodBraDetectHeartRateView : UIView
{
    _Bool _canRecordHeartRate;
    _Bool _progressAnimationStarted;
    id <CDDeviceCodBraDetectHeartRateViewDelegate> _delegate;
    unsigned long long _restHeartRate;
    long long _deviceCategory;
    UIImageView *_bgImageView;
    UIImageView *_startTipsImageView;
    UILabel *_startTipsLabel;
    UILabel *_heartRateLabel;
    UIImageView *_heartRateUintImageView;
    UILabel *_heartRateUintLabel;
    CAShapeLayer *_progressLayer;
    NSMutableArray *_restHeartRateArray;
    long long _currentHeartRate;
    NSTimer *_countDownTimer;
}

@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) _Bool progressAnimationStarted; // @synthesize progressAnimationStarted=_progressAnimationStarted;
@property(nonatomic) long long currentHeartRate; // @synthesize currentHeartRate=_currentHeartRate;
@property(retain, nonatomic) NSMutableArray *restHeartRateArray; // @synthesize restHeartRateArray=_restHeartRateArray;
@property(nonatomic) _Bool canRecordHeartRate; // @synthesize canRecordHeartRate=_canRecordHeartRate;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UILabel *heartRateUintLabel; // @synthesize heartRateUintLabel=_heartRateUintLabel;
@property(retain, nonatomic) UIImageView *heartRateUintImageView; // @synthesize heartRateUintImageView=_heartRateUintImageView;
@property(retain, nonatomic) UILabel *heartRateLabel; // @synthesize heartRateLabel=_heartRateLabel;
@property(retain, nonatomic) UILabel *startTipsLabel; // @synthesize startTipsLabel=_startTipsLabel;
@property(retain, nonatomic) UIImageView *startTipsImageView; // @synthesize startTipsImageView=_startTipsImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) long long deviceCategory; // @synthesize deviceCategory=_deviceCategory;
@property(nonatomic) unsigned long long restHeartRate; // @synthesize restHeartRate=_restHeartRate;
@property(nonatomic) __weak id <CDDeviceCodBraDetectHeartRateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateHeartRateLabel;
- (void)startProgressAnimation;
- (void)startDetect;
- (void)resetState;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

