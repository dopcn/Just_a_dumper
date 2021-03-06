//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSAttributedString, NSString, UIImageView, UILabel;

@interface FMAttachSharedView : UIControl
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_imageView;
    NSString *_titleText;
    NSAttributedString *_titleAttributedText;
    NSString *_detailText;
    NSArray *_images;
    double _labelSpacing;
    double _labelMarginRight;
    double _filetypeImageBorderWidth;
    struct CGSize _filetypeImageSize;
    struct UIOffset _filetypeImageOffset;
    struct UIEdgeInsets _insets;
}

+ (struct CGSize)imageViewSizeWithImageSize:(struct CGSize)arg1 imageCount:(long long)arg2 borderWidth:(double)arg3 imageOffset:(struct UIOffset)arg4;
+ (id)imageWithImages:(id)arg1 imageSize:(struct CGSize)arg2 borderWidth:(double)arg3 offset:(struct UIOffset)arg4;
@property(nonatomic) double filetypeImageBorderWidth; // @synthesize filetypeImageBorderWidth=_filetypeImageBorderWidth;
@property(nonatomic) struct UIOffset filetypeImageOffset; // @synthesize filetypeImageOffset=_filetypeImageOffset;
@property(nonatomic) struct CGSize filetypeImageSize; // @synthesize filetypeImageSize=_filetypeImageSize;
@property(nonatomic) double labelMarginRight; // @synthesize labelMarginRight=_labelMarginRight;
@property(nonatomic) double labelSpacing; // @synthesize labelSpacing=_labelSpacing;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSAttributedString *titleAttributedText; // @synthesize titleAttributedText=_titleAttributedText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)imageViewSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

