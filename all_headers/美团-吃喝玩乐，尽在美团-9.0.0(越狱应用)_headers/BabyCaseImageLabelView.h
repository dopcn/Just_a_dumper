//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface BabyCaseImageLabelView : UIView
{
    UIImageView *_imgView;
    UILabel *_labelContent;
    double _imageWidth;
    double _imageHeight;
    UIImageView *_flagIndicator;
}

+ (double)viewHeight:(double)arg1;
@property(readonly, nonatomic) UIImageView *flagIndicator; // @synthesize flagIndicator=_flagIndicator;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) UILabel *labelContent; // @synthesize labelContent=_labelContent;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

