//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiDubutton.h"

@class UIImageView, UILabel;

@interface BMSharedBikeHorizentalTextButton : BaiDubutton
{
    UIImageView *_leftIcon;
    UILabel *_lbTitle;
    float _ftWidth;
    float _ftHeight;
    float _ftImageWidth;
    float _ftImageHeight;
}

@property(nonatomic) float ftImageHeight; // @synthesize ftImageHeight=_ftImageHeight;
@property(nonatomic) float ftImageWidth; // @synthesize ftImageWidth=_ftImageWidth;
- (void).cxx_destruct;
- (struct CGSize)getButtonSize;
- (void)setTitleAttr:(id)arg1 ImageIcon:(id)arg2 imageAndTextSpace:(float)arg3;
- (void)setImageWidth:(float)arg1 imageHeight:(float)arg2;
- (id)init;

@end

