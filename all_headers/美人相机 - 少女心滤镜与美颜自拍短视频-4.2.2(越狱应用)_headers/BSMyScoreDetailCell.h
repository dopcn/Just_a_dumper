//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BSCreditInner, UILabel, UIView;

@interface BSMyScoreDetailCell : UITableViewCell
{
    BSCreditInner *_creditInner;
    UILabel *_typeNameLabel;
    UILabel *_timeLabel;
    UILabel *_scoreNumLabel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *scoreNumLabel; // @synthesize scoreNumLabel=_scoreNumLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *typeNameLabel; // @synthesize typeNameLabel=_typeNameLabel;
@property(retain, nonatomic) BSCreditInner *creditInner; // @synthesize creditInner=_creditInner;
- (void).cxx_destruct;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

