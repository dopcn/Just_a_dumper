//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBJobBaseCell.h"

@class NSDictionary, UIImageView, UILabel;

@interface WBJobListMingqiOneCell : WBJobBaseCell
{
    UILabel *_label;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_subtitle;
    UILabel *_describe;
    NSDictionary *_model;
}

@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *describe; // @synthesize describe=_describe;
@property(retain, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setData:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

