//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UILabel, UIView;

@interface SHMillionaireButton : UIButton
{
    _Bool _isSetShadow;
    NSString *_title;
    NSString *_number;
    UILabel *_questionTitleLabel;
    UILabel *_numberLabel;
    UIView *_progressView;
    UILabel *_reliveCountView;
}

@property(nonatomic) _Bool isSetShadow; // @synthesize isSetShadow=_isSetShadow;
@property(retain, nonatomic) UILabel *reliveCountView; // @synthesize reliveCountView=_reliveCountView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *questionTitleLabel; // @synthesize questionTitleLabel=_questionTitleLabel;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)showReliveSum:(unsigned long long)arg1;
- (void)refreshProgress:(float)arg1 status:(unsigned long long)arg2;
- (void)setupConstraints;
- (void)setupRoundCorner:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setupShadow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

