//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TTKTrainCustomizedDetailInfoItem, UIImageView, UILabel;

@interface TTKTrainCustomizedDetailInfoCell : UITableViewCell
{
    TTKTrainCustomizedDetailInfoItem *_item;
    UIImageView *_tickImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tickImageView; // @synthesize tickImageView=_tickImageView;
@property(retain, nonatomic) TTKTrainCustomizedDetailInfoItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

