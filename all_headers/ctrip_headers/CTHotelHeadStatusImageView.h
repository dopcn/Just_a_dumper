//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CTChateHeadImageView, UIColor, UIImageView;

@interface CTHotelHeadStatusImageView : UIView
{
    UIView *_imageBgView;
    CTChateHeadImageView *_headImageView;
    UIImageView *_statusImageView;
    UIColor *_statusColor;
}

@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) CTChateHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *imageBgView; // @synthesize imageBgView=_imageBgView;
- (void).cxx_destruct;
- (void)setStatusImageWith:(id)arg1;
- (void)setBgCornerRadius;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

