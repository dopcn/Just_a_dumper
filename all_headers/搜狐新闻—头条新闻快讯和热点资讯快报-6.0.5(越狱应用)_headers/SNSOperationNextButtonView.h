//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSOperationBaseView.h"

@class BaseButton, NSString, UIView, YYLabel;
@protocol SNSOperationNextButtonViewDelegate;

@interface SNSOperationNextButtonView : SNSOperationBaseView
{
    UIView *_lineView;
    BaseButton *_nextButton;
    UIView *_loadView;
    YYLabel *_serviceLabel;
    NSString *_tempTitle;
    _Bool _isSubmit;
    long long _status;
    id <SNSOperationNextButtonViewDelegate> _delegate;
}

@property(nonatomic) _Bool isSubmit; // @synthesize isSubmit=_isSubmit;
@property(nonatomic) __weak id <SNSOperationNextButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)hiddenLoadView;
- (void)showLoadView:(id)arg1 withWidth:(double)arg2;
- (void)nextButtonAction:(id)arg1;
- (void)creatSubViews;
- (void)changeNextButtonStatus:(long long)arg1;
- (void)setViewFrame:(struct CGRect)arg1;
- (id)init;

@end

