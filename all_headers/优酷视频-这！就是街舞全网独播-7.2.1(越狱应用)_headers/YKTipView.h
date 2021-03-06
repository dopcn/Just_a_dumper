//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface YKTipView : UIView
{
    UILabel *_titleLb;
    UIImageView *_imageView;
    NSString *_text;
    UIImage *_image;
    long long _numberOfLine;
    long long _contentAlignment;
    struct CGSize _constrainedSize;
}

@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) long long numberOfLine; // @synthesize numberOfLine=_numberOfLine;
@property(nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (struct CGSize)messageSize;
- (void)resetSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

