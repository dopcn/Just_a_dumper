//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYFeedsBoxAdView.h"

@class UIImageView;

@interface IMYListenDetailAdView : IMYFeedsBoxAdView
{
    UIImageView *_imageView;
}

+ (struct UIEdgeInsets)edgeInsets;
+ (double)heightWithModel:(id)arg1;
+ (void)load;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)imageViews;
- (void)setupWithDownloadStyle:(id)arg1;
- (void)setupTextAndImageStyleWithModel:(id)arg1;
- (void)layoutWithModel:(id)arg1;
- (void)setPlaceholderImage;
- (void)setupSubviews;

@end

