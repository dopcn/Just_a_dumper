//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SNLiveLiveDTO, SNLiveMessageDTO, SNUIImageView, UIButton;
@protocol SNLiveAdViewDelegate;

@interface SNLiveAdView : UIView
{
    _Bool _isShow;
    id <SNLiveAdViewDelegate> _delegate;
    SNLiveLiveDTO *_liveDTO;
    SNLiveMessageDTO *_messageDTO;
    SNUIImageView *_adImgView;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) SNUIImageView *adImgView; // @synthesize adImgView=_adImgView;
@property(retain, nonatomic) SNLiveMessageDTO *messageDTO; // @synthesize messageDTO=_messageDTO;
@property(retain, nonatomic) SNLiveLiveDTO *liveDTO; // @synthesize liveDTO=_liveDTO;
@property(nonatomic) __weak id <SNLiveAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)closeBtnClick;
- (void)layoutSubviews;
- (void)updateView:(id)arg1;
- (void)refreshView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

