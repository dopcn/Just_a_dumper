//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PopupView : UIView
{
    UIView *_popContentView;
    UIView *_window;
}

+ (id)showWithPopView:(id)arg1;
@property(retain, nonatomic) UIView *window; // @synthesize window=_window;
@property(retain, nonatomic) UIView *popContentView; // @synthesize popContentView=_popContentView;
- (void).cxx_destruct;
- (void)releaseWindow;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)pulseAnimation;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)commonInit;

@end

