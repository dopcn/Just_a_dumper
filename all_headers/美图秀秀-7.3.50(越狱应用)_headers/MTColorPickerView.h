//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImage, UIImageView, UIView;

@interface MTColorPickerView : UIControl
{
    UIImageView *_tipImageColorView;
    UIImageView *_thumbImageView;
    UIView *_currentColorView;
    UIColor *_currentColor;
    UIImage *_colorImage;
    unsigned long long _colorPickerViewStyle;
    UIImageView *_bgImageview;
}

@property(retain, nonatomic) UIImageView *bgImageview; // @synthesize bgImageview=_bgImageview;
@property(nonatomic) unsigned long long colorPickerViewStyle; // @synthesize colorPickerViewStyle=_colorPickerViewStyle;
@property(retain, nonatomic) UIImage *colorImage; // @synthesize colorImage=_colorImage;
@property(retain, nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)unregisterFromAppStateNotifications;
- (void)registerForAppStateNotifications;
- (struct CGContext *)createARGBBitmapContextFromImage:(struct CGImage *)arg1;
- (id)getPixelColorAtLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hexStringFromColor:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;
- (void)commInit;
- (void)dealloc;

@end

