//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUBaseBlock.h"

@class NSArray, PPLUMarkImageControl, UIView;

@interface PPExpressionBlock : QYUBaseBlock
{
    PPLUMarkImageControl *_imageControl;
    NSArray *_textControls;
    UIView *_metaContent;
    UIView *_coverView;
}

+ (void)pp_prepareLayout:(id)arg1;
+ (double)getHeightByData:(id)arg1 rowWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIView *metaContent; // @synthesize metaContent=_metaContent;
@property(retain, nonatomic) NSArray *textControls; // @synthesize textControls=_textControls;
@property(retain, nonatomic) PPLUMarkImageControl *imageControl; // @synthesize imageControl=_imageControl;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyDescAction:(id)arg1;
- (void)copyTitleAction:(id)arg1;
- (void)pp_copyText:(id)arg1;
- (void)longPressed:(id)arg1;
- (void)applyData;
- (void)layoutSubviews;
- (void)p_setupLayouts;
- (void)initSubControls;

@end

