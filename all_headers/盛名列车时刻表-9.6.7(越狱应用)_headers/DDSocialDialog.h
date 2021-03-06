//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UIControl, UILabel;
@protocol DDSocialDialogDelegate;

@interface DDSocialDialog : UIView
{
    int theme_;
    UIButton *closeButton_;
    UILabel *titleLabel_;
    UIView *contentView_;
    UIControl *touchInterceptingControl_;
    struct CGSize defaultFrameSize_;
    long long orientation_;
    _Bool showingKeyboard_;
    id <DDSocialDialogDelegate> dialogDelegate_;
    _Bool showAdsAtBotton_;
    int animationType_;
    _Bool shouldAlignToTop_;
    UIColor *titleBackgroundColor_;
    _Bool shouldShowKeyboard_;
    UIView *mainView_;
}

@property(nonatomic) _Bool shouldShowKeyboard; // @synthesize shouldShowKeyboard=shouldShowKeyboard_;
@property(retain, nonatomic) UIColor *titleBackgroundColor; // @synthesize titleBackgroundColor=titleBackgroundColor_;
@property(nonatomic) _Bool shouldAlignToTop; // @synthesize shouldAlignToTop=shouldAlignToTop_;
@property(nonatomic) int animationType; // @synthesize animationType=animationType_;
@property(nonatomic) _Bool showAdsAtBotton; // @synthesize showAdsAtBotton=showAdsAtBotton_;
@property(nonatomic) id <DDSocialDialogDelegate> dialogDelegate; // @synthesize dialogDelegate=dialogDelegate_;
@property(readonly, retain, nonatomic) UIView *contentView; // @synthesize contentView=contentView_;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=titleLabel_;
@property(readonly, nonatomic) int theme; // @synthesize theme=theme_;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)deviceOrientationDidChange:(void *)arg1;
- (_Bool)shouldRotateToOrientation:(long long)arg1;
- (void)sizeToFitOrientation:(_Bool)arg1;
- (struct CGAffineTransform)transformForOrientation;
- (void)bounce2AnimationStopped;
- (void)bounce1AnimationStopped;
- (void)strokeLines:(struct CGRect)arg1 stroke:(struct CGColor *)arg2;
- (void)drawRect:(struct CGRect)arg1 fill:(struct CGColor *)arg2 radius:(double)arg3;
- (void)addRoundedRectToPath:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(float)arg3;
- (void)postDismissCleanup;
- (void)dismiss:(_Bool)arg1;
- (void)cancel;
- (void)show;
- (void)setUpSubviews;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(int)arg2;

@end

