//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWIBToolItem.h"

@class UIControl, UIImageView, UILabel;

@interface YWIBiOSPhotosPickToolItem4Original : YWIBToolItem
{
    UIControl *_controlBackground;
    UIImageView *_imageViewBack;
    UIImageView *_imageViewFront;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageViewFront; // @synthesize imageViewFront=_imageViewFront;
@property(retain, nonatomic) UIImageView *imageViewBack; // @synthesize imageViewBack=_imageViewBack;
@property(retain, nonatomic) UIControl *controlBackground; // @synthesize controlBackground=_controlBackground;
- (void).cxx_destruct;
- (void)setTotalSize:(unsigned long long)arg1;
- (void)setChecked:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

