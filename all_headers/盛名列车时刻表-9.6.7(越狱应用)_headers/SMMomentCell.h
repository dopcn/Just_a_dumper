//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface SMMomentCell : UITableViewCell
{
    UILabel *number;
    UILabel *stationName;
    UILabel *arriveTime;
    UILabel *costDay;
    UILabel *distance;
    UILabel *timeConsuming;
    long long index;
    UIImageView *_localImgView;
    UILabel *_speedLabel;
}

@property(retain, nonatomic) UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(retain, nonatomic) UIImageView *localImgView; // @synthesize localImgView=_localImgView;
@property(nonatomic) long long index; // @synthesize index;
@property(retain, nonatomic) UILabel *costDay; // @synthesize costDay;
@property(retain, nonatomic) UILabel *timeConsuming; // @synthesize timeConsuming;
@property(retain, nonatomic) UILabel *distance; // @synthesize distance;
@property(retain, nonatomic) UILabel *arriveTime; // @synthesize arriveTime;
@property(retain, nonatomic) UILabel *stationName; // @synthesize stationName;
@property(retain, nonatomic) UILabel *number; // @synthesize number;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCurrentLocation:(_Bool)arg1;
- (void)setNumber:(id)arg1 stationName:(id)arg2 arriveTime:(id)arg3 timeConsuming:(id)arg4 costDay:(id)arg5 distance:(long long)arg6 speed:(long long)arg7;
- (void)clearsContent;
- (id)initWithStyle:(long long)arg1 frame:(struct CGRect)arg2 reuseIdentifier:(id)arg3;
- (void)dealloc;

@end

