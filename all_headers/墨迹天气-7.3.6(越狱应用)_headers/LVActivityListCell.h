//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCTableViewCell.h"

@class LVActivityListCellObject, LVActivityListImageView, UIButton, UILabel, UIView;

@interface LVActivityListCell : IPCTableViewCell
{
    LVActivityListCellObject *_listCellObject;
    UIView *_cardView;
    LVActivityListImageView *_topImageView;
    UIView *_themeView;
    UIButton *_peopleNumBtn;
    UILabel *_leftLabel1;
    UILabel *_leftLabel2;
    UIButton *_hourBtn;
    UIButton *_minuteBtn;
    UIButton *_secondBtn;
    UILabel *_rightLabel1;
    UILabel *_rightLabel2;
    UILabel *_rightLabel3;
    UILabel *_rightLabel4;
}

@property(retain, nonatomic) UILabel *rightLabel4; // @synthesize rightLabel4=_rightLabel4;
@property(retain, nonatomic) UILabel *rightLabel3; // @synthesize rightLabel3=_rightLabel3;
@property(retain, nonatomic) UILabel *rightLabel2; // @synthesize rightLabel2=_rightLabel2;
@property(retain, nonatomic) UILabel *rightLabel1; // @synthesize rightLabel1=_rightLabel1;
@property(retain, nonatomic) UIButton *secondBtn; // @synthesize secondBtn=_secondBtn;
@property(retain, nonatomic) UIButton *minuteBtn; // @synthesize minuteBtn=_minuteBtn;
@property(retain, nonatomic) UIButton *hourBtn; // @synthesize hourBtn=_hourBtn;
@property(retain, nonatomic) UILabel *leftLabel2; // @synthesize leftLabel2=_leftLabel2;
@property(retain, nonatomic) UILabel *leftLabel1; // @synthesize leftLabel1=_leftLabel1;
@property(retain, nonatomic) UIButton *peopleNumBtn; // @synthesize peopleNumBtn=_peopleNumBtn;
@property(retain, nonatomic) UIView *themeView; // @synthesize themeView=_themeView;
@property(retain, nonatomic) LVActivityListImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) LVActivityListCellObject *listCellObject; // @synthesize listCellObject=_listCellObject;
- (void).cxx_destruct;
- (void)getDateComWithEndTime;
- (void)updateTime;
- (void)setupData;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

