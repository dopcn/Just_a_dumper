//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QHNumLabel, UIImageView, UILabel;

@interface QHAvailableCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    QHNumLabel *_timeLabel;
}

+ (id)cellNib;
@property(retain, nonatomic) QHNumLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;

@end

