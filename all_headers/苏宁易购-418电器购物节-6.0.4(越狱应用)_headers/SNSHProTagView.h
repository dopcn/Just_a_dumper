//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIFont;
@protocol SNSHProTagViewDelegate;

@interface SNSHProTagView : UIView
{
    NSMutableArray *colorArray_;
    NSMutableArray *fontArray_;
    UIView *view;
    NSArray *textArray;
    struct CGSize sizeFit;
    UIColor *lblBackgroundColor;
    UIColor *highlightedBackgroundColor;
    _Bool automaticResize;
    _Bool _viewOnly;
    _Bool _isBTestProDetail;
    id <SNSHProTagViewDelegate> _tagDelegate;
    UIView *_switchHotKeyButtonView;
    NSMutableArray *_colorArray;
    NSMutableArray *_fontArray;
    NSArray *_hotwordDtoList;
    UIFont *_font;
    double _labelMargin;
    double _bottomMargin;
    double _horizontalPadding;
    double _verticalPadding;
    double _minimumWidth;
}

+ (double)heightWithLabels:(id)arg1 font:(id)arg2 labelMargin:(double)arg3 horizontalPadding:(double)arg4 isProDetail:(_Bool)arg5;
@property(nonatomic) _Bool isBTestProDetail; // @synthesize isBTestProDetail=_isBTestProDetail;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double labelMargin; // @synthesize labelMargin=_labelMargin;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSArray *hotwordDtoList; // @synthesize hotwordDtoList=_hotwordDtoList;
@property(nonatomic) _Bool viewOnly; // @synthesize viewOnly=_viewOnly;
@property(retain, nonatomic) NSMutableArray *fontArray; // @synthesize fontArray=_fontArray;
@property(retain, nonatomic) NSMutableArray *colorArray; // @synthesize colorArray=_colorArray;
@property(retain, nonatomic) UIView *switchHotKeyButtonView; // @synthesize switchHotKeyButtonView=_switchHotKeyButtonView;
@property(nonatomic) __weak id <SNSHProTagViewDelegate> tagDelegate; // @synthesize tagDelegate=_tagDelegate;
@property(nonatomic) _Bool automaticResize; // @synthesize automaticResize;
@property(retain, nonatomic) NSArray *textArray; // @synthesize textArray;
@property(retain, nonatomic) UIView *view; // @synthesize view;
- (void).cxx_destruct;
- (void)noSelectedImage;
- (void)showBackImage;
- (void)showBorder;
- (void)switchHotKeys;
- (void)dealloc;
- (id)getBackgroundColor;
- (void)touchDragInside:(id)arg1;
- (void)touchDragExit:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)touchDownInside:(id)arg1;
- (struct CGSize)fittedSize;
- (void)display;
- (void)layoutSubviews;
- (void)touchedTag:(id)arg1;
- (void)setTagHighlightColor:(id)arg1;
- (void)setTagBackgroundColor:(id)arg1;
- (void)setTags:(id)arg1;
- (void)initArrays;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

