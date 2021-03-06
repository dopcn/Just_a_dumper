//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UILabel;

@interface UPSAgreementView : UIView
{
    UIButton *_selectButton;
    UIButton *_contentButton;
    UILabel *_label;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *contentButton; // @synthesize contentButton=_contentButton;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithPlainText:(id)arg1 hightLightText:(id)arg2;

@end

