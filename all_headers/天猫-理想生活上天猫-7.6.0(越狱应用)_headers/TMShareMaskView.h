//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIVisualEffectView;

@interface TMShareMaskView : UIControl
{
    UIVisualEffectView *_showblurEffect;
}

@property(retain, nonatomic) UIVisualEffectView *showblurEffect; // @synthesize showblurEffect=_showblurEffect;
- (void).cxx_destruct;
- (void)showblur:(_Bool)arg1;
- (id)initWithCaptureLandscapeFrame:(struct CGRect)arg1;
- (id)initWithCaptureShowFrame:(struct CGRect)arg1;
- (id)initWithCaptureFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

