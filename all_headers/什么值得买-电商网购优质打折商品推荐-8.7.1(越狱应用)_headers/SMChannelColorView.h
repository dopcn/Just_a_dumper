//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface SMChannelColorView : UIView
{
    double _topMargin;
    double _lineMargin;
    double _spaceMargin;
    double _edgeMargin;
    NSString *_text;
    UIColor *_colorType;
    unsigned long long _typeColor;
    UILabel *_labelType;
}

@property(retain, nonatomic) UILabel *labelType; // @synthesize labelType=_labelType;
@property(nonatomic) unsigned long long typeColor; // @synthesize typeColor=_typeColor;
@property(retain, nonatomic) UIColor *colorType; // @synthesize colorType=_colorType;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)redraw;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

