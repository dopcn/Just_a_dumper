//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAUIView.h"

@class BBAVideoLinkBannerObj, NSString, UIButton, UILabel, UIView;

@interface BBAVideoLandingHeaderBannerView : BBAUIView
{
    _Bool _hasShowed;
    CDUnknownBlockType _videoLinkClickBlock;
    CDUnknownBlockType _videoLinkCloseBlock;
    BBAVideoLinkBannerObj *_linkObj;
    UILabel *_leftTitleLable;
    UILabel *_rightTitleLabel;
    UIButton *_closeBtn;
    UIView *_bottomLine;
    NSString *_leftTitleStr;
    NSString *_rightTitleStr_long;
    NSString *_rightTitleStr_short;
    struct CGRect _leftTitleLabelRect;
    struct CGRect _rightTitleLabelRect;
}

@property(nonatomic) struct CGRect rightTitleLabelRect; // @synthesize rightTitleLabelRect=_rightTitleLabelRect;
@property(nonatomic) struct CGRect leftTitleLabelRect; // @synthesize leftTitleLabelRect=_leftTitleLabelRect;
@property(copy, nonatomic) NSString *rightTitleStr_short; // @synthesize rightTitleStr_short=_rightTitleStr_short;
@property(copy, nonatomic) NSString *rightTitleStr_long; // @synthesize rightTitleStr_long=_rightTitleStr_long;
@property(copy, nonatomic) NSString *leftTitleStr; // @synthesize leftTitleStr=_leftTitleStr;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UILabel *leftTitleLable; // @synthesize leftTitleLable=_leftTitleLable;
@property(retain, nonatomic) BBAVideoLinkBannerObj *linkObj; // @synthesize linkObj=_linkObj;
@property(copy, nonatomic) CDUnknownBlockType videoLinkCloseBlock; // @synthesize videoLinkCloseBlock=_videoLinkCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType videoLinkClickBlock; // @synthesize videoLinkClickBlock=_videoLinkClickBlock;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)closeBtnPressed:(id)arg1;
- (void)reportShowStatistic;
- (void)tapGestureClick:(id)arg1;
- (double)calculateTitleLength:(id)arg1 withFont:(id)arg2;
- (void)calculateShowTitleContent;
- (void)layoutSubviews;
- (void)refreshContent:(id)arg1;
- (void)createSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

