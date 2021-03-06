//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SNUIImageView, UIButton;
@protocol SNO2OAdvertisementDelegate;

@interface SNO2OAdvertisementView : UIView
{
    id <SNO2OAdvertisementDelegate> _advertisementViewDelegate;
    UIButton *_closeBtn;
    SNUIImageView *_advertiseView;
    UIView *_backgroudView;
    UIButton *_imageBtn;
}

@property(retain, nonatomic) UIButton *imageBtn; // @synthesize imageBtn=_imageBtn;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) SNUIImageView *advertiseView; // @synthesize advertiseView=_advertiseView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak id <SNO2OAdvertisementDelegate> advertisementViewDelegate; // @synthesize advertisementViewDelegate=_advertisementViewDelegate;
- (void).cxx_destruct;
- (void)imageBtnClick;
- (void)closeBtnClick;
- (void)setURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

