//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FMButton, FMImageView, UIButton, UILabel;

@interface XMessageOpenNotificationHintView : UIView
{
    UIView *_contentView;
    UIButton *_dismissButton;
    FMImageView *_imageView;
    UILabel *_hintLabel;
    FMButton *_openButton;
    UIView *_lineView;
}

+ (_Bool)shouldShowHintView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) FMButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) FMImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

