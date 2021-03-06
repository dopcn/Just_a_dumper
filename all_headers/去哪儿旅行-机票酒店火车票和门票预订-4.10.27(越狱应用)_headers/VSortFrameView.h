//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage;

@interface VSortFrameView : UIView
{
    UIButton *backgroundButton;
    struct CGPoint showCenter;
    struct CGPoint hideCenter;
    UIView *contentView;
    UIView *toolbarView;
    UIView *toolbarUnderLine;
    UIButton *clearAllButton;
    UIButton *confirmButton;
    _Bool _isShow;
    _Bool _hideClearAll;
    _Bool _stayWhenTapMiddle;
    _Bool _isRising;
    double _height;
    double _bottomMargin;
    UIView *_sortView;
    UIImage *_backgroundImage;
    NSString *_clearAllTitle;
    CDUnknownBlockType _confirm;
    CDUnknownBlockType _clearAll;
    CDUnknownBlockType _justDismissed;
}

@property(nonatomic) _Bool isRising; // @synthesize isRising=_isRising;
@property(nonatomic) _Bool stayWhenTapMiddle; // @synthesize stayWhenTapMiddle=_stayWhenTapMiddle;
@property(copy, nonatomic) CDUnknownBlockType justDismissed; // @synthesize justDismissed=_justDismissed;
@property(copy, nonatomic) CDUnknownBlockType clearAll; // @synthesize clearAll=_clearAll;
@property(copy, nonatomic) CDUnknownBlockType confirm; // @synthesize confirm=_confirm;
@property(nonatomic) _Bool hideClearAll; // @synthesize hideClearAll=_hideClearAll;
@property(retain, nonatomic) NSString *clearAllTitle; // @synthesize clearAllTitle=_clearAllTitle;
@property(readonly, nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIView *sortView; // @synthesize sortView=_sortView;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (double)shadowHeight;
- (void)confirmButtonClicked;
- (void)clearAllButtonClicked;
- (void)dismissAnimate:(_Bool)arg1;
- (void)dismiss;
- (void)tapShadow;
- (void)showInView:(id)arg1;
- (void)loadContentView;
- (void)tapToDismiss;
- (void)setupBarButtons;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

