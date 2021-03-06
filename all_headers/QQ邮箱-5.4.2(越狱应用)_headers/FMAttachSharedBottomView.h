//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, FMEasyTouchButton, NSArray, UIImageView, UILabel;

@interface FMAttachSharedBottomView : UIControl
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    FMEasyTouchButton *_closeButton;
    NSArray *_images;
    double _filetypeImageBorderWidth;
    CALayer *_borderLayer;
    struct CGSize _filetypeImageSize;
    struct UIOffset _filetypeImageOffset;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) double filetypeImageBorderWidth; // @synthesize filetypeImageBorderWidth=_filetypeImageBorderWidth;
@property(nonatomic) struct UIOffset filetypeImageOffset; // @synthesize filetypeImageOffset=_filetypeImageOffset;
@property(nonatomic) struct CGSize filetypeImageSize; // @synthesize filetypeImageSize=_filetypeImageSize;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) FMEasyTouchButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

