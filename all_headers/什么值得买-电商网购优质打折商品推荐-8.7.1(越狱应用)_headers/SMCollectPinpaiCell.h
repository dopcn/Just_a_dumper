//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableDictionary, SMCustomTagLabel, TTTAttributedLabel, UIImageView, UIView;

@interface SMCollectPinpaiCell : UITableViewCell
{
    NSMutableDictionary *_dataDict;
    UIImageView *_imageViewFocus;
    TTTAttributedLabel *_labelTitle;
    TTTAttributedLabel *_labelSubTitle;
    TTTAttributedLabel *_labelTime;
    SMCustomTagLabel *_lblType;
    UIView *_lineView;
}

+ (double)getCellHeight:(long long)arg1;
+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) SMCustomTagLabel *lblType; // @synthesize lblType=_lblType;
@property(retain, nonatomic) TTTAttributedLabel *labelTime; // @synthesize labelTime=_labelTime;
@property(retain, nonatomic) TTTAttributedLabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
@property(retain, nonatomic) TTTAttributedLabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIImageView *imageViewFocus; // @synthesize imageViewFocus=_imageViewFocus;
@property(retain, nonatomic) NSMutableDictionary *dataDict; // @synthesize dataDict=_dataDict;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initDefaultView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

