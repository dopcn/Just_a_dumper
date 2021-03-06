//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DUIScrollBannerCell, OLImageView, UIButton, UIImageView, UILabel;
@protocol DUIScrollPageDelegate;

@interface DUIScrollPage : UIView
{
    OLImageView *_imageView;
    UIButton *_button;
    UIImageView *_shadowImageView;
    id <DUIScrollPageDelegate> _delegate;
    DUIScrollBannerCell *_cell;
    UILabel *_adLabel;
}

@property(nonatomic) __weak UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) DUIScrollBannerCell *cell; // @synthesize cell=_cell;
@property(nonatomic) __weak id <DUIScrollPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak OLImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)setShadowHidden:(_Bool)arg1;
- (_Bool)shadowHidden;
- (void)touchCancel:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchUpOutside:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

