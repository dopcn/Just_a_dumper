//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface XSTLocationSearchBar : UIView
{
    UIImageView *_backGroundImgView;
    UIImageView *_glassImgView;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIImageView *glassImgView; // @synthesize glassImgView=_glassImgView;
@property(retain, nonatomic) UIImageView *backGroundImgView; // @synthesize backGroundImgView=_backGroundImgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initial;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

