//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface TGArrowButton : UIButton
{
    _Bool _isUp;
    NSString *_title;
    double _spacing;
    double _margin;
    NSString *_imgNameForUp;
    NSString *_imgNameForDown;
    NSString *_bgImgNameForUp;
    NSString *_bgImgNameForDown;
}

@property(retain, nonatomic) NSString *bgImgNameForDown; // @synthesize bgImgNameForDown=_bgImgNameForDown;
@property(retain, nonatomic) NSString *bgImgNameForUp; // @synthesize bgImgNameForUp=_bgImgNameForUp;
@property(retain, nonatomic) NSString *imgNameForDown; // @synthesize imgNameForDown=_imgNameForDown;
@property(retain, nonatomic) NSString *imgNameForUp; // @synthesize imgNameForUp=_imgNameForUp;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) _Bool isUp; // @synthesize isUp=_isUp;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initialize;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

